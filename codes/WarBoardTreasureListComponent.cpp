void WarBoardTreasureListComponent___ctor(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_593630F & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593630F = 1;
  }
  v4 = BaseDialog_TypeInfo;
  *(_QWORD *)&this->fields.iconScale = 0x743F59999ALL;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void WarBoardTreasureListComponent__EndClose(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x0
  struct System_Action_o *closeCallbackFunc; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x19

  if ( (byte_593630D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593630D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
  v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  UnityEngine_Object__Destroy_83246496(v15, 0);
}


void WarBoardTreasureListComponent__Init(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void WarBoardTreasureListComponent__OnClickCloseButton(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_593630B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_WarBoardTreasureListComponent_EndClose__);
    sub_21FFC50(&Method_WarBoardTreasureListComponent_OnClickCloseButton__);
    byte_593630B = 1;
  }
  v3 = Method_WarBoardTreasureListComponent_OnClickCloseButton__;
  if ( this->fields.dialogType == 2 )
  {
    if ( (*((_BYTE *)Method_WarBoardTreasureListComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_WarBoardTreasureListComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_WarBoardTreasureListComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_WarBoardTreasureListComponent_OnClickCloseButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  }
  v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_WarBoardTreasureListComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void WarBoardTreasureListComponent__Open(
        WarBoardTreasureListComponent_o *this,
        System_Int32_array *treasureList,
        int32_t type,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v9; // x21
  System_String_o *scrollView; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  UILabel_o *textLabel; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *v33; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x22
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  System_Action_o *v40; // x20
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593630A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__);
    sub_21FFC50(&WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo);
    sub_21FFC50(&StringLiteral_15965/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/);
    sub_21FFC50(&StringLiteral_15964/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/);
    sub_21FFC50(&StringLiteral_15963/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/);
    byte_593630A = 1;
  }
  v9 = sub_21FFEBC(WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo);
  WarBoardTreasureListComponent___c__DisplayClass18_0___ctor(
    (WarBoardTreasureListComponent___c__DisplayClass18_0_o *)v9,
    0);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = treasureList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)treasureList, v18, v19, v20, v21, v22, v23);
  this->fields.dialogType = type;
  if ( type != 1 )
  {
    if ( type )
      goto LABEL_34;
    textLabel = this->fields.textLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
    scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15963/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/, 0);
    if ( textLabel )
    {
      UILabel__set_text(textLabel, scrollView, 0);
      titleLabel = this->fields.titleLabel;
      scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15964/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, scrollView, 0);
        goto LABEL_34;
      }
    }
LABEL_36:
    sub_21FFECC(scrollView, v11);
  }
  v33 = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
  scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15965/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/, 0);
  if ( !v33 )
    goto LABEL_36;
  UILabel__set_text(v33, scrollView, 0);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  ((void (__fastcall *)(System_String_o *, const MethodInfo *, double, double, float, float))scrollView->klass->vtable._18_System_IConvertible_ToInt64.methodPtr)(
    scrollView,
    scrollView->klass->vtable._18_System_IConvertible_ToInt64.method,
    0.0,
    0.0,
    (float)this->fields.width,
    (float)this->fields.height);
  scrollView = (System_String_o *)this->fields.listBg;
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_width((UIWidget_o *)scrollView, this->fields.width, 0);
  scrollView = (System_String_o *)this->fields.listBg;
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height + 10, 0);
  scrollView = (System_String_o *)this->fields.listBg;
  if ( !scrollView )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.basePos, 0);
  scrollView = (System_String_o *)this->fields.listBg;
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !scrollView )
    goto LABEL_36;
  v41.fields.z = 0.0;
  v41.fields.x = (float)this->fields.width;
  v41.fields.y = (float)(this->fields.height + 10);
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)scrollView, v41, 0);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  scrollView = (System_String_o *)GameObjectExtensions__GetParent(v35, 0);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_36;
  v36 = (UnityEngine_GameObject_o *)scrollView;
  scrollView = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.basePos, 0);
  scrollView = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v36,
                                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v37, 0, 0);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.gridPos, 0);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_36;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v38, 0, 0);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height - 10, 0);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_36;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v39, 1, 0);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0);
LABEL_34:
  this->fields.closeCallbackFunc = closeCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeCallback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
  v40 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v9,
    Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0, 0);
}


