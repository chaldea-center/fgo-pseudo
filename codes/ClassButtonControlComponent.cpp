void __fastcall ClassButtonControlComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Array_o *v11; // x0
  struct System_Int32_array *v12; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Array_o *v19; // x0
  int64_t v20; // x19
  struct ClassButtonControlComponent_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Array_o *v28; // x0
  int64_t v29; // x19
  struct ClassButtonControlComponent_StaticFields *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Array_o *v37; // x0
  int64_t v38; // x19
  struct ClassButtonControlComponent_StaticFields *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Array_o *v46; // x0
  int64_t v47; // x19
  struct ClassButtonControlComponent_StaticFields *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Array_o *v55; // x0
  int64_t v56; // x19
  struct ClassButtonControlComponent_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_Array_o *v64; // x0
  int64_t v65; // x19
  struct ClassButtonControlComponent_StaticFields *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Array_o *v73; // x0
  int64_t v74; // x19
  struct ClassButtonControlComponent_StaticFields *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_RuntimeFieldHandle_o v82; // 0:w1.4
  System_RuntimeFieldHandle_o v83; // 0:w1.4
  System_RuntimeFieldHandle_o v84; // 0:w1.4
  System_RuntimeFieldHandle_o v85; // 0:w1.4
  System_RuntimeFieldHandle_o v86; // 0:w1.4
  System_RuntimeFieldHandle_o v87; // 0:w1.4
  System_RuntimeFieldHandle_o v88; // 0:w1.4
  System_RuntimeFieldHandle_o v89; // 0:w1.4

  if ( (byte_4C2138A & 1) == 0 )
  {
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, v1);
    sub_1C3B764(&int___TypeInfo, v2);
    sub_1C3B764(
      &Field__PrivateImplementationDetails__10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841,
      v3);
    sub_1C3B764(
      &Field__PrivateImplementationDetails__18A642AD06501B3ADC1AC875D0D6E7DA04D9B26814FC4875D2936BA32EFED2E4,
      v4);
    sub_1C3B764(
      &Field__PrivateImplementationDetails__2346B4293F72AC9E53CFAEB667D6E61CF0B87957FC559E4186BF3CE8ADAAD288,
      v5);
    sub_1C3B764(
      &Field__PrivateImplementationDetails__3BE3D2195C9EDB60EB462B8E9091D8219F1329AF8AF99568111D31E8BFE97C08,
      v6);
    sub_1C3B764(
      &Field__PrivateImplementationDetails__8D0959D34A719C2CDE8FB7258D0EA7954059C6042F95BDDD8F80F9F4C919BEC9,
      v7);
    sub_1C3B764(
      &Field__PrivateImplementationDetails__921C803ABFA6AC88F44F7AB19198E5C137D1C7183E8E6912757A6263E8DEE0A5,
      v8);
    sub_1C3B764(
      &Field__PrivateImplementationDetails__A7A559F58129985AC8C2B5A3F851C7B13B7939AF67587D4A9161F453CE8B339C,
      v9);
    sub_1C3B764(
      &Field__PrivateImplementationDetails__DFC9DBE6DE77A476BBB7F1224ED564087A6ADE8ECA1F2503AFEA414DE21000F5,
      v10);
    byte_4C2138A = 1;
  }
  v11 = (System_Array_o *)sub_1C3B80C(int___TypeInfo, 10LL);
  v82.fields.value = Field__PrivateImplementationDetails__DFC9DBE6DE77A476BBB7F1224ED564087A6ADE8ECA1F2503AFEA414DE21000F5;
  v12 = (struct System_Int32_array *)v11;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63275948(v11, v82, 0LL);
  ClassButtonControlComponent_TypeInfo->static_fields->mstClassIdTableHaveMixIcon = v12;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ClassButtonControlComponent_TypeInfo->static_fields,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Array_o *)sub_1C3B80C(int___TypeInfo, 11LL);
  v83.fields.value = Field__PrivateImplementationDetails__2346B4293F72AC9E53CFAEB667D6E61CF0B87957FC559E4186BF3CE8ADAAD288;
  v20 = (int64_t)v19;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63275948(v19, v83, 0LL);
  static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
  static_fields->mstClassIdTableHaveMixRecommendIcon = (struct System_Int32_array *)v20;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->mstClassIdTableHaveMixRecommendIcon,
    v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Array_o *)sub_1C3B80C(int___TypeInfo, 9LL);
  v84.fields.value = Field__PrivateImplementationDetails__18A642AD06501B3ADC1AC875D0D6E7DA04D9B26814FC4875D2936BA32EFED2E4;
  v29 = (int64_t)v28;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63275948(v28, v84, 0LL);
  v30 = ClassButtonControlComponent_TypeInfo->static_fields;
  v30->mstClassIdTableNoMixIcon = (struct System_Int32_array *)v29;
  sub_1C3B708((PartyOrganizationUtility_o *)&v30->mstClassIdTableNoMixIcon, v29, v31, v32, v33, v34, v35, v36);
  v37 = (System_Array_o *)sub_1C3B80C(int___TypeInfo, 10LL);
  v85.fields.value = Field__PrivateImplementationDetails__8D0959D34A719C2CDE8FB7258D0EA7954059C6042F95BDDD8F80F9F4C919BEC9;
  v38 = (int64_t)v37;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63275948(v37, v85, 0LL);
  v39 = ClassButtonControlComponent_TypeInfo->static_fields;
  v39->mstClassIdTableHaveRecommendIcon = (struct System_Int32_array *)v38;
  sub_1C3B708((PartyOrganizationUtility_o *)&v39->mstClassIdTableHaveRecommendIcon, v38, v40, v41, v42, v43, v44, v45);
  v46 = (System_Array_o *)sub_1C3B80C(int___TypeInfo, 10LL);
  v86.fields.value = Field__PrivateImplementationDetails__10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841;
  v47 = (int64_t)v46;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63275948(v46, v86, 0LL);
  v48 = ClassButtonControlComponent_TypeInfo->static_fields;
  v48->supportGroupTypeTableHaveMixIcon = (struct System_Int32_array *)v47;
  sub_1C3B708((PartyOrganizationUtility_o *)&v48->supportGroupTypeTableHaveMixIcon, v47, v49, v50, v51, v52, v53, v54);
  v55 = (System_Array_o *)sub_1C3B80C(int___TypeInfo, 11LL);
  v87.fields.value = Field__PrivateImplementationDetails__A7A559F58129985AC8C2B5A3F851C7B13B7939AF67587D4A9161F453CE8B339C;
  v56 = (int64_t)v55;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63275948(v55, v87, 0LL);
  v57 = ClassButtonControlComponent_TypeInfo->static_fields;
  v57->supportGroupTypeTableHaveMixRecommendIcon = (struct System_Int32_array *)v56;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v57->supportGroupTypeTableHaveMixRecommendIcon,
    v56,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v64 = (System_Array_o *)sub_1C3B80C(int___TypeInfo, 9LL);
  v88.fields.value = Field__PrivateImplementationDetails__921C803ABFA6AC88F44F7AB19198E5C137D1C7183E8E6912757A6263E8DEE0A5;
  v65 = (int64_t)v64;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63275948(v64, v88, 0LL);
  v66 = ClassButtonControlComponent_TypeInfo->static_fields;
  v66->supportGroupTypeTableNoMixIcon = (struct System_Int32_array *)v65;
  sub_1C3B708((PartyOrganizationUtility_o *)&v66->supportGroupTypeTableNoMixIcon, v65, v67, v68, v69, v70, v71, v72);
  v73 = (System_Array_o *)sub_1C3B80C(int___TypeInfo, 10LL);
  v89.fields.value = Field__PrivateImplementationDetails__3BE3D2195C9EDB60EB462B8E9091D8219F1329AF8AF99568111D31E8BFE97C08;
  v74 = (int64_t)v73;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63275948(v73, v89, 0LL);
  v75 = ClassButtonControlComponent_TypeInfo->static_fields;
  v75->supportGroupTypeTableHaveRecommendIcon = (struct System_Int32_array *)v74;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v75->supportGroupTypeTableHaveRecommendIcon,
    v74,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
}


