void __fastcall ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
        ComponentPool_SubmarineEffectSelectedPanelComponent__o *this,
        UnityEngine_GameObject_o *prefab,
        int32_t poolSizeMax,
        const MethodInfo_25CAAF8 *method)
{
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppClass *_1_System_Collections_Generic_List_T; // x21
  struct System_Collections_Generic_List_T__o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppClass *v30; // x21
  __int64 v31; // x0
  ComponentPool_T__c *klass; // x8
  struct System_Collections_Generic_List_T__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.prefab = prefab;
  this->fields.poolSizeMax = poolSizeMax;
  sub_B16F98(
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
    sub_AAFCFC(method->klass->rgctx_data->_1_System_Collections_Generic_List_T_);
  v19 = (struct System_Collections_Generic_List_T__o *)sub_B170CC(
                                                         _1_System_Collections_Generic_List_T,
                                                         v14,
                                                         v15,
                                                         v16,
                                                         v17);
  method->klass->rgctx_data->_2_System_Collections_Generic_List_T___ctor->methodPointer();
  this->fields.availableComponentList = v19;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
  v30 = method->klass->rgctx_data->_1_System_Collections_Generic_List_T_;
  if ( (BYTE2(v30->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass->rgctx_data->_1_System_Collections_Generic_List_T_);
  v31 = sub_B170CC(v30, v26, v27, v28, v29);
  klass = method->klass;
  v33 = (struct System_Collections_Generic_List_T__o *)v31;
  klass->rgctx_data->_2_System_Collections_Generic_List_T___ctor->methodPointer();
  this->fields.nonAvailableComponentList = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nonAvailableComponentList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}