void __fastcall MasterEquipSettingDialog___ctor(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBB76 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB76 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog__GetEquipIdData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBB72 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10771/*"PhotoMasterEquipIdSetting"*/, (_DWORD)method, v2, v3);
    byte_42EBB72 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10771/*"PhotoMasterEquipIdSetting"*/, -1, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog__GetGenderData(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBB74 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10772/*"PhotoMasterGenderSetting"*/, (_DWORD)method, v2, v3);
    byte_42EBB74 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_10772/*"PhotoMasterGenderSetting"*/, -1, 0LL);
}


void __fastcall MasterEquipSettingDialog__Init(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x0
  System_Collections_Generic_List_int__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EBB69 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v5, v6, v7);
    byte_42EBB69 = 1;
  }
  masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager;
  this->fields.state = 0;
  if ( !masterEquipSettingListViewManager
    || (MasterEquipSettingListViewManager__DestroyList(masterEquipSettingListViewManager, method),
        v9 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v9,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224),
        this->fields.equipIdList = v9,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.equipIdList,
          (System_Int32_array **)v9,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        (masterEquipSettingListViewManager = (MasterEquipSettingListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL)) == 0LL) )
  {
    sub_B5D69C(masterEquipSettingListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)masterEquipSettingListViewManager, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall MasterEquipSettingDialog__OnClickCancel(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_42EBB6D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MasterEquipSettingDialog_OnClickCancel__, v5, v6, v7);
    sub_B5D5C4(&Method_MasterEquipSettingDialog__OnClickCancel_b__23_0__, v8, v9, v10);
    byte_42EBB6D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v11 = Method_MasterEquipSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickCancel__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B5D5CC(Method_MasterEquipSettingDialog_OnClickCancel__);
    v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 1, 0LL);
    this->fields.state = 3;
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickCancel_b__23_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall MasterEquipSettingDialog__OnClickDecide(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  MasterEquipSettingDialog_o *v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  struct System_Collections_Generic_List_int__o *equipIdList; // x20
  __int64 selectedIndex; // x21
  MasterEquipSettingDialog_o *v24; // x0
  const MethodInfo *v25; // x2
  System_Action_T1__T2__o *decideCallBack; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Collections_Generic_List_int__o *v33; // x22
  __int64 v34; // x21
  System_Action_o *v35; // x20

  if ( (byte_42EBB6C & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_int__int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_MasterEquipSettingDialog_OnClickDecide__, v11, v12, v13);
    sub_B5D5C4(&Method_MasterEquipSettingDialog__OnClickDecide_b__22_0__, v14, v15, v16);
    byte_42EBB6C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v17 = Method_MasterEquipSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickDecide__ + 75) & 2) != 0 )
      v17 = (_QWORD *)sub_B5D5CC(Method_MasterEquipSettingDialog_OnClickDecide__);
    v18 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v17, v17[3]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 8, 0LL);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_14;
    selectedIndex = this->fields.selectedIndex;
    if ( equipIdList->fields._size <= (unsigned int)selectedIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    MasterEquipSettingDialog__SaveEquipIdData(v19, equipIdList->fields._items->m_Items[selectedIndex + 1], v21);
    MasterEquipSettingDialog__SaveGenderData(v24, this->fields.genderType, v25);
    decideCallBack = (System_Action_T1__T2__o *)this->fields.decideCallBack;
    this->fields.state = 3;
    this->fields.decideCallBack = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.decideCallBack, 0LL, v27, v28, v29, v30, v31, v32);
    v33 = this->fields.equipIdList;
    if ( !v33 )
LABEL_14:
      sub_B5D69C(v19, v20);
    v34 = this->fields.selectedIndex;
    if ( v33->fields._size <= (unsigned int)v34 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    ActionExtensions__Call_int__int_(
      decideCallBack,
      v33->fields._items->m_Items[v34 + 1],
      this->fields.genderType,
      (const MethodInfo_2CECE18 *)Method_ActionExtensions_Call_int__int___);
    v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_MasterEquipSettingDialog__OnClickDecide_b__22_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v35, 0LL);
  }
}


