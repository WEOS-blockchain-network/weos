#pragma once

#include <eosio/chain/types.hpp>
#include <eosio/chain/contract_types.hpp>

namespace eosio { namespace chain {

   class apply_context;

   /**
    * @defgroup native_action_handlers Native Action Handlers
    */
   ///@{
   void apply_weos_newaccount(apply_context&);
   void apply_weos_updateauth(apply_context&);
   void apply_weos_deleteauth(apply_context&);
   void apply_weos_linkauth(apply_context&);
   void apply_weos_unlinkauth(apply_context&);

   /*
   void apply_weos_postrecovery(apply_context&);
   void apply_weos_passrecovery(apply_context&);
   void apply_weos_vetorecovery(apply_context&);
   */

   void apply_weos_setcode(apply_context&);
   void apply_weos_setabi(apply_context&);

   void apply_weos_canceldelay(apply_context&);
   ///@}  end action handlers

} } /// namespace eosio::chain
