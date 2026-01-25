void WarBoardTreasureListComponent___ctor(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CEC31F & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CEC31F = 1;
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x0
  struct System_Action_o *closeCallbackFunc; // x21
  UnityEngine_Object_o *v13; // x19

  if ( (byte_4CEC31D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEC31D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C7BA8C(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
  v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(v13, 0);
}


void WarBoardTreasureListComponent__Init(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void WarBoardTreasureListComponent__OnClickCloseButton(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t dialogType; // w22
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_4CEC31B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_WarBoardTreasureListComponent_EndClose__);
    sub_1C7BAE8(&Method_WarBoardTreasureListComponent_OnClickCloseButton__);
    byte_4CEC31B = 1;
  }
  v3 = Method_WarBoardTreasureListComponent_OnClickCloseButton__;
  dialogType = this->fields.dialogType;
  if ( (*((_BYTE *)Method_WarBoardTreasureListComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_WarBoardTreasureListComponent_OnClickCloseButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  if ( dialogType == 2 )
    OverwriteAssetSoundName__PlayCommonSe(v5, 10, 0, 0);
  else
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  v6 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UILabel_o *textLabel; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *v32; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x22
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  System_Action_o *v39; // x20
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEC31A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__);
    sub_1C7BAE8(&WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_15442/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/);
    sub_1C7BAE8(&StringLiteral_15441/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/);
    sub_1C7BAE8(&StringLiteral_15440/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/);
    byte_4CEC31A = 1;
  }
  v9 = sub_1C7BD34(WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo);
  WarBoardTreasureListComponent___c__DisplayClass18_0___ctor(
    (WarBoardTreasureListComponent___c__DisplayClass18_0_o *)v9,
    0);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = treasureList;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)treasureList, v18, v19, v20, v21, v22, v23);
  this->fields.dialogType = type;
  if ( type != 1 )
  {
    if ( type )
      goto LABEL_34;
    textLabel = this->fields.textLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15440/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/, 0);
    if ( textLabel )
    {
      UILabel__set_text(textLabel, scrollView, 0);
      titleLabel = this->fields.titleLabel;
      scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15441/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, scrollView, 0);
        goto LABEL_34;
      }
    }
LABEL_36:
    sub_1C7BD40(scrollView, v11);
  }
  v32 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15442/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/, 0);
  if ( !v32 )
    goto LABEL_36;
  UILabel__set_text(v32, scrollView, 0);
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
                                    (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !scrollView )
    goto LABEL_36;
  v40.fields.z = 0.0;
  v40.fields.y = (float)(this->fields.height + 10);
  v40.fields.x = (float)this->fields.width;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)scrollView, v40, 0);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  scrollView = (System_String_o *)GameObjectExtensions__GetParent(v34, 0);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_36;
  v35 = (UnityEngine_GameObject_o *)scrollView;
  scrollView = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.basePos, 0);
  scrollView = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v35,
                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v36, 0, 0);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.gridPos, 0);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_36;
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v37, 0, 0);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height - 10, 0);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_36;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v38, 1, 0);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0);
LABEL_34:
  this->fields.closeCallbackFunc = closeCallback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
  v39 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v9,
    Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0, 0);
}


UnityEngine_GameObject_o *WarBoardTreasureListComponent__get_closeBtnObject(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CEC31E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEC31E = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C7BD40(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
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
  int v12; // w8
  __int64 v13; // x24
  unsigned int v14; // w27
  Il2CppObject *prefabResultItem; // x25
  int32_t *v16; // x29
  UnityEngine_GameObject_o *v17; // x25
  UnityEngine_Transform_o *v18; // x26
  ItemIconComponent_o *v19; // x26
  int v20; // w8
  GiftMaster_o *v21; // [xsp+0h] [xbp-80h]
  Il2CppObject *v22; // [xsp+8h] [xbp-78h]
  System_Int32_array *v23; // [xsp+10h] [xbp-70h]
  unsigned __int64 v24; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEC31C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarBoardTreasureMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEC31C = 1;
  }
  if ( treasureList )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarBoardTreasureMaster___),
          (Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
    {
LABEL_33:
      sub_1C7BD40(Instance, v7);
    }
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_GiftMaster___);
    max_length = treasureList->max_length;
    if ( (int)max_length >= 1 )
    {
      v10 = (GiftMaster_o *)Instance;
      v11 = 0;
      v22 = MasterData_object;
      v23 = treasureList;
      v21 = (GiftMaster_o *)Instance;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)max_length )
          goto LABEL_34;
        if ( !MasterData_object )
          goto LABEL_33;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              treasureList->m_Items[v11],
                              (const MethodInfo_342E2FC *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_33;
        if ( !v10 )
          goto LABEL_33;
        v24 = v11;
        Instance = (__int64)GiftMaster__GetGiftListById(v10, *(_DWORD *)(Instance + 40), 0);
        if ( !Instance )
          goto LABEL_33;
        v12 = *(_DWORD *)(Instance + 24);
        v13 = Instance;
        if ( v12 >= 1 )
          break;
LABEL_31:
        treasureList = v23;
        v10 = v21;
        MasterData_object = v22;
        LODWORD(max_length) = v23->max_length;
        v11 = v24 + 1;
        if ( (__int64)(v24 + 1) >= (int)max_length )
          return;
      }
      v14 = 0;
      while ( v14 < v12 )
      {
        prefabResultItem = (Il2CppObject *)this->fields.prefabResultItem;
        v16 = *(int32_t **)(v13 + 8LL * (int)v14 + 32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                              prefabResultItem,
                              (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_33;
        v17 = (UnityEngine_GameObject_o *)Instance;
        Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_33;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v17, 0);
        v18 = (UnityEngine_Transform_o *)Instance;
        if ( !byte_4CE7E59 )
        {
          Instance = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
          byte_4CE7E59 = 1;
        }
        if ( !v18 )
          goto LABEL_33;
        UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v17, 0);
        if ( !Instance )
          goto LABEL_33;
        v25.fields.x = this->fields.iconScale;
        v25.fields.y = v25.fields.x;
        v25.fields.z = v25.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v25, 0);
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v17,
                              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v16 )
          goto LABEL_33;
        v19 = (ItemIconComponent_o *)Instance;
        if ( !Instance )
          goto LABEL_33;
        v20 = v16[7];
        if ( v20 <= 1 )
          v20 = -1;
        ItemIconComponent__SetGift_41487788((ItemIconComponent_o *)Instance, v16[5], v16[6], v20, 0, 0);
        ItemIconComponent__SetCondensedScale(v19, this->fields.counterLabelMaxWidth, 0);
        UnityEngine_GameObject__SetActive(v17, 1, 0);
        Instance = (__int64)this->fields.listRoot;
        if ( !Instance )
          goto LABEL_33;
        Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)Instance,
                              (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_33;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v12 = *(_DWORD *)(v13 + 24);
        if ( (int)++v14 >= v12 )
          goto LABEL_31;
      }
LABEL_34:
      sub_1C7BD48(Instance);
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
    sub_1C7BD40(0, method);
  WarBoardTreasureListComponent__setListData(_4__this, this->fields.treasureList, 0, 0);
}