void __fastcall ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
        ComponentPool_SubmarineEffectSelectedPanelComponent__o *this,
        UnityEngine_GameObject_o *prefab,
        int32_t poolSizeMax,
        const MethodInfo_241DC40 *method)
{
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppClass *_1_System_Collections_Generic_List_T; // x21
  struct System_Collections_Generic_List_T__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppClass *v26; // x21
  __int64 v27; // x0
  ComponentPool_T__c *klass; // x8
  struct System_Collections_Generic_List_T__o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.prefab = prefab;
  this->fields.poolSizeMax = poolSizeMax;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.prefab,
    (System_Int32_array **)prefab,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  _1_System_Collections_Generic_List_T = method->klass->rgctx_data->_1_System_Collections_Generic_List_T_;
  if ( (BYTE2(_1_System_Collections_Generic_List_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->klass->rgctx_data->_1_System_Collections_Generic_List_T_);
  v17 = (struct System_Collections_Generic_List_T__o *)sub_B0D974(_1_System_Collections_Generic_List_T, v14, v15);
  method->klass->rgctx_data->_2_System_Collections_Generic_List_T___ctor->methodPointer();
  this->fields.availableComponentList = v17;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  v26 = method->klass->rgctx_data->_1_System_Collections_Generic_List_T_;
  if ( (BYTE2(v26->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->klass->rgctx_data->_1_System_Collections_Generic_List_T_);
  v27 = sub_B0D974(v26, v24, v25);
  klass = method->klass;
  v29 = (struct System_Collections_Generic_List_T__o *)v27;
  klass->rgctx_data->_2_System_Collections_Generic_List_T___ctor->methodPointer();
  this->fields.nonAvailableComponentList = v29;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.nonAvailableComponentList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}