void __fastcall MasterEquipSettingDialog__OnClickGenderSwitch(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  int32_t genderType; // w8
  MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x0
  int32_t v17; // w9
  bool v18; // zf
  __int64 v19; // x8
  struct MasterEquipSettingListViewManager_o *v20; // x20
  MasterEquipSettingListViewManager_CallbackFunc_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2

  if ( (byte_42EBB6E & 1) == 0 )
  {
    sub_B5D5C4(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MasterEquipSettingDialog_OnClickGenderSwitch__, v5, v6, v7);
    sub_B5D5C4(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v8, v9, v10);
    byte_42EBB6E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v11 = Method_MasterEquipSettingDialog_OnClickGenderSwitch__;
    if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickGenderSwitch__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B5D5CC(Method_MasterEquipSettingDialog_OnClickGenderSwitch__);
    v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    genderType = this->fields.genderType;
    masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager;
    if ( genderType == 1 )
      v17 = 2;
    else
      v17 = 1;
    this->fields.genderType = v17;
    if ( !masterEquipSettingListViewManager )
      goto LABEL_15;
    v18 = genderType == 1;
    v19 = 176LL;
    if ( v18 )
      v19 = 184LL;
    MasterEquipSettingListViewManager__SetupDisp(
      masterEquipSettingListViewManager,
      *(System_Collections_Generic_Dictionary_int__Texture2D__o **)((char *)&this->klass + v19),
      0,
      v14);
    v20 = this->fields.masterEquipSettingListViewManager;
    v21 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_B5D694(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo);
    MasterEquipSettingListViewManager_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
      0LL);
    if ( !v20 )
LABEL_15:
      sub_B5D69C(masterEquipSettingListViewManager, v13);
    v20->fields.callbackFunc = v21;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v20->fields.callbackFunc,
      (System_Int32_array **)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    MasterEquipSettingListViewManager__SetMode_31033404(v20, 2, v28);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingDialog__OnClickImageLimit(
        MasterEquipSettingDialog_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  MasterEquipSettingDialog_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  struct System_Collections_Generic_List_int__o *equipIdList; // x22
  struct MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x20
  MasterEquipSettingListViewManager_CallbackFunc_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2

  v6 = this;
  if ( (byte_42EBB75 & 1) == 0 )
  {
    sub_B5D5C4(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, kind, index, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v7, v8, v9);
    this = (MasterEquipSettingDialog_o *)sub_B5D5C4(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v10, v11, v12);
    byte_42EBB75 = 1;
  }
  if ( kind == 1 && v6->fields.state == 2 )
  {
    if ( v6->fields.selectedIndex != index )
    {
      v13 = Method_MasterEquipSettingDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_MasterEquipSettingDialog_OnClickImageLimit__ + 75) & 2) != 0 )
        v13 = (_QWORD *)sub_B5D5CC(Method_MasterEquipSettingDialog_OnClickImageLimit__);
      v14 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v13, v13[3]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
    }
    equipIdList = v6->fields.equipIdList;
    v6->fields.selectedIndex = index;
    if ( !equipIdList )
      goto LABEL_16;
    if ( equipIdList->fields._size <= (unsigned int)index )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( !v6->fields.masterEquipSettingListViewManager
      || (MasterEquipSettingListViewManager__ModifyItem(
            v6->fields.masterEquipSettingListViewManager,
            equipIdList->fields._items->m_Items[index + 1],
            *(const MethodInfo **)&index),
          masterEquipSettingListViewManager = v6->fields.masterEquipSettingListViewManager,
          v17 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_B5D694(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo),
          MasterEquipSettingListViewManager_CallbackFunc___ctor(
            v17,
            (Il2CppObject *)v6,
            (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
            0LL),
          !masterEquipSettingListViewManager) )
    {
LABEL_16:
      sub_B5D69C(this, *(_QWORD *)&kind);
    }
    masterEquipSettingListViewManager->fields.callbackFunc = v17;
    sub_B5D560(
      (BattleServantConfConponent_o *)&masterEquipSettingListViewManager->fields.callbackFunc,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    MasterEquipSettingListViewManager__SetMode_31033404(masterEquipSettingListViewManager, 2, v24);
  }
}