void __fastcall ClassButtonControlComponent___ctor(ClassButtonControlComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall ClassButtonControlComponent__IsMixSupportGroupType(int32_t classPos, const MethodInfo *method)
{
  return classPos == 9;
}


bool __fastcall ClassButtonControlComponent__IsRecommendSupportGroupType(int32_t classPos, const MethodInfo *method)
{
  return classPos == 10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassButtonControlComponent__LoadRecommendEffect(
        ClassButtonControlComponent_o *this,
        int32_t classButtonId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  AssetLoader_LoadEndDataHandler_o *v18; // x19

  if ( (byte_4C21387 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, *(_QWORD *)&classButtonId);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1C3B764(&Method_ClassButtonControlComponent___c__DisplayClass28_0__LoadRecommendEffect_b__0__, v6);
    sub_1C3B764(&ClassButtonControlComponent___c__DisplayClass28_0_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_10782/*"RECOMMEND_SUPPORT_QUEST_SELECT_MESSAGE_TITLE"*/, v8);
    byte_4C21387 = 1;
  }
  v9 = sub_1C3B9B0(ClassButtonControlComponent___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C3B9C0(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = classButtonId;
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_ClassButtonControlComponent___c__DisplayClass28_0__LoadRecommendEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_10782/*"RECOMMEND_SUPPORT_QUEST_SELECT_MESSAGE_TITLE"*/, v18, 1, 0LL);
}


void __fastcall ClassButtonControlComponent__OnRotatetCursor(
        ClassButtonControlComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int v3; // w9
  int32_t v4; // w1

  if ( this->fields.updateEnable )
  {
    if ( this->fields.haveRecommendIcon )
    {
      v3 = 11;
    }
    else if ( this->fields.haveMixIcon )
    {
      v3 = 10;
    }
    else
    {
      v3 = 9;
    }
    if ( this->fields.currentCursor + 1 >= v3 )
      v4 = 0;
    else
      v4 = this->fields.currentCursor + 1;
    ClassButtonControlComponent__setCursor(this, v4, v2);
  }
}


void __fastcall ClassButtonControlComponent__OnSelectButton(
        ClassButtonControlComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  if ( this->fields.updateEnable )
    ClassButtonControlComponent__setCursor(this, classPos, method);
}


void __fastcall ClassButtonControlComponent__PlayRecommendEffect(
        ClassButtonControlComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *recommendIconEffect; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4C21388 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_19185/*"fontSizeMin"*/, v4);
    byte_4C21388 = 1;
  }
  recommendIconEffect = (UnityEngine_Object_o *)this->fields.recommendIconEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recommendIconEffect, 0LL, 0LL) )
  {
    Component_object = this->fields.recommendIconEffect;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_1C3B9C0(Component_object, v6);
    }
    UnityEngine_Animation__Play_70867156(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_19185/*"fontSizeMin"*/,
      0LL);
  }
}


