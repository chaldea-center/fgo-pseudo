void __fastcall DiggingRewardDialogComponent___ctor(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_Color_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1

  if ( (byte_4B1A439 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, v4, v5);
    byte_4B1A439 = 1;
  }
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_1BCA888(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v13);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingRewardDialogComponent__EndClose(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4B1A435 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B1A435 = 1;
  }
  DiggingRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v11->fields.m_target)(
      v11->fields.original_method_info,
      *(_QWORD *)&v11->fields.extra_arg);
  }
}


int32_t __fastcall DiggingRewardDialogComponent__GetTotalEventPoint(
        DiggingRewardDialogComponent_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t v18; // w19
  Il2CppObject *current; // x27
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v23; // x1
  _DWORD *monitor; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v26; // x20
  Il2CppClass *klass; // x8
  __int64 v28; // x0
  __int64 v29; // x1
  _DWORD *v30; // x8
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1A432 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, blockList, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v14, v15);
    this = (DiggingRewardDialogComponent_o *)sub_1BCA7E0(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v16,
                                               v17);
    byte_4B1A432 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !blockList )
    sub_1BCAA3C(this, blockList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)blockList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v18 = 0;
  v33 = v32;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v33.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v21);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    if ( !current )
      sub_1BCAA3C(MasterData_object, v23);
    monitor = current[4].monitor;
    if ( !monitor )
      sub_1BCAA3C(MasterData_object, v23);
    if ( !MasterData_object )
      sub_1BCAA3C(0LL, v23);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               monitor[6],
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    v26 = Entity;
    if ( Entity )
    {
      klass = current[5].klass;
      if ( !klass
        || (v28 = System_Array__IndexOf_int_(
                    (System_Int32_array *)Entity[2].monitor,
                    (int32_t)klass->_1.namespaze,
                    (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___),
            (v28 & 0x80000000) != 0) )
      {
        v18 += HIDWORD(v26[2].klass);
      }
      else
      {
        v30 = v26[3].monitor;
        if ( !v30 )
          sub_1BCAA3C(v28, v29);
        if ( (unsigned int)v28 >= v30[6] )
          sub_1BCAA44(v28, v29);
        v18 += v30[(unsigned int)v28 + 8] + HIDWORD(v26[2].klass);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  return v18;
}


void __fastcall DiggingRewardDialogComponent__Init(DiggingRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingRewardDialogComponent__OnClickCloseButton(
        DiggingRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x20
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1A434 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DiggingRewardDialogComponent_EndClose__, v6, v7);
    sub_1BCA7E0(&Method_DiggingRewardDialogComponent_OnClickCloseButton__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    byte_4B1A434 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
    v20 = Method_DiggingRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_DiggingRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1BCA7F8(Method_DiggingRewardDialogComponent_OnClickCloseButton__);
    v21 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, this->fields.closeBtnSe, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1BCAA3C(0LL, v22);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v31.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
        UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_DiggingRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v30, 0LL);
  }
}


void __fastcall DiggingRewardDialogComponent__OnClickSwitchShowMode(
        DiggingRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v23; // x8
  UISprite_o *v24; // x20
  __int64 v25; // x1
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v33; // w20
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1A436 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v4, v5);
    sub_1BCA7E0(&Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v12, v13);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24319/*"treasurechest_btn_on"*/, v16, v17);
    byte_4B1A436 = 1;
  }
  v18 = Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCA7F8(Method_DiggingRewardDialogComponent_OnClickSwitchShowMode__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v23 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24317/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24319/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v23, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v24 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v24, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1BCAA3C(viewChangeButton, v20);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
      if ( !viewChangeButton )
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_28:
    sub_1BCAA44(viewChangeButton, v20);
  }
  if ( max_length <= 1 )
    goto LABEL_28;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !viewChangeButton )
    goto LABEL_26;
LABEL_20:
  v34.fields.a = *p_r;
  v34.fields.b = *p_a;
  v34.fields.g = *p_b;
  v34.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v34, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v33 = 0;
  while ( v33 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v33,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v33;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
  }
}


