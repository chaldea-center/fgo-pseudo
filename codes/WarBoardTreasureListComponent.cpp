void __fastcall WarBoardTreasureListComponent___ctor(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1413D & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1413D = 1;
  }
  *(_QWORD *)&this->fields.iconScale = 0x743F59999ALL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardTreasureListComponent__EndClose(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x0
  struct System_Action_o *closeCallbackFunc; // x21
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x19

  if ( (byte_4B1413B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1413B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
  v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  UnityEngine_Object__Destroy_70154244(v15, 0LL);
}


void __fastcall WarBoardTreasureListComponent__Init(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardTreasureListComponent__OnClickCloseButton(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  int32_t dialogType; // w22
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x20

  if ( (byte_4B14139 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarBoardTreasureListComponent_EndClose__, v4, v5);
    sub_1BCA7E0(&Method_WarBoardTreasureListComponent_OnClickCloseButton__, v6, v7);
    byte_4B14139 = 1;
  }
  v8 = Method_WarBoardTreasureListComponent_OnClickCloseButton__;
  dialogType = this->fields.dialogType;
  if ( (*((_BYTE *)Method_WarBoardTreasureListComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_WarBoardTreasureListComponent_OnClickCloseButton__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( dialogType == 2 )
    OverwriteAssetSoundName__PlayCommonSe(v10, 10, 0LL);
  else
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_WarBoardTreasureListComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTreasureListComponent__Open(
        WarBoardTreasureListComponent_o *this,
        System_Int32_array *treasureList,
        int32_t type,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x21
  System_String_o *scrollView; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  UILabel_o *textLabel; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *v51; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x22
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Action_o *v61; // x20
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14138 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, treasureList, *(_QWORD *)&type);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__, v17, v18);
    sub_1BCA7E0(&WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_15564/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_15563/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_15562/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/, v25, v26);
    byte_4B14138 = 1;
  }
  v27 = sub_1BCAA2C(
          WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo,
          treasureList,
          *(_QWORD *)&type,
          closeCallback);
  WarBoardTreasureListComponent___c__DisplayClass18_0___ctor(
    (WarBoardTreasureListComponent___c__DisplayClass18_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_36;
  *(_QWORD *)(v27 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 24) = treasureList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 24), (int64_t)treasureList, v36, v37, v38, v39, v40, v41);
  this->fields.dialogType = type;
  if ( type != 1 )
  {
    if ( type )
      goto LABEL_34;
    textLabel = this->fields.textLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
    scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15562/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/, 0LL);
    if ( textLabel )
    {
      UILabel__set_text(textLabel, scrollView, 0LL);
      titleLabel = this->fields.titleLabel;
      scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15563/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, scrollView, 0LL);
        goto LABEL_34;
      }
    }
LABEL_36:
    sub_1BCAA3C(scrollView, v29);
  }
  v51 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
  scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15564/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/, 0LL);
  if ( !v51 )
    goto LABEL_36;
  UILabel__set_text(v51, scrollView, 0LL);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer, float, float, float, float))scrollView->klass->vtable._18_System_IConvertible_ToInt64.method)(
    scrollView,
    scrollView->klass->vtable._19_System_IConvertible_ToUInt64.methodPtr,
    0.0,
    0.0,
    (float)this->fields.width,
    (float)this->fields.height);
  scrollView = (System_String_o *)this->fields.listBg;
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_width((UIWidget_o *)scrollView, this->fields.width, 0LL);
  scrollView = (System_String_o *)this->fields.listBg;
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height + 10, 0LL);
  scrollView = (System_String_o *)this->fields.listBg;
  if ( !scrollView )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.basePos, 0LL);
  scrollView = (System_String_o *)this->fields.listBg;
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !scrollView )
    goto LABEL_36;
  v62.fields.z = 0.0;
  v62.fields.y = (float)(this->fields.height + 10);
  v62.fields.x = (float)this->fields.width;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)scrollView, v62, 0LL);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetParent(v53, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  v54 = (UnityEngine_GameObject_o *)scrollView;
  scrollView = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollView, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.basePos, 0LL);
  scrollView = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v54,
                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0LL);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v55, 0, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.gridPos, 0LL);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_36;
  v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v56, 0, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height - 10, 0LL);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_36;
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v57, 1, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0LL);
LABEL_34:
  this->fields.closeCallbackFunc = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeCallback,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0LL);
  v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v27,
    Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v61, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardTreasureListComponent__get_closeBtnObject(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1413C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1413C = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTreasureListComponent__setListData(
        WarBoardTreasureListComponent_o *this,
        System_Int32_array *treasureList,
        int32_t setColMax,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x24
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
  __int64 Instance; // x0
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x25
  __int64 v23; // x8
  GiftMaster_o *v24; // x26
  unsigned __int64 v25; // x27
  int v26; // w8
  __int64 v27; // x24
  unsigned int v28; // w27
  Il2CppObject *prefabResultItem; // x25
  int32_t *v30; // x29
  UnityEngine_GameObject_o *v31; // x25
  __int64 v32; // x2
  UnityEngine_Transform_o *v33; // x26
  ItemIconComponent_o *v34; // x26
  int32_t v35; // w3
  GiftMaster_o *v36; // [xsp+0h] [xbp-80h]
  Il2CppObject *v37; // [xsp+8h] [xbp-78h]
  System_Int32_array *v38; // [xsp+10h] [xbp-70h]
  unsigned __int64 v39; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  v4 = treasureList;
  if ( (byte_4B1413A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, treasureList, *(_QWORD *)&setColMax);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardTreasureMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    byte_4B1413A = 1;
  }
  if ( v4 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardTreasureMaster___),
          (Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
    {
LABEL_34:
      sub_1BCAA3C(Instance, v21);
    }
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
    v23 = *(_QWORD *)&v4->max_length;
    if ( (int)v23 >= 1 )
    {
      v24 = (GiftMaster_o *)Instance;
      v25 = 0LL;
      v37 = MasterData_object;
      v38 = v4;
      v36 = (GiftMaster_o *)Instance;
      while ( 1 )
      {
        if ( v25 >= (unsigned int)v23 )
          goto LABEL_35;
        if ( !MasterData_object )
          goto LABEL_34;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              v4->m_Items[v25 + 1],
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_34;
        if ( !v24 )
          goto LABEL_34;
        v39 = v25;
        Instance = (__int64)GiftMaster__GetGiftListById(v24, *(_DWORD *)(Instance + 40), 0LL);
        if ( !Instance )
          goto LABEL_34;
        v26 = *(_DWORD *)(Instance + 24);
        v27 = Instance;
        if ( v26 >= 1 )
          break;
LABEL_32:
        v4 = v38;
        v24 = v36;
        MasterData_object = v37;
        LODWORD(v23) = v38->max_length;
        v25 = v39 + 1;
        if ( (__int64)(v39 + 1) >= (int)v23 )
          return;
      }
      v28 = 0;
      while ( v28 < v26 )
      {
        prefabResultItem = (Il2CppObject *)this->fields.prefabResultItem;
        v30 = *(int32_t **)(v27 + 8LL * (int)v28 + 32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
        Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                              prefabResultItem,
                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_34;
        v31 = (UnityEngine_GameObject_o *)Instance;
        Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_34;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v31, 0LL);
        v33 = (UnityEngine_Transform_o *)Instance;
        if ( !byte_4B109C1 )
        {
          Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v21, v32);
          byte_4B109C1 = 1;
        }
        if ( !v33 )
          goto LABEL_34;
        UnityEngine_Transform__set_localPosition(v33, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v31, 0LL);
        if ( !Instance )
          goto LABEL_34;
        v40.fields.x = this->fields.iconScale;
        v40.fields.y = v40.fields.x;
        v40.fields.z = v40.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v40, 0LL);
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v31,
                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v30 )
          goto LABEL_34;
        v34 = (ItemIconComponent_o *)Instance;
        if ( !Instance )
          goto LABEL_34;
        v35 = v30[7] <= 1 ? -1 : v30[7];
        ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)Instance, v30[5], v30[6], v35, 0, 0LL);
        ItemIconComponent__SetCondensedScale(v34, this->fields.counterLabelMaxWidth, 0LL);
        UnityEngine_GameObject__SetActive(v31, 1, 0LL);
        Instance = (__int64)this->fields.listRoot;
        if ( !Instance )
          goto LABEL_34;
        Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)Instance,
                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_34;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v26 = *(_DWORD *)(v27 + 24);
        if ( (int)++v28 >= v26 )
          goto LABEL_32;
      }
LABEL_35:
      sub_1BCAA44(Instance, v21);
    }
  }
}


void __fastcall WarBoardTreasureListComponent___c__DisplayClass18_0___ctor(
        WarBoardTreasureListComponent___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardTreasureListComponent___c__DisplayClass18_0___Open_b__0(
        WarBoardTreasureListComponent___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  WarBoardTreasureListComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  WarBoardTreasureListComponent__setListData(_4__this, this->fields.treasureList, 0, 0LL);
}