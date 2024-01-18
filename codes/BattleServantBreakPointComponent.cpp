void __fastcall BattleServantBreakPointComponent___ctor(
        BattleServantBreakPointComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20

  if ( (byte_4185ABE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4185ABE = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.baseObj = (struct UnityEngine_GameObject_o *)v4;
  sub_B2C2F8(&this->fields.baseObj, v4);
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
  UISprite_o *breakPointSpr; // x23
  __int64 *v24; // x8
  System_String_o *v25; // x24
  UISprite_o *klass; // x23
  __int64 *v27; // x8
  System_String_o *v28; // x22
  int32_t v29; // w24
  UILabel_o *breakPointBackGroundSpr; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v32; // x22
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4185ABD & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&breakPoint);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v12);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_16937/*"break_on_boss"*/, v15);
    sub_B2C35C(&StringLiteral_16935/*"break_off_boss"*/, v16);
    sub_B2C35C(&StringLiteral_16936/*"break_on"*/, v17);
    this = (BattleServantBreakPointComponent_o *)sub_B2C35C(&StringLiteral_16934/*"break_off"*/, v18);
    byte_4185ABD = 1;
  }
  baseObj = v8->fields.baseObj;
  if ( !baseObj )
    goto LABEL_41;
  LODWORD(klass_low) = baseObj[1].klass;
  if ( (int)klass_low >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= (unsigned int)klass_low )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v22 = *(UnityEngine_Object_o **)(*(_QWORD *)&baseObj->fields.m_CachedPtr + 8 * v21 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v22, 0LL);
      baseObj = v8->fields.baseObj;
      if ( !baseObj )
        goto LABEL_41;
      klass_low = SLODWORD(baseObj[1].klass);
      ++v21;
    }
    while ( (__int64)v21 < klass_low );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v8->fields.baseObj,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  v33.fields.x = *(float *)&v8->fields.breakPointObjList;
  v33.fields.y = v33.fields.x;
  v33.fields.z = v33.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v33, 0LL);
  breakPointSpr = v8->fields.breakPointSpr;
  v24 = &StringLiteral_16935/*"break_off_boss"*/;
  if ( !isEnemy )
    v24 = &StringLiteral_16934/*"break_off"*/;
  v25 = (System_String_o *)*v24;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetWarBoardImage(breakPointSpr, v25, 0LL);
  this = (BattleServantBreakPointComponent_o *)v8[1].klass;
  if ( !this
    || (this = (BattleServantBreakPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL)) == 0LL )
  {
LABEL_41:
    sub_B2C434(this, *(_QWORD *)&breakPoint);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  klass = (UISprite_o *)v8[1].klass;
  v27 = &StringLiteral_16937/*"break_on_boss"*/;
  if ( !isEnemy )
    v27 = &StringLiteral_16936/*"break_on"*/;
  v28 = (System_String_o *)*v27;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetWarBoardImage(klass, v28, 0LL);
  if ( maxbreakPoint >= 1 )
  {
    v29 = 0;
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v29 < breakPoint, 0LL);
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
                                                     (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
      if ( !this )
        break;
      v32 = (UnityEngine_GameObject_o *)this;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (BattleServantBreakPointComponent_o *)UnityEngine_GameObject__get_transform(v32, 0LL);
      if ( !this )
        break;
      v34.fields.x = v8->fields.addPosX + (float)(v8->fields.scale * (float)v29);
      v34.fields.y = 0.0;
      v34.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v34, 0LL);
      this = (BattleServantBreakPointComponent_o *)v8->fields.baseObj;
      if ( !this )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
      if ( ++v29 >= maxbreakPoint )
        return;
    }
    goto LABEL_41;
  }
}