void __fastcall ClassButtonControlComponent__add_callbackFunc(
        ClassButtonControlComponent_o *this,
        ClassButtonControlComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ClassButtonControlComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ClassButtonControlComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ClassButtonControlComponent_o *v11; // x0
  ClassButtonControlComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C21384 & 1) == 0 )
  {
    sub_1C3B764(&ClassButtonControlComponent_CallbackFunc_TypeInfo, value);
    byte_4C21384 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ClassButtonControlComponent_CallbackFunc_c *)v8->klass != ClassButtonControlComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
  ClassButtonControlComponent__remove_callbackFunc(v11, v12, v13);
}


int32_t __fastcall ClassButtonControlComponent__getChangeCursorPos(
        ClassButtonControlComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.oldCursor == this->fields.currentCursor )
    return -1;
  else
    return this->fields.currentCursor;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ClassButtonControlComponent__getIconCursorPos(
        ClassButtonControlComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ClassButtonControlComponent_c *v6; // x0
  _BOOL4 haveMixIcon; // w22
  _BOOL4 haveRecommendIcon; // w23
  __int64 v9; // x9
  __int64 v10; // x10
  int32_t v11; // w0

  if ( (byte_4C21389 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_IndexOf_int___, *(_QWORD *)&classPos);
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, v5);
    byte_4C21389 = 1;
  }
  v6 = ClassButtonControlComponent_TypeInfo;
  haveMixIcon = this->fields.haveMixIcon;
  haveRecommendIcon = this->fields.haveRecommendIcon;
  if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    v6 = ClassButtonControlComponent_TypeInfo;
  }
  v9 = 40LL;
  if ( !haveRecommendIcon )
    v9 = 32LL;
  if ( haveRecommendIcon )
    v10 = 56LL;
  else
    v10 = 48LL;
  if ( !haveMixIcon )
    v9 = v10;
  v11 = System_Array__IndexOf_int_(
          *(System_Int32_array **)((char *)&v6->static_fields->mstClassIdTableHaveMixIcon + v9),
          classPos,
          (const MethodInfo_30EE4E0 *)Method_System_Array_IndexOf_int___);
  return v11 & ~(v11 >> 31);
}


int32_t __fastcall ClassButtonControlComponent__get_GetCursorPos(
        ClassButtonControlComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentCursor;
}


int32_t __fastcall ClassButtonControlComponent__get_GetOldCursorPos(
        ClassButtonControlComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.oldCursor;
}