void __fastcall MasterEquipSettingDialog__OnEnable(MasterEquipSettingDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42EBB70 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15675/*"Window/Objects/Buttons/CancelButton"*/, v5, v6, v7);
    byte_42EBB70 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21237572(transform, (System_String_o *)StringLiteral_15675/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall MasterEquipSettingDialog__Open(
        MasterEquipSettingDialog_o *this,
        System_Collections_Generic_Dictionary_int__Texture2D__o *maleTexture2Ds,
        System_Collections_Generic_Dictionary_int__Texture2D__o *femaleTexture2Ds,
        System_Action_int__int__o *decide,
        System_Action_o *close,
        System_Action_bool__o *setMaskMethod,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  __int64 v49; // x20
  System_String_o *gameObject; // x0
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  UILabel_o *titleLabel; // x26
  UILabel_o *warningLabel; // x26
  UILabel_o *genderSwitchLabel; // x26
  UILabel_o *decideButtonLabel; // x26
  UILabel_o *cancelButtonLabel; // x26
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  const MethodInfo *v93; // x3
  const MethodInfo *v94; // x5
  struct System_Collections_Generic_List_int__o *equipIdList; // x21
  __int64 selectedIndex; // x24
  struct MasterEquipSettingListViewManager_o *masterEquipSettingListViewManager; // x21
  MasterEquipSettingListViewManager_CallbackFunc_o *v98; // x22
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  const MethodInfo *v105; // x2
  const MethodInfo *v106; // x1
  struct System_Collections_IEnumerator_o *v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Action_o *v114; // x21
  System_Collections_Generic_Dictionary_int__Texture2D__o *textureList; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_string__o *shortNameList; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EBB6A & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)maleTexture2Ds, (_DWORD)femaleTexture2Ds, decide);
    sub_B5D5C4(&System_Action_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&MasterEquipSettingListViewManager_CallbackFunc_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v19, v20, v21);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_MasterEquipSettingDialog_OnClickImageLimit__, v25, v26, v27);
    sub_B5D5C4(&Method_MasterEquipSettingDialog___c__DisplayClass20_0__Open_b__0__, v28, v29, v30);
    sub_B5D5C4(&MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_8741/*"MASTER_SETTING_DIALOG_WARNING"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_8740/*"MASTER_SETTING_DIALOG_TITLE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_8739/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/, v46, v47, v48);
    byte_42EBB6A = 1;
  }
  textureList = 0LL;
  shortNameList = 0LL;
  v49 = sub_B5D694(MasterEquipSettingDialog___c__DisplayClass20_0_TypeInfo);
  MasterEquipSettingDialog___c__DisplayClass20_0___ctor((MasterEquipSettingDialog___c__DisplayClass20_0_o *)v49, 0LL);
  if ( !v49 )
    goto LABEL_19;
  *(_QWORD *)(v49 + 16) = setMaskMethod;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v49 + 16),
    (System_Int32_array **)setMaskMethod,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  *(_QWORD *)(v49 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v49 + 24), (System_Int32_array **)this, v58, v59, v60, v61, v62, v63);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8740/*"MASTER_SETTING_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8741/*"MASTER_SETTING_DIALOG_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_19;
  UILabel__set_text(warningLabel, gameObject, 0LL);
  genderSwitchLabel = this->fields.genderSwitchLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8739/*"MASTER_SETTING_DIALOG_GENDER_SWITCH"*/, 0LL);
  if ( !genderSwitchLabel )
    goto LABEL_19;
  UILabel__set_text(genderSwitchLabel, gameObject, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_19;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_19;
  UILabel__set_text(cancelButtonLabel, gameObject, 0LL);
  this->fields.maleMasterEquipTextures = maleTexture2Ds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.maleMasterEquipTextures,
    (System_Int32_array **)maleTexture2Ds,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  this->fields.femaleMasterEquipTextures = femaleTexture2Ds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.femaleMasterEquipTextures,
    (System_Int32_array **)femaleTexture2Ds,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.decideCallBack = decide;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.decideCallBack,
    (System_Int32_array **)decide,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  this->fields.closeCallBack = close;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallBack,
    (System_Int32_array **)close,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  ActionExtensions__Call_bool_(
    *(System_Action_T__o **)(v49 + 16),
    1,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  MasterEquipSettingDialog__SetMasterEquipInfo(this, &shortNameList, &textureList, v93);
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_19;
  selectedIndex = this->fields.selectedIndex;
  if ( equipIdList->fields._size <= (unsigned int)selectedIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  if ( !this->fields.masterEquipSettingListViewManager
    || (MasterEquipSettingListViewManager__CreateList(
          this->fields.masterEquipSettingListViewManager,
          this->fields.equipIdList,
          textureList,
          equipIdList->fields._items->m_Items[selectedIndex + 1],
          shortNameList,
          v94),
        masterEquipSettingListViewManager = this->fields.masterEquipSettingListViewManager,
        v98 = (MasterEquipSettingListViewManager_CallbackFunc_o *)sub_B5D694(MasterEquipSettingListViewManager_CallbackFunc_TypeInfo),
        MasterEquipSettingListViewManager_CallbackFunc___ctor(
          v98,
          (Il2CppObject *)this,
          (intptr_t)Method_MasterEquipSettingDialog_OnClickImageLimit__,
          0LL),
        !masterEquipSettingListViewManager) )
  {
LABEL_19:
    sub_B5D69C(gameObject, v51);
  }
  masterEquipSettingListViewManager->fields.callbackFunc = v98;
  sub_B5D560(
    (BattleServantConfConponent_o *)&masterEquipSettingListViewManager->fields.callbackFunc,
    (System_Int32_array **)v98,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  MasterEquipSettingListViewManager__SetMode_31033404(masterEquipSettingListViewManager, 2, v105);
  v107 = MasterEquipSettingDialog__SetUpMasterEquip(this, v106);
  this->fields.loadMasterEquipCoroutine = v107;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.loadMasterEquipCoroutine,
    (System_Int32_array **)v107,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.loadMasterEquipCoroutine,
    0LL);
  v114 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v114,
    (Il2CppObject *)v49,
    Method_MasterEquipSettingDialog___c__DisplayClass20_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v114, 0, 0LL);
}


void __fastcall MasterEquipSettingDialog__SaveEquipIdData(
        MasterEquipSettingDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EBB71 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10771/*"PhotoMasterEquipIdSetting"*/, id, (_DWORD)method, v3);
    byte_42EBB71 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10771/*"PhotoMasterEquipIdSetting"*/, id, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MasterEquipSettingDialog__SaveGenderData(
        MasterEquipSettingDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EBB73 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10772/*"PhotoMasterGenderSetting"*/, id, (_DWORD)method, v3);
    byte_42EBB73 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_10772/*"PhotoMasterGenderSetting"*/, id, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MasterEquipSettingDialog__SerializeFieldNotNullCheck(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MasterEquipSettingDialog__SetMasterEquipInfo(
        MasterEquipSettingDialog_o *this,
        System_Collections_Generic_List_string__o **shortNameList,
        System_Collections_Generic_Dictionary_int__Texture2D__o **genderTexture2Ds,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  const MethodInfo *v60; // x1
  UserEquipMaster_o *Master_WarQuestSelectionMaster; // x25
  __int64 v62; // x19
  __int64 v63; // x19
  int64_t UserId; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  UserGameEntity_o *SelfUserGame; // x19
  System_Collections_Generic_IEnumerable_TSource__o *List; // x24
  MasterEquipSettingDialog___c_c *v68; // x8
  UserGameEntity_o *v69; // x27
  struct MasterEquipSettingDialog___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__21_0; // x26
  Il2CppObject *v72; // x19
  struct MasterEquipSettingDialog___c_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  int64_t v81; // x24
  int64_t ActiveUserEquipId; // x0
  const MethodInfo *v83; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x19
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  int v91; // w8
  int32_t v92; // w21
  int v93; // w19
  __int64 v94; // x8
  __int64 v95; // x27
  __int64 v96; // x28
  System_Collections_Generic_List_int__o *equipIdList; // x19
  struct System_String_o *longName; // x26
  System_Collections_Generic_List_string__o *v99; // x19
  MasterEquipSettingDialog_o *GenderData; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  __int64 v107; // x8
  System_Int32_array **v108; // x1
  __int64 v109; // x0
  UserGameEntity_o *v110; // [xsp+0h] [xbp-80h]
  BattleServantConfConponent_o *v111; // [xsp+8h] [xbp-78h]
  UserServantEntity_o *v112; // [xsp+10h] [xbp-70h]
  int32_t EquipIdData; // [xsp+24h] [xbp-5Ch]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16

  if ( (byte_42EBB6B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_EquipMaster___,
      (_DWORD)shortNameList,
      (_DWORD)genderTexture2Ds,
      method);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEquipMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_UserEquipEntity___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_UserEquipEntity__int___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Func_UserEquipEntity__int__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&NetworkManager_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v51, v52, v53);
    sub_B5D5C4(&Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__21_0__, v54, v55, v56);
    sub_B5D5C4(&MasterEquipSettingDialog___c_TypeInfo, v57, v58, v59);
    byte_42EBB6B = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEquipMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEquipMaster___);
  v62 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v62 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v63 = **(_QWORD **)(v62 + 192);
  if ( (*(_BYTE *)(v63 + 306) & 1) == 0 )
    sub_AF52C4(v63);
  UserId = **(_QWORD **)(v63 + 184);
  if ( !UserId )
    goto LABEL_64;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)UserId,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipMaster___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_64;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserEquipMaster__getList(
                                                                Master_WarQuestSelectionMaster,
                                                                UserId,
                                                                0LL);
  v111 = (BattleServantConfConponent_o *)genderTexture2Ds;
  v68 = MasterEquipSettingDialog___c_TypeInfo;
  if ( (BYTE3(MasterEquipSettingDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterEquipSettingDialog___c_TypeInfo->_2.cctor_finished )
  {
    v69 = SelfUserGame;
    j_il2cpp_runtime_class_init_0(MasterEquipSettingDialog___c_TypeInfo);
    v68 = MasterEquipSettingDialog___c_TypeInfo;
  }
  else
  {
    v69 = SelfUserGame;
  }
  static_fields = v68->static_fields;
  _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      static_fields = MasterEquipSettingDialog___c_TypeInfo->static_fields;
    }
    v72 = (Il2CppObject *)static_fields->__9;
    _9__21_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserEquipEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__21_0,
      v72,
      Method_MasterEquipSettingDialog___c__SetMasterEquipInfo_b__21_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_UserEquipEntity__int___ctor__);
    v73 = MasterEquipSettingDialog___c_TypeInfo->static_fields;
    v73->__9__21_0 = (struct System_Func_UserEquipEntity__int__o *)_9__21_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v73->__9__21_0,
      (System_Int32_array **)_9__21_0,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79);
  }
  v80 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               List,
                                                               (System_Func_TSource__TKey__o *)_9__21_0,
                                                               (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_UserEquipEntity__int___);
  UserId = (int64_t)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                      v80,
                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_UserEquipEntity___);
  if ( !v69 )
    goto LABEL_64;
  v81 = UserId;
  v110 = v69;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(v69, 0LL);
  v112 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
           ActiveUserEquipId,
           (const MethodInfo_23FB038 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  EquipIdData = MasterEquipSettingDialog__GetEquipIdData((MasterEquipSettingDialog_o *)v112, v83);
  v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v84,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  *shortNameList = (System_Collections_Generic_List_string__o *)v84;
  sub_B5D560((BattleServantConfConponent_o *)shortNameList, (System_Int32_array **)v84, v85, v86, v87, v88, v89, v90);
  if ( !v81 )
    goto LABEL_64;
  v91 = *(_DWORD *)(v81 + 24);
  if ( v91 >= 1 )
  {
    v92 = 0;
    do
    {
      if ( v92 >= (unsigned int)v91 )
      {
        v109 = sub_B5D6C8(UserId);
        sub_B5D668(v109, 0LL);
      }
      v94 = *(_QWORD *)(v81 + 8LL * v92 + 32);
      if ( !v94 )
        goto LABEL_64;
      v96 = *(_QWORD *)(v94 + 32);
      v95 = *(_QWORD *)(v94 + 40);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v117.fields.currentCryptoKey = v96;
      *(_QWORD *)&v117.fields.fakeValue = v95;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v117, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_64;
      UserId = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 UserId,
                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
      if ( (UserId & 1) != 0 )
      {
        equipIdList = this->fields.equipIdList;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v118.fields.currentCryptoKey = v96;
        *(_QWORD *)&v118.fields.fakeValue = v95;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v118, 0LL);
        if ( !equipIdList )
          goto LABEL_64;
        System_Collections_Generic_List_int___Add(
          equipIdList,
          UserId,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        if ( !entity )
          goto LABEL_64;
        longName = entity->fields.longName;
        v99 = *shortNameList;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        UserId = (int64_t)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(
                            (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)longName,
                            0LL);
        if ( !v99 )
          goto LABEL_64;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v99,
          (EventMissionProgressRequest_Argument_ProgressData_o *)UserId,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        if ( (EquipIdData & 0x80000000) == 0 )
        {
          if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v119.fields.currentCryptoKey = v96;
          *(_QWORD *)&v119.fields.fakeValue = v95;
          UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v119, 0LL);
          if ( (_DWORD)UserId != EquipIdData )
            goto LABEL_55;
LABEL_54:
          this->fields.selectedIndex = v92;
          goto LABEL_55;
        }
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v116.fields.currentCryptoKey = v96;
        *(_QWORD *)&v116.fields.fakeValue = v95;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v116, 0LL);
        if ( !v112 )
          goto LABEL_64;
        v93 = UserId;
        UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                   *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v112->fields.id.fields.fakeValue,
                   0LL);
        if ( v93 == (_DWORD)UserId )
          goto LABEL_54;
      }
