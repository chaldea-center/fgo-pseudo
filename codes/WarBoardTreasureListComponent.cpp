void WarBoardTreasureListComponent___ctor(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C25042 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C25042 = 1;
  }
  *(_QWORD *)&this->fields.iconScale = 0x743F59999ALL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void WarBoardTreasureListComponent__EndClose(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x0
  struct System_Action_o *closeCallbackFunc; // x21
  UnityEngine_Object_o *v9; // x19

  if ( (byte_4C25040 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C25040 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C2D434(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
  v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704(v9, 0);
}


void WarBoardTreasureListComponent__Init(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void WarBoardTreasureListComponent__OnClickCloseButton(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t dialogType; // w22
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_4C2503E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_WarBoardTreasureListComponent_EndClose__);
    sub_1C2D490(&Method_WarBoardTreasureListComponent_OnClickCloseButton__);
    byte_4C2503E = 1;
  }
  v3 = Method_WarBoardTreasureListComponent_OnClickCloseButton__;
  dialogType = this->fields.dialogType;
  if ( (*((_BYTE *)Method_WarBoardTreasureListComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_WarBoardTreasureListComponent_OnClickCloseButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  if ( dialogType == 2 )
    OverwriteAssetSoundName__PlayCommonSe(v5, 10, 0, 0);
  else
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UILabel_o *textLabel; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *v20; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  System_Action_o *v27; // x20
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2503D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__);
    sub_1C2D490(&WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo);
    sub_1C2D490(&StringLiteral_15382/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/);
    sub_1C2D490(&StringLiteral_15381/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/);
    sub_1C2D490(&StringLiteral_15380/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/);
    byte_4C2503D = 1;
  }
  v9 = sub_1C2D6DC(WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo);
  WarBoardTreasureListComponent___c__DisplayClass18_0___ctor(
    (WarBoardTreasureListComponent___c__DisplayClass18_0_o *)v9,
    0);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = treasureList;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 24), (int32_t)treasureList, v14, v15);
  this->fields.dialogType = type;
  if ( type != 1 )
  {
    if ( type )
      goto LABEL_34;
    textLabel = this->fields.textLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15380/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/, 0);
    if ( textLabel )
    {
      UILabel__set_text(textLabel, scrollView, 0);
      titleLabel = this->fields.titleLabel;
      scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15381/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, scrollView, 0);
        goto LABEL_34;
      }
    }
LABEL_36:
    sub_1C2D6EC(scrollView, v11);
  }
  v20 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15382/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/, 0);
  if ( !v20 )
    goto LABEL_36;
  UILabel__set_text(v20, scrollView, 0);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  ((void (__fastcall *)(System_String_o *, const MethodInfo *, float, float, float, float))scrollView->klass->vtable._18_System_IConvertible_ToInt64.methodPtr)(
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
                                    (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !scrollView )
    goto LABEL_36;
  v28.fields.z = 0.0;
  v28.fields.y = (float)(this->fields.height + 10);
  v28.fields.x = (float)this->fields.width;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)scrollView, v28, 0);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  scrollView = (System_String_o *)GameObjectExtensions__GetParent(v22, 0);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_36;
  v23 = (UnityEngine_GameObject_o *)scrollView;
  scrollView = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.basePos, 0);
  scrollView = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v23,
                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v24, 0, 0);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.gridPos, 0);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_36;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v25, 0, 0);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height - 10, 0);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_36;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v26, 1, 0);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0);
LABEL_34:
  this->fields.closeCallbackFunc = closeCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallback, v16, v17);
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
  v27 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0);
}


UnityEngine_GameObject_o *WarBoardTreasureListComponent__get_closeBtnObject(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C25041 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C25041 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void WarBoardTreasureListComponent__setListData(
        WarBoardTreasureListComponent_o *this,
        System_Int32_array *treasureList,
        int32_t setColMax,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x25
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // x8
  GiftMaster_o *v11; // x26
  unsigned __int64 v12; // x27
  int v13; // w8
  void *v14; // x24
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

  if ( (byte_4C2503F & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_WarBoardTreasureMaster___);
    sub_1C2D490(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2503F = 1;
  }
  if ( treasureList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarBoardTreasureMaster___),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
    {
LABEL_33:
      sub_1C2D6EC(Instance, v7);
    }
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
    max_length = treasureList->max_length;
    if ( (int)max_length >= 1 )
    {
      v11 = (GiftMaster_o *)Instance;
      v12 = 0;
      v23 = MasterData_object;
      v24 = treasureList;
      v22 = (GiftMaster_o *)Instance;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)max_length )
          goto LABEL_34;
        if ( !MasterData_object )
          goto LABEL_33;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     treasureList->m_Items[v12],
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_33;
        if ( !v11 )
          goto LABEL_33;
        v25 = v12;
        Instance = GiftMaster__GetGiftListById(v11, *((_DWORD *)Instance + 10), 0);
        if ( !Instance )
          goto LABEL_33;
        v13 = *((_DWORD *)Instance + 6);
        v14 = Instance;
        if ( v13 >= 1 )
          break;
LABEL_31:
        treasureList = v24;
        v11 = v22;
        MasterData_object = v23;
        LODWORD(max_length) = v24->max_length;
        v12 = v25 + 1;
        if ( (__int64)(v25 + 1) >= (int)max_length )
          return;
      }
      v15 = 0;
      while ( v15 < v13 )
      {
        prefabResultItem = (Il2CppObject *)this->fields.prefabResultItem;
        v17 = (int32_t *)*((_QWORD *)v14 + (int)v15 + 4);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = UnityEngine_Object__Instantiate_object_(
                     prefabResultItem,
                     (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_33;
        v18 = (UnityEngine_GameObject_o *)Instance;
        Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_33;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0);
        Instance = UnityEngine_GameObject__get_transform(v18, 0);
        v19 = (UnityEngine_Transform_o *)Instance;
        if ( !byte_4C20DA1 )
        {
          Instance = (void *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA1 = 1;
        }
        if ( !v19 )
          goto LABEL_33;
        UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        Instance = UnityEngine_GameObject__get_transform(v18, 0);
        if ( !Instance )
          goto LABEL_33;
        v26.fields.x = this->fields.iconScale;
        v26.fields.y = v26.fields.x;
        v26.fields.z = v26.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v26, 0);
        Instance = UnityEngine_GameObject__GetComponent_object_(
                     v18,
                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v17 )
          goto LABEL_33;
        v20 = (ItemIconComponent_o *)Instance;
        if ( !Instance )
          goto LABEL_33;
        v21 = v17[7];
        if ( v21 <= 1 )
          v21 = -1;
        ItemIconComponent__SetGift_40700316((ItemIconComponent_o *)Instance, v17[5], v17[6], v21, 0, 0);
        ItemIconComponent__SetCondensedScale(v20, this->fields.counterLabelMaxWidth, 0);
        UnityEngine_GameObject__SetActive(v18, 1, 0);
        Instance = this->fields.listRoot;
        if ( !Instance )
          goto LABEL_33;
        Instance = UnityEngine_Component__GetComponent_object_(
                     (UnityEngine_Component_o *)Instance,
                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_33;
        Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
                             Instance,
                             *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v13 = *((_DWORD *)v14 + 6);
        if ( (int)++v15 >= v13 )
          goto LABEL_31;
      }
LABEL_34:
      sub_1C2D6F4(Instance, v7, v9);
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
    sub_1C2D6EC(0, method);
  WarBoardTreasureListComponent__setListData(_4__this, this->fields.treasureList, 0, 0);
}