void __fastcall ClassButtonControlComponent__init(
        ClassButtonControlComponent_o *this,
        ClassButtonControlComponent_CallbackFunc_o *callback,
        int32_t questId,
        int32_t questPhase,
        bool defaultPos,
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
  struct ClassButtonComponent_array *classButton; // x8
  ClassButtonComponent_o *Instance; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *MasterData_object; // x22
  int32_t currentCursor; // w8
  struct ClassButtonComponent_array *v30; // x8
  int32_t v31; // w23
  il2cpp_array_size_t max_length; // w9
  _BOOL4 haveMixIcon; // w25
  _BOOL4 haveRecommendIcon; // w24
  struct ClassButtonControlComponent_StaticFields *static_fields; // x8
  struct System_Int32_array *supportGroupTypeTableHaveMixRecommendIcon; // x9
  struct System_Int32_array *mstClassIdTableHaveMixRecommendIcon; // x9
  struct System_Int32_array *v38; // x9
  struct System_Int32_array *v39; // x8
  int32_t v40; // w29
  int32_t v41; // w24
  struct System_Int32_array *supportGroupTypeTableHaveRecommendIcon; // x9
  struct System_Int32_array *mstClassIdTableHaveRecommendIcon; // x9
  struct System_Int32_array *v44; // x9
  struct System_Int32_array *mstClassIdTableHaveMixIcon; // x8
  struct System_Int32_array *supportGroupTypeTableHaveMixIcon; // x8
  struct ClassButtonControlComponent_StaticFields *v47; // x8
  struct System_Int32_array *supportGroupTypeTableNoMixIcon; // x9
  struct System_Int32_array *mstClassIdTableNoMixIcon; // x9
  struct UISprite_array *classCursor; // x8
  ClassButtonComponent_o *v51; // x24
  int32_t v52; // w25
  const MethodInfo *v53; // x2
  struct ServantClassCompatibilityIconComponent_array *classCompatibilityIcon; // x8
  il2cpp_array_size_t v55; // w9
  UnityEngine_Object_o *v56; // x25
  struct ServantClassCompatibilityIconComponent_array *v57; // x8
  ServantClassCompatibilityIconComponent_o *v58; // x8
  intptr_t m_CachedPtr; // w25
  __int64 v60; // x8
  struct ClassButtonComponent_array *v61; // x8
  struct ClassButtonComponent_array *v62; // x8
  Il2CppObject *Component_object; // x0
  int32_t mState; // w24
  UISprite_o *v65; // x25
  struct ClassButtonComponent_array *v66; // x8
  ClassButtonComponent_o *v67; // x24
  ClassButtonComponent_CallbackFunc_o *v68; // x25
  const MethodInfo *v69; // x3
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  RecommendSupportQuestEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21386 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, callback);
    sub_1C3B764(&ClassButtonComponent_CallbackFunc_TypeInfo, v9);
    sub_1C3B764(&Method_ClassButtonControlComponent_OnSelectButton__, v10);
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, v11);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UISprite___, v12);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMasterData_RecommendSupportQuestMaster___, v14);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantClassMaster___, v15);
    sub_1C3B764(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v16);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v17);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4C21386 = 1;
  }
  entity = 0LL;
  classButton = this->fields.classButton;
  if ( classButton )
    LOBYTE(classButton) = (signed int)classButton->max_length > 9;
  this->fields.haveMixIcon = (char)classButton;
  Instance = (ClassButtonComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (ClassButtonComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_RecommendSupportQuestMaster___);
  if ( !Instance )
    goto LABEL_118;
  this->fields.haveRecommendIcon = RecommendSupportQuestMaster__TryGetEntity(
                                     (RecommendSupportQuestMaster_o *)Instance,
                                     &entity,
                                     questId,
                                     questPhase,
                                     0LL);
  Instance = (ClassButtonComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( defaultPos )
  {
    currentCursor = 0;
    this->fields.currentCursor = 0;
  }
  else
  {
    currentCursor = this->fields.currentCursor;
  }
  this->fields.callbackFunc = callback;
  this->fields.oldCursor = currentCursor;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v22, v23, v24, v25, v26, v27);
  v30 = this->fields.classButton;
  this->fields.updateEnable = 1;
  if ( !v30 )
LABEL_118:
    sub_1C3B9C0(Instance, v21);
  v31 = 0;
  while ( 1 )
  {
    max_length = v30->max_length;
    if ( v31 >= (int)max_length )
      break;
    if ( v31 >= max_length )
      goto LABEL_120;
    Instance = v30->m_Items[v31];
    if ( !Instance )
      goto LABEL_118;
    Instance = (ClassButtonComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_118;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (ClassButtonComponent_o *)ClassButtonControlComponent_TypeInfo;
    haveMixIcon = this->fields.haveMixIcon;
    haveRecommendIcon = this->fields.haveRecommendIcon;
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      Instance = (ClassButtonComponent_o *)ClassButtonControlComponent_TypeInfo;
    }
    static_fields = *(struct ClassButtonControlComponent_StaticFields **)&Instance[1].fields.specifyDisabledColor.fields.b;
    if ( !haveMixIcon )
    {
      if ( haveRecommendIcon )
      {
        supportGroupTypeTableHaveRecommendIcon = static_fields->supportGroupTypeTableHaveRecommendIcon;
        if ( !supportGroupTypeTableHaveRecommendIcon )
          goto LABEL_118;
        if ( v31 >= (signed int)supportGroupTypeTableHaveRecommendIcon->max_length )
          return;
        if ( !*(_DWORD *)&Instance[1].fields.isPassive )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = (ClassButtonComponent_o *)ClassButtonControlComponent_TypeInfo;
          static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
        }
        mstClassIdTableHaveRecommendIcon = static_fields->mstClassIdTableHaveRecommendIcon;
        if ( !mstClassIdTableHaveRecommendIcon )
          goto LABEL_118;
        if ( v31 >= (signed int)mstClassIdTableHaveRecommendIcon->max_length )
          return;
        if ( !*(_DWORD *)&Instance[1].fields.isPassive )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
        }
        v44 = static_fields->supportGroupTypeTableHaveRecommendIcon;
        if ( !v44 )
          goto LABEL_118;
        if ( v31 >= v44->max_length )
          goto LABEL_120;
        mstClassIdTableHaveMixIcon = static_fields->mstClassIdTableHaveRecommendIcon;
        if ( !mstClassIdTableHaveMixIcon )
          goto LABEL_118;
      }
      else
      {
        supportGroupTypeTableNoMixIcon = static_fields->supportGroupTypeTableNoMixIcon;
        if ( !supportGroupTypeTableNoMixIcon )
          goto LABEL_118;
        if ( v31 >= (signed int)supportGroupTypeTableNoMixIcon->max_length )
          return;
        if ( !*(_DWORD *)&Instance[1].fields.isPassive )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = (ClassButtonComponent_o *)ClassButtonControlComponent_TypeInfo;
          static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
        }
        mstClassIdTableNoMixIcon = static_fields->mstClassIdTableNoMixIcon;
        if ( !mstClassIdTableNoMixIcon )
          goto LABEL_118;
        if ( v31 >= (signed int)mstClassIdTableNoMixIcon->max_length )
          return;
        if ( !*(_DWORD *)&Instance[1].fields.isPassive )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
        }
        v44 = static_fields->supportGroupTypeTableNoMixIcon;
        if ( !v44 )
          goto LABEL_118;
        if ( v31 >= v44->max_length )
          goto LABEL_120;
        mstClassIdTableHaveMixIcon = static_fields->mstClassIdTableNoMixIcon;
        if ( !mstClassIdTableHaveMixIcon )
          goto LABEL_118;
      }
      goto LABEL_72;
    }
    if ( !haveRecommendIcon )
    {
      supportGroupTypeTableHaveMixIcon = static_fields->supportGroupTypeTableHaveMixIcon;
      if ( !supportGroupTypeTableHaveMixIcon )
        goto LABEL_118;
      if ( v31 >= (signed int)supportGroupTypeTableHaveMixIcon->max_length )
        return;
      if ( !*(_DWORD *)&Instance[1].fields.isPassive )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (ClassButtonComponent_o *)ClassButtonControlComponent_TypeInfo;
      }
      v47 = *(struct ClassButtonControlComponent_StaticFields **)&Instance[1].fields.specifyDisabledColor.fields.b;
      if ( !v47->mstClassIdTableHaveMixIcon )
        goto LABEL_118;
      if ( v31 >= (signed int)v47->mstClassIdTableHaveMixIcon->max_length )
        return;
      if ( !*(_DWORD *)&Instance[1].fields.isPassive )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v47 = ClassButtonControlComponent_TypeInfo->static_fields;
      }
      v44 = v47->supportGroupTypeTableHaveMixIcon;
      if ( !v44 )
        goto LABEL_118;
      if ( v31 >= v44->max_length )
        goto LABEL_120;
      mstClassIdTableHaveMixIcon = v47->mstClassIdTableHaveMixIcon;
      if ( !mstClassIdTableHaveMixIcon )
        goto LABEL_118;