LABEL_55:
      v91 = *(_DWORD *)(v81 + 24);
    }
    while ( ++v92 < v91 );
  }
  GenderData = (MasterEquipSettingDialog_o *)MasterEquipSettingDialog__GetGenderData(
                                               (MasterEquipSettingDialog_o *)UserId,
                                               v60);
  UserId = ((unsigned int)GenderData & 0x80000000) != 0
         ? (unsigned int)v110->fields.genderType
         : MasterEquipSettingDialog__GetGenderData(GenderData, v60);
  if ( !this )
LABEL_64:
    sub_B5D69C(UserId, v60);
  v107 = 184LL;
  this->fields.genderType = UserId;
  if ( (_DWORD)UserId == 1 )
    v107 = 176LL;
  v108 = *(System_Int32_array ***)((char *)&this->klass + v107);
  v111->klass = (BattleServantConfConponent_c *)v108;
  sub_B5D560(v111, v108, v101, v102, v103, v104, v105, v106);
}


System_Collections_IEnumerator_o *__fastcall MasterEquipSettingDialog__SetUpMasterEquip(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EBB6F & 1) == 0 )
  {
    sub_B5D5C4(&MasterEquipSettingDialog__SetUpMasterEquip_d__25_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB6F = 1;
  }
  v5 = sub_B5D694(MasterEquipSettingDialog__SetUpMasterEquip_d__25_TypeInfo);
  MasterEquipSettingDialog__SetUpMasterEquip_d__25___ctor(
    (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MasterEquipSettingDialog___OnClickCancel_b__23_0(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *loadMasterEquipCoroutine; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  MasterEquipSettingDialog__Init(this, method);
  ActionExtensions__Call(this->fields.closeCallBack, 0LL);
  loadMasterEquipCoroutine = this->fields.loadMasterEquipCoroutine;
  if ( loadMasterEquipCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, loadMasterEquipCoroutine, 0LL);
    this->fields.loadMasterEquipCoroutine = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.loadMasterEquipCoroutine, 0LL, v4, v5, v6, v7, v8, v9);
  }
}


void __fastcall MasterEquipSettingDialog___OnClickDecide_b__22_0(
        MasterEquipSettingDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *loadMasterEquipCoroutine; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  MasterEquipSettingDialog__Init(this, method);
  loadMasterEquipCoroutine = this->fields.loadMasterEquipCoroutine;
  if ( loadMasterEquipCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, loadMasterEquipCoroutine, 0LL);
    this->fields.loadMasterEquipCoroutine = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.loadMasterEquipCoroutine, 0LL, v4, v5, v6, v7, v8, v9);
  }
}


