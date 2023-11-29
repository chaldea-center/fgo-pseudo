void __fastcall BattleServantBreakPointComponent___ctor(
        BattleServantBreakPointComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20

  if ( (byte_40F89F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_40F89F9 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.baseObj = (struct UnityEngine_GameObject_o *)v7;
  sub_B16F98(&this->fields.baseObj, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBreakPointComponent__Initialize(
        BattleServantBreakPointComponent_o *this,
        int32_t breakPoint,
        int32_t maxbreakPoint,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct UnityEngine_GameObject_o *baseObj; // x23
  signed __int64 klass_low; // x8
  unsigned __int64 v21; // x24
  UnityEngine_Object_o *v22; // x23
  UnityEngine_GameObject_o *breakPointBackGroundSpr; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Transform_o *transform; // x0
  UISprite_o *breakPointSpr; // x23
  __int64 *v27; // x8
  System_String_o *v28; // x24
  UnityEngine_Component_o *klass; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v31; // x23
  __int64 *v32; // x8
  System_String_o *v33; // x22
  int32_t v34; // w24
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UILabel_o *v37; // x22
  UnityEngine_Transform_o *v38; // x23
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x22
  UnityEngine_Transform_o *v41; // x0
  struct UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F89F8 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&breakPoint);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v12);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_16871, v15);
    sub_B16FFC(&StringLiteral_16869, v16);
    sub_B16FFC(&StringLiteral_16870, v17);
    sub_B16FFC(&StringLiteral_16868, v18);
    byte_40F89F8 = 1;
  }
  baseObj = this->fields.baseObj;
  if ( !baseObj )
    goto LABEL_41;
  LODWORD(klass_low) = baseObj[1].klass;
  if ( (int)klass_low >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= (unsigned int)klass_low )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v22 = *(UnityEngine_Object_o **)(*(_QWORD *)&baseObj->fields.m_CachedPtr + 8 * v21 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v22, 0LL);
      baseObj = this->fields.baseObj;
      if ( !baseObj )
        goto LABEL_41;
      klass_low = SLODWORD(baseObj[1].klass);
      ++v21;
    }
    while ( (__int64)v21 < klass_low );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.baseObj,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
  breakPointBackGroundSpr = (UnityEngine_GameObject_o *)this->fields.breakPointBackGroundSpr;
  if ( !breakPointBackGroundSpr )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(breakPointBackGroundSpr, 0, 0LL);
  v24 = (UnityEngine_GameObject_o *)this->fields.breakPointBackGroundSpr;
  if ( !v24 )
    goto LABEL_41;
  transform = UnityEngine_GameObject__get_transform(v24, 0LL);
  if ( !transform )
    goto LABEL_41;
  v43.fields.x = *(float *)&this->fields.breakPointObjList;
  v43.fields.y = v43.fields.x;
  v43.fields.z = v43.fields.x;
  UnityEngine_Transform__set_localScale(transform, v43, 0LL);
  breakPointSpr = this->fields.breakPointSpr;
  v27 = &StringLiteral_16869;
  if ( !isEnemy )
    v27 = &StringLiteral_16868;
  v28 = (System_String_o *)*v27;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetWarBoardImage(breakPointSpr, v28, 0LL);
  klass = (UnityEngine_Component_o *)this[1].klass;
  if ( !klass || (gameObject = UnityEngine_Component__get_gameObject(klass, 0LL)) == 0LL )
LABEL_41:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v31 = (UISprite_o *)this[1].klass;
  v32 = &StringLiteral_16871;
  if ( !isEnemy )
    v32 = &StringLiteral_16870;
  v33 = (System_String_o *)*v32;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetWarBoardImage(v31, v33, 0LL);
  if ( maxbreakPoint >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      v35 = (UnityEngine_Component_o *)this[1].klass;
      if ( !v35 )
        break;
      v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
      if ( !v36 )
        break;
      UnityEngine_GameObject__SetActive(v36, v34 < breakPoint, 0LL);
      v37 = (UILabel_o *)this->fields.breakPointBackGroundSpr;
      v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v39 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                          v37,
                                          v38,
                                          (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
      if ( !v39 )
        break;
      v40 = v39;
      UnityEngine_GameObject__SetActive(v39, 1, 0LL);
      v41 = UnityEngine_GameObject__get_transform(v40, 0LL);
      if ( !v41 )
        break;
      v44.fields.x = this->fields.addPosX + (float)(this->fields.scale * (float)v34);
      v44.fields.y = 0.0;
      v44.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v41, v44, 0LL);
      v42 = this->fields.baseObj;
      if ( !v42 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v42,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      if ( ++v34 >= maxbreakPoint )
        return;
    }
    goto LABEL_41;
  }
}