void __fastcall DiggingRewardDialogComponent__Open(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *diggingRewards,
        UserGameEntity_array *oldUserGame,
        System_Collections_Generic_List_DiggingBlockComponent__o *blockList,
        int32_t eventId,
        bool getPointReward,
        System_Action_bool__o *setMaskMethod,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x24
  __int64 viewChangeButton; // x0
  __int64 v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x1
  Il2CppObject *Component_object; // x26
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  System_Collections_Generic_List_object__o *v96; // x26
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  const MethodInfo *v103; // x2
  int32_t v104; // w26
  int v105; // w27
  UILabel_o *v106; // x28
  __int64 v107; // x1
  Il2CppObject *ComponentInChildren_object; // x29
  UILabel_o *getQpTitle; // x28
  UILabel_o *totalQpTitle; // x28
  UILabel_o *titleLabel; // x28
  UILabel_o *subTitleLabel; // x28
  UILabel_o *getTitleLabel; // x28
  UILabel_o *getNumLabel; // x28
  System_String_o *v115; // x29
  Il2CppObject *v116; // x0
  System_String_o *v117; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v120; // x28
  UILabel_o *totalNumLabel; // x25
  System_String_o *v122; // x29
  Il2CppObject *v123; // x0
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  BattleDropItem_o *v127; // x25
  int64_t v128; // x0
  System_Array_o **v129; // x26
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  __int64 v136; // x27
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  const MethodInfo *v143; // x3
  __int64 v144; // x1
  Il2CppObject *v145; // x22
  System_String_o *v146; // x1
  int32_t v147; // w20
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x3
  System_Action_o *v157; // x20
  __int64 v158; // x0
  struct System_Action_o *v159; // [xsp+8h] [xbp-88h]
  bool v160; // [xsp+14h] [xbp-7Ch]
  __int64 v161; // [xsp+20h] [xbp-70h] BYREF
  int v162; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B1A430 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, diggingRewards, oldUserGame);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&BattleDropItem___TypeInfo, v19, v20);
    sub_1BCA7E0(&BattleDropItem_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDiggingMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, v29, v30);
    sub_1BCA7E0(&int_TypeInfo, v31, v32);
    sub_1BCA7E0(&long_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v35, v36);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v37, v38);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42);
    sub_1BCA7E0(&Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__, v43, v44);
    sub_1BCA7E0(&DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo, v45, v46);
    sub_1BCA7E0(&StringLiteral_5109/*"DIGGING_EVENT_POINT_NUM"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_5114/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_5112/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_24323/*"treasurechest_img_bg_reward"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_5113/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_5115/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_5116/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_5111/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_11209/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v73, v74);
    byte_4B1A430 = 1;
  }
  v75 = sub_1BCAA2C(DiggingRewardDialogComponent___c__DisplayClass36_0_TypeInfo, diggingRewards, oldUserGame, blockList);
  DiggingRewardDialogComponent___c__DisplayClass36_0___ctor(
    (DiggingRewardDialogComponent___c__DisplayClass36_0_o *)v75,
    0LL);
  if ( !v75 )
    goto LABEL_50;
  *(_QWORD *)(v75 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 16), (int64_t)this, v78, v79, v80, v81, v82, v83);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventRootMaskSetActiveAction,
    (int64_t)setMaskMethod,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_50;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v90);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_50;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_50;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_51;
  viewChangeButton = (__int64)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_50;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v96 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v93,
                                                       v94,
                                                       v95);
  System_Collections_Generic_List_object____ctor(
    v96,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v96;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultItemObjList,
    (int64_t)v96,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  viewChangeButton = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)viewChangeButton,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                                eventId,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_50;
  v104 = *(_DWORD *)(viewChangeButton + 32);
  viewChangeButton = DiggingRewardDialogComponent__GetTotalEventPoint(
                       (DiggingRewardDialogComponent_o *)viewChangeButton,
                       blockList,
                       v103);
  if ( !this->fields.getPointRoot )
    goto LABEL_50;
  v105 = viewChangeButton;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject(this->fields.getPointRoot, 0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (__int64)this->fields.getQpRoot;
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  viewChangeButton = (__int64)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_50;
  v160 = getPointReward;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)UnityEngine_Component__GetComponentInChildren_object_(
                                (UnityEngine_Component_o *)viewChangeButton,
                                1,
                                (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  if ( !this->fields.closeButton )
    goto LABEL_50;
  v106 = (UILabel_o *)viewChangeButton;
  v159 = closeCallback;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.closeButton,
                                0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)viewChangeButton,
                                 1,
                                 (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v107);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5115/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v106 )
    goto LABEL_50;
  UILabel__set_text(v106, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11209/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0LL);
  getQpTitle = this->fields.getQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5113/*"DIGGING_REWARD_DIALOG_GET_QP_TITLE"*/, 0LL);
  if ( !getQpTitle )
    goto LABEL_50;
  UILabel__set_text(getQpTitle, (System_String_o *)viewChangeButton, 0LL);
  totalQpTitle = this->fields.totalQpTitle;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5114/*"DIGGING_REWARD_DIALOG_TOTAL_QP_TITLE"*/, 0LL);
  if ( !totalQpTitle )
    goto LABEL_50;
  UILabel__set_text(totalQpTitle, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5112/*"DIGGING_GET_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_50;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5111/*"DIGGING_GET_REWARD_DIALOG_SUB_TITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_50;
  UILabel__set_text(subTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  AtlasManager__SetItem(this->fields.totalEventPointIcon, v104, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, v104, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.totalQpBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getQpBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5109/*"DIGGING_EVENT_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_50;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v162 = v105;
  v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v162);
  v117 = System_String__Format(v115, v116, 0LL);
  viewChangeButton = (__int64)System_String__Concat_62401220((System_String_o *)StringLiteral_855/*"+"*/, v117, 0LL);
  if ( !getNumLabel )
    goto LABEL_50;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v120 = EventPointNoGroup;
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5116/*"DIGGING_TOTAL_EVENT_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_50;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v122 = LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v161 = v120;
  v123 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v161);
  viewChangeButton = (__int64)System_String__Format(v122, v123, 0LL);
  if ( !totalNumLabel )
    goto LABEL_50;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  v127 = (BattleDropItem_o *)sub_1BCAA2C(BattleDropItem_TypeInfo, v124, v125, v126);
  BattleDropItem___ctor(v127, 0LL);
  if ( !v127 )
    goto LABEL_50;
  v127->fields.type = 2;
  v127->fields.objectId = v104;
  v127->fields.originalNum = v105;
  if ( !diggingRewards
    || (v128 = sub_1BCA888(BattleDropItem___TypeInfo, diggingRewards->max_length + 1),
        *(_QWORD *)(v75 + 24) = v128,
        v129 = (System_Array_o **)(v75 + 24),
        sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 24), v128, v130, v131, v132, v133, v134, v135),
        (v136 = *(_QWORD *)(v75 + 24)) == 0) )
  {
LABEL_50:
    sub_1BCAA3C(viewChangeButton, v77);
  }
  viewChangeButton = sub_1BCA91C(v127, *(_QWORD *)(*(_QWORD *)v136 + 64LL));
  if ( !viewChangeButton )
  {
    v158 = sub_1BCAA60(0LL);
    sub_1BCA908(v158, 0LL);
  }
  if ( !*(_DWORD *)(v136 + 24) )
LABEL_51:
    sub_1BCAA44(viewChangeButton, v77);
  *(_QWORD *)(v136 + 32) = v127;
  sub_1BCA784((PartyOrganizationUtility_o *)(v136 + 32), (int64_t)v127, v137, v138, v139, v140, v141, v142);
  System_Array__Copy_63356916((System_Array_o *)diggingRewards, 0, *v129, 1, diggingRewards->max_length, 0LL);
  DiggingRewardDialogComponent__SetQpLabel(this, (BattleDropItem_array *)*v129, oldUserGame, v143);
  viewChangeButton = (__int64)this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_50;
  viewChangeButton = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  v145 = UnityEngine_Component__GetComponentInChildren_object_(
           (UnityEngine_Component_o *)viewChangeButton,
           1,
           (const MethodInfo_2F09BB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76858760);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v160 )
    {
LABEL_43:
      viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
      if ( !v145 )
        goto LABEL_50;
      v146 = (System_String_o *)viewChangeButton;
      v147 = 8;
      goto LABEL_48;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v144);
    if ( v160 )
      goto LABEL_43;
  }
  viewChangeButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !v145 )
    goto LABEL_50;
  v146 = (System_String_o *)viewChangeButton;
  v147 = 1;
LABEL_48:
  UILabel__set_text((UILabel_o *)v145, v146, 0LL);
  this->fields.closeBtnSe = v147;
  this->fields.closeCallbackFunc = v159;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)v159,
    v148,
    v149,
    v150,
    v151,
    v152,
    v153);
  viewChangeButton = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v157 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v154, v155, v156);
  System_Action___ctor(
    v157,
    (Il2CppObject *)v75,
    Method_DiggingRewardDialogComponent___c__DisplayClass36_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v157, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingRewardDialogComponent__SetPossession(
        DiggingRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1A437 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, item, *(_QWORD *)&objectId);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1A437 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &entity, Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall DiggingRewardDialogComponent__SetQpLabel(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *dropItems,
        UserGameEntity_array *oldUserGame,
        const MethodInfo *method)
{
  DiggingRewardDialogComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UserGameEntity_o *v19; // x9
  signed int max_length; // w8
  int32_t qp; // w23
  unsigned int v22; // w24
  int v23; // w22
  BattleDropItem_o *v24; // x21
  BalanceConfig_c *v25; // x0
  UILabel_o *getQpNumLabel; // x20
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  UILabel_o *totalQpNumLabel; // x19
  Il2CppObject *v30; // x0
  int v31; // [xsp+8h] [xbp-58h] BYREF
  int v32; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4B1A431 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, dropItems, oldUserGame);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, v15, v16);
    this = (DiggingRewardDialogComponent_o *)sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v17, v18);
    byte_4B1A431 = 1;
  }
  if ( !oldUserGame )
    goto LABEL_30;
  if ( !oldUserGame->max_length )
    goto LABEL_31;
  v19 = oldUserGame->m_Items[0];
  if ( !v19 || !dropItems )
    goto LABEL_30;
  max_length = dropItems->max_length;
  qp = v19->fields.qp;
  if ( max_length >= 1 )
  {
    v22 = 0;
    v23 = 0;
    while ( v22 < max_length )
    {
      v24 = dropItems->m_Items[v22];
      if ( !v24 )
        goto LABEL_30;
      if ( v24->fields.type == 2 )
      {
        this = (DiggingRewardDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_30;
        this = (DiggingRewardDialogComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          goto LABEL_30;
        this = (DiggingRewardDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v24->fields.objectId,
                                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this && LODWORD(this->fields.baseWindow) == 1 )
        {
          this = (DiggingRewardDialogComponent_o *)BattleDropItem__getTotalNum(v24, 0LL);
          v23 += (int)this;
        }
      }
      max_length = dropItems->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_20;
    }
LABEL_31:
    sub_1BCAA44(this, dropItems);
  }
  v23 = 0;
LABEL_20:
  v25 = BalanceConfig_TypeInfo;
  if ( (qp & 0x80000000) != 0 )
    goto LABEL_34;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, dropItems);
    v25 = BalanceConfig_TypeInfo;
  }
  if ( qp > v25->static_fields->QpMax )
  {
LABEL_34:
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25, dropItems);
      v25 = BalanceConfig_TypeInfo;
    }
    qp = v25->static_fields->QpMax;
  }
  getQpNumLabel = v6->fields.getQpNumLabel;
  v32 = v23;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v28 = System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v27, 0LL);
  this = (DiggingRewardDialogComponent_o *)System_String__Concat_62401220(
                                             (System_String_o *)StringLiteral_855/*"+"*/,
                                             v28,
                                             0LL);
  if ( !getQpNumLabel
    || (UILabel__set_text(getQpNumLabel, (System_String_o *)this, 0LL),
        totalQpNumLabel = v6->fields.totalQpNumLabel,
        v31 = qp + v23,
        v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31),
        this = (DiggingRewardDialogComponent_o *)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v30, 0LL),
        !totalQpNumLabel) )
  {
LABEL_30:
    sub_1BCAA3C(this, dropItems);
  }
  UILabel__set_text(totalQpNumLabel, (System_String_o *)this, 0LL);
}