void __fastcall MasterEquipSettingDialog__SetUpMasterEquip_d__25___ctor(
        MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MasterEquipSettingDialog__SetUpMasterEquip_d__25__MoveNext(
        MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *v4; // x19
  int32_t _1__state; // w8
  struct MasterEquipSettingDialog_o *_4__this; // x8
  __int64 v7; // x9
  UnityEngine_WaitForSeconds_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_42E5F2A & 1) == 0 )
  {
    this = (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)sub_B5D5C4(
                                                                   &UnityEngine_WaitForSeconds_TypeInfo,
                                                                   (_DWORD)method,
                                                                   v2,
                                                                   v3);
    byte_42E5F2A = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this
      || (this = (MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *)_4__this->fields.masterEquipSettingListViewManager) == 0LL )
    {
      sub_B5D69C(this, method);
    }
    v7 = 176LL;
    if ( _4__this->fields.genderType != 1 )
      v7 = 184LL;
    MasterEquipSettingListViewManager__SetupDisp(
      (MasterEquipSettingListViewManager_o *)this,
      *(System_Collections_Generic_Dictionary_int__Texture2D__o **)((char *)&_4__this->klass + v7),
      1,
      0LL);
    goto LABEL_11;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
LABEL_11:
    v8 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v8, 0.5, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v8;
    p__2__current = &v4->fields.__2__current;
    sub_B5D560(p__2__current);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall MasterEquipSettingDialog__SetUpMasterEquip_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MasterEquipSettingDialog__SetUpMasterEquip_d__25__System_Collections_IEnumerator_Reset(
        MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MasterEquipSettingDialog__SetUpMasterEquip_d__25_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall MasterEquipSettingDialog__SetUpMasterEquip_d__25__System_Collections_IEnumerator_get_Current(
        MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MasterEquipSettingDialog__SetUpMasterEquip_d__25__System_IDisposable_Dispose(
        MasterEquipSettingDialog__SetUpMasterEquip_d__25_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MasterEquipSettingDialog___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MasterEquipSettingDialog___c_StaticFields *static_fields; // x0

  if ( (byte_42E5F27 & 1) == 0 )
  {
    sub_B5D5C4(&MasterEquipSettingDialog___c_TypeInfo, v1, v2, v3);
    byte_42E5F27 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MasterEquipSettingDialog___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MasterEquipSettingDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MasterEquipSettingDialog___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall MasterEquipSettingDialog___c___ctor(MasterEquipSettingDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MasterEquipSettingDialog___c___SetMasterEquipInfo_b__21_0(
        MasterEquipSettingDialog___c_o *this,
        UserEquipEntity_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42E5F28 & 1) == 0 )
  {
    this = (MasterEquipSettingDialog___c_o *)sub_B5D5C4(
                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                               (_DWORD)x,
                                               (_DWORD)method,
                                               v3);
    byte_42E5F28 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  v6 = *(_QWORD *)&x->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v8, 0LL);
}


void __fastcall MasterEquipSettingDialog___c__DisplayClass20_0___ctor(
        MasterEquipSettingDialog___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterEquipSettingDialog___c__DisplayClass20_0___Open_b__0(
        MasterEquipSettingDialog___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct MasterEquipSettingDialog_o *_4__this; // x8

  if ( (byte_42E5F29 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    byte_42E5F29 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(v5, v6);
  _4__this->fields.state = 2;
}