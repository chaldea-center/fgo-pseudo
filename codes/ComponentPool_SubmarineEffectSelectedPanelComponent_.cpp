void __fastcall ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
        ComponentPool_SubmarineEffectSelectedPanelComponent__o *this,
        UnityEngine_GameObject_o *prefab,
        int32_t poolSizeMax,
        const MethodInfo_25E3BA8 *method)
{
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  Il2CppClass *_1_System_Collections_Generic_List_T; // x21
  struct System_Collections_Generic_List_T__o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  Il2CppClass *v22; // x21
  __int64 v23; // x0
  ComponentPool_T__c *klass; // x8
  struct System_Collections_Generic_List_T__o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( !this )
    sub_B2C434(0LL, prefab);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.prefab = prefab;
  this->fields.poolSizeMax = poolSizeMax;
  sub_B2C2F8(
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
    sub_AC505C(method->klass->rgctx_data->_1_System_Collections_Generic_List_T_);
  v15 = (struct System_Collections_Generic_List_T__o *)sub_B2C42C(_1_System_Collections_Generic_List_T);
  method->klass->rgctx_data->_2_System_Collections_Generic_List_T___ctor->methodPointer();
  this->fields.availableComponentList = v15;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
  v22 = method->klass->rgctx_data->_1_System_Collections_Generic_List_T_;
  if ( (BYTE2(v22->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->klass->rgctx_data->_1_System_Collections_Generic_List_T_);
  v23 = sub_B2C42C(v22);
  klass = method->klass;
  v25 = (struct System_Collections_Generic_List_T__o *)v23;
  klass->rgctx_data->_2_System_Collections_Generic_List_T___ctor->methodPointer();
  this->fields.nonAvailableComponentList = v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nonAvailableComponentList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}