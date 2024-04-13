void __fastcall BattleServantBreakPointComponent___ctor(
        BattleServantBreakPointComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20

  if ( (byte_42E6661 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6, v7);
    byte_42E6661 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.baseObj = (struct UnityEngine_GameObject_o *)v8;
  sub_B5D560(&this->fields.baseObj);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  struct UnityEngine_GameObject_o *baseObj; // x23
  signed __int64 klass_low; // x8
  unsigned __int64 v41; // x24
  UnityEngine_Object_o *v42; // x23
  UISprite_o *breakPointSpr; // x23
  __int64 *v44; // x8
  System_String_o *v45; // x24
  UISprite_o *klass; // x23
  __int64 *v47; // x8
  System_String_o *v48; // x22
  int32_t v49; // w24
  UILabel_o *breakPointBackGroundSpr; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v52; // x22
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_42E6660 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, breakPoint, maxbreakPoint, isEnemy);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_17145/*"break_on_boss"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_17143/*"break_off_boss"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_17144/*"break_on"*/, v33, v34, v35);
    this = (BattleServantBreakPointComponent_o *)sub_B5D5C4(&StringLiteral_17142/*"break_off"*/, v36, v37, v38);
    byte_42E6660 = 1;
  }
  baseObj = v8->fields.baseObj;
  if ( !baseObj )
    goto LABEL_41;
  LODWORD(klass_low) = baseObj[1].klass;
  if ( (int)klass_low >= 1 )
  {
    v41 = 0LL;
    do
    {
      if ( v41 >= (unsigned int)klass_low )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v42 = *(UnityEngine_Object_o **)(*(_QWORD *)&baseObj->fields.m_CachedPtr + 8 * v41 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v42, 0LL);
      baseObj = v8->fields.baseObj;
      if ( !baseObj )
        goto LABEL_41;
      klass_low = SLODWORD(baseObj[1].klass);
      ++v41;
    }
    while ( (__int64)v41 < klass_low );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v8->fields.baseObj,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  v53.fields.x = *(float *)&v8->fields.breakPointObjList;
  v53.fields.y = v53.fields.x;
  v53.fields.z = v53.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v53, 0LL);
  breakPointSpr = v8->fields.breakPointSpr;
  v44 = &StringLiteral_17143/*"break_off_boss"*/;
  if ( !isEnemy )
    v44 = &StringLiteral_17142/*"break_off"*/;
  v45 = (System_String_o *)*v44;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetWarBoardImage(breakPointSpr, v45, 0LL);
  this = (BattleServantBreakPointComponent_o *)v8[1].klass;
  if ( !this
    || (this = (BattleServantBreakPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL)) == 0LL )
  {
LABEL_41:
    sub_B5D69C(this, *(_QWORD *)&breakPoint);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  klass = (UISprite_o *)v8[1].klass;
  v47 = &StringLiteral_17145/*"break_on_boss"*/;
  if ( !isEnemy )
    v47 = &StringLiteral_17144/*"break_on"*/;
  v48 = (System_String_o *)*v47;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetWarBoardImage(klass, v48, 0LL);
  if ( maxbreakPoint >= 1 )
  {
    v49 = 0;
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v49 < breakPoint, 0LL);
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
                                                     (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
      if ( !this )
        break;
      v52 = (UnityEngine_GameObject_o *)this;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (BattleServantBreakPointComponent_o *)UnityEngine_GameObject__get_transform(v52, 0LL);
      if ( !this )
        break;
      v54.fields.x = v8->fields.addPosX + (float)(v8->fields.scale * (float)v49);
      v54.fields.y = 0.0;
      v54.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v54, 0LL);
      this = (BattleServantBreakPointComponent_o *)v8->fields.baseObj;
      if ( !this )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
      if ( ++v49 >= maxbreakPoint )
        return;
    }
    goto LABEL_41;
  }
}