LABEL_72:
      if ( v31 >= mstClassIdTableHaveMixIcon->max_length )
        goto LABEL_120;
      v40 = v44->m_Items[v31 + 1];
      v41 = mstClassIdTableHaveMixIcon->m_Items[v31 + 1];
      goto LABEL_74;
    }
    supportGroupTypeTableHaveMixRecommendIcon = static_fields->supportGroupTypeTableHaveMixRecommendIcon;
    if ( !supportGroupTypeTableHaveMixRecommendIcon )
      goto LABEL_118;
    if ( v31 >= (signed int)supportGroupTypeTableHaveMixRecommendIcon->max_length )
      return;
    if ( !*(_DWORD *)&Instance[1].fields.isPassive )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (ClassButtonComponent_o *)ClassButtonControlComponent_TypeInfo;
      static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
    }
    mstClassIdTableHaveMixRecommendIcon = static_fields->mstClassIdTableHaveMixRecommendIcon;
    if ( !mstClassIdTableHaveMixRecommendIcon )
      goto LABEL_118;
    if ( v31 >= (signed int)mstClassIdTableHaveMixRecommendIcon->max_length )
      return;
    if ( !*(_DWORD *)&Instance[1].fields.isPassive )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = ClassButtonControlComponent_TypeInfo->static_fields;
    }
    v38 = static_fields->supportGroupTypeTableHaveMixRecommendIcon;
    if ( !v38 )
      goto LABEL_118;
    if ( v31 >= v38->max_length )
      goto LABEL_120;
    v39 = static_fields->mstClassIdTableHaveMixRecommendIcon;
    if ( !v39 )
      goto LABEL_118;
    if ( v31 >= v39->max_length )
      goto LABEL_120;
    v40 = v38->m_Items[v31 + 1];
    v41 = v39->m_Items[v31 + 1];
    Instance = (ClassButtonComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_118;
    Instance = (ClassButtonComponent_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)Instance,
                                           0LL);
    if ( !Instance )
      goto LABEL_118;
    v79.fields.z = 0.0;
    v79.fields.x = 0.9;
    v79.fields.y = 0.9;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v79, 0LL);