void __fastcall DiggingRewardDialogComponent__SetResultData(
        DiggingRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  DiggingRewardDialogComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  signed int max_length; // w8
  __int64 v14; // x26
  BattleDropItem_o *v15; // x8
  int32_t objectId; // w23
  int32_t type; // w24
  __int64 v18; // x10
  int v19; // w29
  Il2CppObject *prefabResultItem; // x22
  DiggingRewardDialogComponent_o *v21; // x22
  __int64 v22; // x2
  DiggingRewardDialogComponent_o *v23; // x25
  int32_t v24; // w3
  ItemIconComponent_o *v25; // x25
  DiggingRewardDialogComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v37; // x8
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B1A433 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    this = (DiggingRewardDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B1A433 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0LL;
      do
      {
        if ( (unsigned int)v14 >= max_length )
          sub_1BCAA44(this, rewards);
        v15 = rewards->m_Items[v14];
        if ( !v15 )
          goto LABEL_31;
        type = v15->fields.type;
        objectId = v15->fields.objectId;
        v18 = 44LL;
        if ( v15->fields.originalNum > 0 )
          v18 = 52LL;
        v19 = *(_DWORD *)((char *)&v15->klass + v18);
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, rewards);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                   prefabResultItem,
                                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v21 = this;
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0LL);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)v21,
                                                   0LL);
        v23 = this;
        if ( !byte_4B109C1 )
        {
          this = (DiggingRewardDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, rewards, v22);
          byte_4B109C1 = 1;
        }
        if ( !v23 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v23,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)v21,
                                                   0LL);
        if ( !this )
          goto LABEL_31;
        v38.fields.x = v4->fields.iconScale;
        v38.fields.y = v38.fields.x;
        v38.fields.z = v38.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v38, 0LL);
        this = (DiggingRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)v21,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v24 = v19 <= 1 ? -1 : v19;
        v25 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)this, type, objectId, v24, 0, 0LL);
        DiggingRewardDialogComponent__SetPossession(v26, v25, objectId, v27);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v21, 1, 0LL);
        this = (DiggingRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        v34 = *(_QWORD *)&this->fields.m_CachedPtr;
        v35 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v34 )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v34 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v21,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = v34 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v37 + 32) = v21;
          sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 32), (int64_t)v21, v28, v29, v30, v31, v32, v33);
        }
        this = (DiggingRewardDialogComponent_o *)v4->fields.listRoot;
        if ( !this
          || (this = (DiggingRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_31:
          sub_1BCAA3C(this, rewards);
        }
        this = (DiggingRewardDialogComponent_o *)((__int64 (__fastcall *)(DiggingRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v14;
      }
      while ( (int)v14 < max_length );
    }
  }
}


UnityEngine_GameObject_o *__fastcall DiggingRewardDialogComponent__get_closeBtnObject(
        DiggingRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A438 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A438 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}


void __fastcall DiggingRewardDialogComponent___c__DisplayClass36_0___ctor(
        DiggingRewardDialogComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingRewardDialogComponent___c__DisplayClass36_0___Open_b__0(
        DiggingRewardDialogComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DiggingRewardDialogComponent_o *_4__this; // x0
  struct DiggingRewardDialogComponent_o *v5; // x8

  if ( (byte_4B1113B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B1113B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingRewardDialogComponent__SetResultData(_4__this, this->fields.resultIds, 0LL),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
}