UnityEngine_GameObject_o *WarBoardTreasureListComponent__get_closeBtnObject(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_593630E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593630E = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void WarBoardTreasureListComponent__setListData(
        WarBoardTreasureListComponent_o *this,
        System_Int32_array *treasureList,
        int32_t setColMax,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x25
  il2cpp_array_size_t max_length; // x8
  GiftMaster_o *v10; // x26
  unsigned __int64 v11; // x27
  __int64 v12; // x2
  int v13; // w8
  __int64 v14; // x24
  unsigned int v15; // w27
  Il2CppObject *prefabResultItem; // x25
  int32_t *v17; // x29
  UnityEngine_GameObject_o *v18; // x25
  UnityEngine_Transform_o *v19; // x26
  ItemIconComponent_o *v20; // x26
  int v21; // w8
  GiftMaster_o *v22; // [xsp+0h] [xbp-80h]
  Il2CppObject *v23; // [xsp+8h] [xbp-78h]
  System_Int32_array *v24; // [xsp+10h] [xbp-70h]
  unsigned __int64 v25; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593630C & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_21FFC50(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardTreasureMaster___);
    sub_21FFC50(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593630C = 1;
  }
  if ( treasureList )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardTreasureMaster___),
          (Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
    {
LABEL_33:
      sub_21FFECC(Instance, v7);
    }
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GiftMaster___);
    max_length = treasureList->max_length;
    if ( (int)max_length >= 1 )
    {
      v10 = (GiftMaster_o *)Instance;
      v11 = 0;
      v23 = MasterData_object;
      v24 = treasureList;
      v22 = (GiftMaster_o *)Instance;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)max_length )
          goto LABEL_34;
        if ( !MasterData_object )
          goto LABEL_33;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              treasureList->m_Items[v11],
                              (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_33;
        if ( !v10 )
          goto LABEL_33;
        v25 = v11;
        Instance = (__int64)GiftMaster__GetGiftListById(v10, *(_DWORD *)(Instance + 40), 0);
        if ( !Instance )
          goto LABEL_33;
        v13 = *(_DWORD *)(Instance + 24);
        v14 = Instance;
        if ( v13 >= 1 )
          break;
LABEL_31:
        treasureList = v24;
        v10 = v22;
        MasterData_object = v23;
        LODWORD(max_length) = v24->max_length;
        v11 = v25 + 1;
        if ( (__int64)(v25 + 1) >= (int)max_length )
          return;
      }
      v15 = 0;
      while ( v15 < v13 )
      {
        prefabResultItem = (Il2CppObject *)this->fields.prefabResultItem;
        v17 = *(int32_t **)(v14 + 8LL * (int)v15 + 32);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v12);
        Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                              prefabResultItem,
                              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_33;
        v18 = (UnityEngine_GameObject_o *)Instance;
        Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_33;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v18, 0);
        v19 = (UnityEngine_Transform_o *)Instance;
        if ( !byte_5931940 )
        {
          Instance = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        if ( !v19 )
          goto LABEL_33;
        UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v18, 0);
        if ( !Instance )
          goto LABEL_33;
        v26.fields.x = this->fields.iconScale;
        v26.fields.y = v26.fields.x;
        v26.fields.z = v26.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v26, 0);
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v18,
                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v17 )
          goto LABEL_33;
        v20 = (ItemIconComponent_o *)Instance;
        if ( !Instance )
          goto LABEL_33;
        v21 = v17[7];
        if ( v21 <= 1 )
          v21 = -1;
        ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)Instance, v17[5], v17[6], v21, 0, 0);
        ItemIconComponent__SetCondensedScale(v20, this->fields.counterLabelMaxWidth, 0);
        UnityEngine_GameObject__SetActive(v18, 1, 0);
        Instance = (__int64)this->fields.listRoot;
        if ( !Instance )
          goto LABEL_33;
        Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)Instance,
                              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_33;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v13 = *(_DWORD *)(v14 + 24);
        if ( (int)++v15 >= v13 )
          goto LABEL_31;
      }
LABEL_34:
      sub_21FFED4(Instance);
    }
  }
}


void WarBoardTreasureListComponent___c__DisplayClass18_0___ctor(
        WarBoardTreasureListComponent___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardTreasureListComponent___c__DisplayClass18_0___Open_b__0(
        WarBoardTreasureListComponent___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  WarBoardTreasureListComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  WarBoardTreasureListComponent__setListData(_4__this, this->fields.treasureList, 0, 0);
}