LABEL_74:
    if ( !MasterData_object )
      goto LABEL_118;
    Instance = (ClassButtonComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                           v41,
                                           (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    classCursor = this->fields.classCursor;
    if ( !classCursor )
      goto LABEL_118;
    if ( v31 >= classCursor->max_length )
      goto LABEL_120;
    v51 = Instance;
    Instance = (ClassButtonComponent_o *)classCursor->m_Items[v31];
    if ( !Instance )
      goto LABEL_118;
    v52 = this->fields.currentCursor;
    Instance = (ClassButtonComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_118;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v40 == v52, 0LL);
    classCompatibilityIcon = this->fields.classCompatibilityIcon;
    if ( classCompatibilityIcon )
    {
      v55 = classCompatibilityIcon->max_length;
      if ( v31 < (int)v55 )
      {
        if ( v31 >= v55 )
          goto LABEL_120;
        v56 = (UnityEngine_Object_o *)classCompatibilityIcon->m_Items[v31];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (ClassButtonComponent_o *)UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( questId == 0 || questPhase == 0 )
          {
            Instance = 0LL;
          }
          else
          {
            Instance = (ClassButtonComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_118;
            Instance = (ClassButtonComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !Instance )
              goto LABEL_118;
            Instance = (ClassButtonComponent_o *)QuestPhaseMaster__GetEntity(
                                                   (QuestPhaseMaster_o *)Instance,
                                                   questId,
                                                   questPhase,
                                                   0LL);
          }
          v57 = this->fields.classCompatibilityIcon;
          if ( !v57 )
            goto LABEL_118;
          if ( v31 >= v57->max_length )
LABEL_120:
            sub_1C3B9C8(Instance, v21);
          v58 = v57->m_Items[v31];
          if ( Instance )
          {
            if ( !v51 || !v58 )
              goto LABEL_118;
            ServantClassCompatibilityIconComponent__SetIcon(
              v58,
              v51->fields.m_CachedPtr,
              *(System_Int32_array **)&Instance->fields.specifyDisabledColor.fields.r,
              3,
              0LL);
            goto LABEL_99;
          }
          if ( !v58 )
            goto LABEL_118;
          ServantClassCompatibilityIconComponent__Clear(v58, 0LL);
        }
      }
    }
    if ( !v51 )
      goto LABEL_118;
LABEL_99:
    Instance = (ClassButtonComponent_o *)ClassButtonControlComponent_TypeInfo;
    m_CachedPtr = v51->fields.m_CachedPtr;
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
      Instance = (ClassButtonComponent_o *)ClassButtonControlComponent_TypeInfo;
    }
    v60 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields.specifyDisabledColor.fields.b + 24LL);
    if ( v60 )
    {
      if ( !*(_DWORD *)(v60 + 24) )
        goto LABEL_120;
      if ( m_CachedPtr == *(_DWORD *)(v60 + 32) )
        ClassButtonControlComponent__LoadRecommendEffect(this, v31, v53);
      v61 = this->fields.classButton;
      if ( v61 )
      {
        if ( v31 >= v61->max_length )
          goto LABEL_120;
        Instance = v61->m_Items[v31];
        if ( Instance )
        {
          Instance = (ClassButtonComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Instance,
                                                 0LL);
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            v62 = this->fields.classButton;
            if ( v62 )
            {
              if ( v31 >= v62->max_length )
                goto LABEL_120;
              Instance = v62->m_Items[v31];
              if ( Instance )
              {
                Component_object = UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)Instance,
                                     (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UISprite___);
                mState = v51->fields.mState;
                v65 = (UISprite_o *)Component_object;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                Instance = (ClassButtonComponent_o *)AtlasManager__SetClassIcon(v65, mState, 2, 0LL);
                v66 = this->fields.classButton;
                if ( v66 )
                {
                  if ( v31 >= v66->max_length )
                    goto LABEL_120;
                  v67 = v66->m_Items[v31];
                  v68 = (ClassButtonComponent_CallbackFunc_o *)sub_1C3B9B0(ClassButtonComponent_CallbackFunc_TypeInfo);
                  ClassButtonComponent_CallbackFunc___ctor(
                    v68,
                    (Il2CppObject *)this,
                    Method_ClassButtonControlComponent_OnSelectButton__,
                    v69);
                  if ( v67 )
                  {
                    v67->fields.callbackFunc = v68;
                    v67->fields.classPos = v40;
                    sub_1C3B708(
                      (PartyOrganizationUtility_o *)&v67->fields.callbackFunc,
                      (int64_t)v68,
                      v70,
                      v71,
                      v72,
                      v73,
                      v74,
                      v75);
                    v30 = this->fields.classButton;
                    ++v31;
                    if ( v30 )
                      continue;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_118;
  }
}


void __fastcall ClassButtonControlComponent__remove_callbackFunc(
        ClassButtonControlComponent_o *this,
        ClassButtonControlComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ClassButtonControlComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ClassButtonControlComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  int32_t v11; // w0
  const MethodInfo *v12; // x1

  if ( (byte_4C21385 & 1) == 0 )
  {
    sub_1C3B764(&ClassButtonControlComponent_CallbackFunc_TypeInfo, value);
    byte_4C21385 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ClassButtonControlComponent_CallbackFunc_c *)v8->klass != ClassButtonControlComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
  ClassButtonControlComponent__IsMixSupportGroupType(v11, v12);
}


void __fastcall ClassButtonControlComponent__setCursor(
        ClassButtonControlComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  int32_t currentCursor; // w8
  int32_t IconCursorPos; // w22
  const MethodInfo *v7; // x2
  UISprite_o *gameObject; // x0
  __int64 v9; // x1
  struct UISprite_array *classCursor; // x8
  il2cpp_array_size_t v11; // w21
  struct UISprite_array *v12; // x8
  struct ClassButtonControlComponent_CallbackFunc_o *callbackFunc; // x8

  currentCursor = this->fields.currentCursor;
  if ( currentCursor != classPos )
  {
    this->fields.currentCursor = classPos;
    this->fields.oldCursor = currentCursor;
    IconCursorPos = ClassButtonControlComponent__getIconCursorPos(this, classPos, method);
    gameObject = (UISprite_o *)ClassButtonControlComponent__getIconCursorPos(this, this->fields.oldCursor, v7);
    classCursor = this->fields.classCursor;
    if ( !classCursor )
      goto LABEL_13;
    if ( IconCursorPos < classCursor->max_length )
    {
      v11 = (unsigned int)gameObject;
      gameObject = classCursor->m_Items[IconCursorPos];
      if ( !gameObject )
        goto LABEL_13;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_13;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v12 = this->fields.classCursor;
      if ( !v12 )
        goto LABEL_13;
      if ( v11 < v12->max_length )
      {
        gameObject = v12->m_Items[v11];
        if ( gameObject )
        {
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
            callbackFunc = this->fields.callbackFunc;
            if ( callbackFunc )
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
                callbackFunc->fields.original_method_info,
                (unsigned int)classPos,
                *(_QWORD *)&callbackFunc->fields.extra_arg);
            return;
          }
        }
LABEL_13:
        sub_1C3B9C0(gameObject, v9);
      }
    }
    sub_1C3B9C8(gameObject, v9);
  }
}


void __fastcall ClassButtonControlComponent__setUpdateEnable(
        ClassButtonControlComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.updateEnable = flag;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassButtonControlComponent_CallbackFunc___ctor(
        ClassButtonControlComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A7C76C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A7C724;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ClassButtonControlComponent_CallbackFunc__BeginInvoke(
        ClassButtonControlComponent_CallbackFunc_o *this,
        int32_t classPos,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = classPos;
  if ( (byte_4C2138B & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&classPos);
    byte_4C2138B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall ClassButtonControlComponent_CallbackFunc__EndInvoke(
        ClassButtonControlComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall ClassButtonControlComponent_CallbackFunc__Invoke(
        ClassButtonControlComponent_CallbackFunc_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    classPos,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ClassButtonControlComponent___c__DisplayClass28_0___ctor(
        ClassButtonControlComponent___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassButtonControlComponent___c__DisplayClass28_0___LoadRecommendEffect_b__0(
        ClassButtonControlComponent___c__DisplayClass28_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  ClassButtonControlComponent___c__DisplayClass28_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct ClassButtonControlComponent_o *_4__this; // x8
  UnityEngine_Object_o *recommendIconEffect; // x21
  Il2CppObject *Object_object__50142412; // x20
  struct ClassButtonControlComponent_o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct ClassButtonControlComponent_o *v18; // x8
  struct ClassButtonControlComponent_o *v19; // x8
  struct ClassButtonControlComponent_o *v20; // x8
  struct ClassButtonComponent_array *classButton; // x8
  __int64 classButtonId; // x9
  ClassButtonControlComponent___c__DisplayClass28_0_o *v23; // x20
  struct ClassButtonControlComponent_o *v24; // x8
  ClassButtonControlComponent___c__DisplayClass28_0_o *v25; // x20
  struct ClassButtonControlComponent_o *v26; // x8
  ClassButtonControlComponent___c__DisplayClass28_0_o *v27; // x20

  v4 = this;
  if ( (byte_4C2138C & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, prefabData);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)sub_1C3B764(&StringLiteral_19185/*"fontSizeMin"*/, v7);
    byte_4C2138C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_36;
  recommendIconEffect = (UnityEngine_Object_o *)_4__this->fields.recommendIconEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)UnityEngine_Object__op_Equality(
                                                                  recommendIconEffect,
                                                                  0LL,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !prefabData )
      goto LABEL_36;
    Object_object__50142412 = AssetData__GetObject_object__50142412(
                                prefabData,
                                (System_String_o *)StringLiteral_19185/*"fontSizeMin"*/,
                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50142412, 0LL, 0LL) )
    {
      v11 = v4->fields.__4__this;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                      Object_object__50142412,
                                                                      (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v11 )
      {
        v11->fields.recommendIconEffect = (struct UnityEngine_GameObject_o *)this;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&v11->fields.recommendIconEffect,
          (int64_t)this,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        v18 = v4->fields.__4__this;
        if ( v18 )
        {
          this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)UnityEngine_Object__op_Inequality(
                                                                          (UnityEngine_Object_o *)v18->fields.recommendIconEffect,
                                                                          0LL,
                                                                          0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_34;
          v19 = v4->fields.__4__this;
          if ( v19 )
          {
            this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)v19->fields.recommendIconEffect;
            if ( this )
            {
              this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)UnityEngine_GameObject__get_transform(
                                                                              (UnityEngine_GameObject_o *)this,
                                                                              0LL);
              v20 = v4->fields.__4__this;
              if ( v20 )
              {
                classButton = v20->fields.classButton;
                if ( classButton )
                {
                  classButtonId = v4->fields.classButtonId;
                  if ( (unsigned int)classButtonId >= classButton->max_length )
                    sub_1C3B9C8(this, prefabData);
                  v23 = this;
                  this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)classButton->m_Items[classButtonId];
                  if ( this )
                  {
                    this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)UnityEngine_Component__get_transform(
                                                                                    (UnityEngine_Component_o *)this,
                                                                                    0LL);
                    if ( v23 )
                    {
                      UnityEngine_Transform__set_parent(
                        (UnityEngine_Transform_o *)v23,
                        (UnityEngine_Transform_o *)this,
                        0LL);
                      v24 = v4->fields.__4__this;
                      if ( v24 )
                      {
                        this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)v24->fields.recommendIconEffect;
                        if ( this )
                        {
                          this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)UnityEngine_GameObject__get_transform(
                                                                                          (UnityEngine_GameObject_o *)this,
                                                                                          0LL);
                          v25 = this;
                          if ( !byte_4C1C511 )
                          {
                            this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)sub_1C3B764(
                                                                                            &UnityEngine_Vector3_TypeInfo,
                                                                                            prefabData);
                            byte_4C1C511 = 1;
                          }
                          if ( v25 )
                          {
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)v25,
                              UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                              0LL);
                            v26 = v4->fields.__4__this;
                            if ( v26 )
                            {
                              this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)v26->fields.recommendIconEffect;
                              if ( this )
                              {
                                this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)UnityEngine_GameObject__get_transform(
                                                                                                (UnityEngine_GameObject_o *)this,
                                                                                                0LL);
                                v27 = this;
                                if ( !byte_4C1C516 )
                                {
                                  this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)sub_1C3B764(
                                                                                                  &UnityEngine_Vector3_TypeInfo,
                                                                                                  prefabData);
                                  byte_4C1C516 = 1;
                                }
                                if ( v27 )
                                {
                                  UnityEngine_Transform__set_localScale(
                                    (UnityEngine_Transform_o *)v27,
                                    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                                    0LL);
                                  goto LABEL_34;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_36:
      sub_1C3B9C0(this, prefabData);
    }
  }
LABEL_34:
  this = (ClassButtonControlComponent___c__DisplayClass28_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_36;
  ClassButtonControlComponent__PlayRecommendEffect(
    (ClassButtonControlComponent_o *)this,
    (const MethodInfo *)prefabData);
}