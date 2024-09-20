void __fastcall WarBoardTreasureListComponent___ctor(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A591B2 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A591B2 = 1;
  }
  *(_QWORD *)&this->fields.iconScale = 0x743F59999ALL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardTreasureListComponent__EndClose(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x0
  struct System_Action_o *closeCallbackFunc; // x21
  UnityEngine_Object_o *v9; // x19

  if ( (byte_4A591B0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A591B0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
  v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(v9, 0LL);
}


void __fastcall WarBoardTreasureListComponent__Init(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardTreasureListComponent__OnClickCloseButton(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t dialogType; // w22
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_4A591AE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_WarBoardTreasureListComponent_EndClose__);
    sub_1B885B0(&Method_WarBoardTreasureListComponent_OnClickCloseButton__);
    byte_4A591AE = 1;
  }
  v3 = Method_WarBoardTreasureListComponent_OnClickCloseButton__;
  dialogType = this->fields.dialogType;
  if ( (*((_BYTE *)Method_WarBoardTreasureListComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardTreasureListComponent_OnClickCloseButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  if ( dialogType == 2 )
    OverwriteAssetSoundName__PlayCommonSe(v5, 10, 0LL);
  else
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_WarBoardTreasureListComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall WarBoardTreasureListComponent__Open(
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
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

  if ( (byte_4A591AD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__);
    sub_1B885B0(&WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo);
    sub_1B885B0(&StringLiteral_15397/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/);
    sub_1B885B0(&StringLiteral_15396/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/);
    sub_1B885B0(&StringLiteral_15395/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/);
    byte_4A591AD = 1;
  }
  v9 = sub_1B887FC(WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = treasureList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)treasureList, v14, v15);
  this->fields.dialogType = type;
  if ( type != 1 )
  {
    if ( type )
      goto LABEL_34;
    textLabel = this->fields.textLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15395/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/, 0LL);
    if ( textLabel )
    {
      UILabel__set_text(textLabel, scrollView, 0LL);
      titleLabel = this->fields.titleLabel;
      scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15396/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, scrollView, 0LL);
        goto LABEL_34;
      }
    }
LABEL_36:
    sub_1B8880C(scrollView, v11);
  }
  v20 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15397/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/, 0LL);
  if ( !v20 )
    goto LABEL_36;
  UILabel__set_text(v20, scrollView, 0LL);
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
                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !scrollView )
    goto LABEL_36;
  v28.fields.z = 0.0;
  v28.fields.y = (float)(this->fields.height + 10);
  v28.fields.x = (float)this->fields.width;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)scrollView, v28, 0LL);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetParent(v22, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  v23 = (UnityEngine_GameObject_o *)scrollView;
  scrollView = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollView, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.basePos, 0LL);
  scrollView = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v23,
                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0LL);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v24, 0, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.gridPos, 0LL);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_36;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v25, 0, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height - 10, 0LL);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_36;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v26, 1, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0LL);
LABEL_34:
  this->fields.closeCallbackFunc = closeCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallback, v16, v17);
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0LL);
  v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardTreasureListComponent__get_closeBtnObject(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A591B1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A591B1 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall WarBoardTreasureListComponent__setListData(
        WarBoardTreasureListComponent_o *this,
        System_Int32_array *treasureList,
        int32_t setColMax,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x25
  __int64 v9; // x8
  GiftMaster_o *v10; // x26
  unsigned __int64 v11; // x27
  int v12; // w8
  void *v13; // x24
  unsigned int v14; // w27
  Il2CppObject *prefabResultItem; // x25
  int32_t *v16; // x29
  UnityEngine_GameObject_o *v17; // x25
  UnityEngine_Transform_o *v18; // x26
  ItemIconComponent_o *v19; // x26
  int32_t v20; // w3
  GiftMaster_o *v21; // [xsp+0h] [xbp-80h]
  Il2CppObject *v22; // [xsp+8h] [xbp-78h]
  System_Int32_array *v23; // [xsp+10h] [xbp-70h]
  unsigned __int64 v24; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A591AF & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardTreasureMaster___);
    sub_1B885B0(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A591AF = 1;
  }
  if ( treasureList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardTreasureMaster___),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
LABEL_34:
      sub_1B8880C(Instance, v7);
    }
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
    v9 = *(_QWORD *)&treasureList->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = (GiftMaster_o *)Instance;
      v11 = 0LL;
      v22 = MasterData_object;
      v23 = treasureList;
      v21 = (GiftMaster_o *)Instance;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)v9 )
          goto LABEL_35;
        if ( !MasterData_object )
          goto LABEL_34;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     treasureList->m_Items[v11 + 1],
                     (const MethodInfo_311D934 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_34;
        if ( !v10 )
          goto LABEL_34;
        v24 = v11;
        Instance = GiftMaster__GetGiftListById(v10, *((_DWORD *)Instance + 10), 0LL);
        if ( !Instance )
          goto LABEL_34;
        v12 = *((_DWORD *)Instance + 6);
        v13 = Instance;
        if ( v12 >= 1 )
          break;
LABEL_32:
        treasureList = v23;
        v10 = v21;
        MasterData_object = v22;
        LODWORD(v9) = v23->max_length;
        v11 = v24 + 1;
        if ( (__int64)(v24 + 1) >= (int)v9 )
          return;
      }
      v14 = 0;
      while ( v14 < v12 )
      {
        prefabResultItem = (Il2CppObject *)this->fields.prefabResultItem;
        v16 = (int32_t *)*((_QWORD *)v13 + (int)v14 + 4);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = UnityEngine_Object__Instantiate_object_(
                     prefabResultItem,
                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_34;
        v17 = (UnityEngine_GameObject_o *)Instance;
        Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_34;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v17, 0LL);
        v18 = (UnityEngine_Transform_o *)Instance;
        if ( !byte_4A55CE1 )
        {
          Instance = (void *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        if ( !v18 )
          goto LABEL_34;
        UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v17, 0LL);
        if ( !Instance )
          goto LABEL_34;
        v25.fields.x = this->fields.iconScale;
        v25.fields.y = v25.fields.x;
        v25.fields.z = v25.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v25, 0LL);
        Instance = UnityEngine_GameObject__GetComponent_object_(
                     v17,
                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v16 )
          goto LABEL_34;
        v19 = (ItemIconComponent_o *)Instance;
        if ( !Instance )
          goto LABEL_34;
        v20 = v16[7] <= 1 ? -1 : v16[7];
        ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)Instance, v16[5], v16[6], v20, 0, 0LL);
        ItemIconComponent__SetCondensedScale(v19, this->fields.counterLabelMaxWidth, 0LL);
        UnityEngine_GameObject__SetActive(v17, 1, 0LL);
        Instance = this->fields.listRoot;
        if ( !Instance )
          goto LABEL_34;
        Instance = UnityEngine_Component__GetComponent_object_(
                     (UnityEngine_Component_o *)Instance,
                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_34;
        Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
                             Instance,
                             *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v12 = *((_DWORD *)v13 + 6);
        if ( (int)++v14 >= v12 )
          goto LABEL_32;
      }
LABEL_35:
      sub_1B88814(Instance, v7);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  WarBoardTreasureListComponent__setListData(this->fields.__4__this, this->fields.treasureList, v2, v3);
}