void __fastcall BattleServantBreakPointComponent___ctor(
        BattleServantBreakPointComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20

  if ( (byte_4388CA8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4388CA8 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.baseObj = (struct UnityEngine_GameObject_o *)v3;
  sub_B77560(&this->fields.baseObj);
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
  BattleServantBreakPointComponent_o *v8; // x21
  struct UnityEngine_GameObject_o *baseObj; // x23
  signed __int64 klass_low; // x8
  unsigned __int64 v11; // x24
  UnityEngine_Object_o *v12; // x23
  UISprite_o *breakPointSpr; // x23
  __int64 *v14; // x8
  System_String_o *v15; // x24
  UISprite_o *klass; // x23
  __int64 *v17; // x8
  System_String_o *v18; // x22
  int32_t v19; // w24
  UILabel_o *breakPointBackGroundSpr; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v22; // x22
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4388CA7 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17274/*"break_on_boss"*/);
    sub_B775C4(&StringLiteral_17272/*"break_off_boss"*/);
    sub_B775C4(&StringLiteral_17273/*"break_on"*/);
    this = (BattleServantBreakPointComponent_o *)sub_B775C4(&StringLiteral_17271/*"break_off"*/);
    byte_4388CA7 = 1;
  }
  baseObj = v8->fields.baseObj;
  if ( !baseObj )
    goto LABEL_41;
  LODWORD(klass_low) = baseObj[1].klass;
  if ( (int)klass_low >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)klass_low )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v12 = *(UnityEngine_Object_o **)(*(_QWORD *)&baseObj->fields.m_CachedPtr + 8 * v11 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(v12, 0LL);
      baseObj = v8->fields.baseObj;
      if ( !baseObj )
        goto LABEL_41;
      klass_low = SLODWORD(baseObj[1].klass);
      ++v11;
    }
    while ( (__int64)v11 < klass_low );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v8->fields.baseObj,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
  this = (BattleServantBreakPointComponent_o *)v8->fields.breakPointBackGroundSpr;
  if ( !this )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattleServantBreakPointComponent_o *)v8->fields.breakPointBackGroundSpr;
  if ( !this )
    goto LABEL_41;
  this = (BattleServantBreakPointComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
  if ( !this )
    goto LABEL_41;
  v23.fields.x = *(float *)&v8->fields.breakPointObjList;
  v23.fields.y = v23.fields.x;
  v23.fields.z = v23.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v23, 0LL);
  breakPointSpr = v8->fields.breakPointSpr;
  v14 = &StringLiteral_17272/*"break_off_boss"*/;
  if ( !isEnemy )
    v14 = &StringLiteral_17271/*"break_off"*/;
  v15 = (System_String_o *)*v14;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetWarBoardImage(breakPointSpr, v15, 0LL);
  this = (BattleServantBreakPointComponent_o *)v8[1].klass;
  if ( !this
    || (this = (BattleServantBreakPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL)) == 0LL )
  {
LABEL_41:
    sub_B7769C(this, *(_QWORD *)&breakPoint);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  klass = (UISprite_o *)v8[1].klass;
  v17 = &StringLiteral_17274/*"break_on_boss"*/;
  if ( !isEnemy )
    v17 = &StringLiteral_17273/*"break_on"*/;
  v18 = (System_String_o *)*v17;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetWarBoardImage(klass, v18, 0LL);
  if ( maxbreakPoint >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      this = (BattleServantBreakPointComponent_o *)v8[1].klass;
      if ( !this )
        break;
      this = (BattleServantBreakPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v19 < breakPoint, 0LL);
      breakPointBackGroundSpr = (UILabel_o *)v8->fields.breakPointBackGroundSpr;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleServantBreakPointComponent_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                     breakPointBackGroundSpr,
                                                     transform,
                                                     (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
      if ( !this )
        break;
      v22 = (UnityEngine_GameObject_o *)this;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (BattleServantBreakPointComponent_o *)UnityEngine_GameObject__get_transform(v22, 0LL);
      if ( !this )
        break;
      v24.fields.x = v8->fields.addPosX + (float)(v8->fields.scale * (float)v19);
      v24.fields.y = 0.0;
      v24.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v24, 0LL);
      this = (BattleServantBreakPointComponent_o *)v8->fields.baseObj;
      if ( !this )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
      if ( ++v19 >= maxbreakPoint )
        return;
    }
    goto LABEL_41;
  }
}