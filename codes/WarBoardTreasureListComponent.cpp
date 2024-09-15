void __fastcall WarBoardTreasureListComponent___ctor(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A2BEFE & 1) == 0 )
  {
    sub_1B761C0(&BaseDialog_TypeInfo, method);
    byte_4A2BEFE = 1;
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

  if ( (byte_4A2BEFC & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2BEFC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B7641C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B76164(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
  v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69287408(v9, 0LL);
}


void __fastcall WarBoardTreasureListComponent__Init(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B7641C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardTreasureListComponent__OnClickCloseButton(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  int32_t dialogType; // w22
  System_Reflection_MethodBase_o *v7; // x0
  System_Action_o *v8; // x20

  if ( (byte_4A2BEFA & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_WarBoardTreasureListComponent_EndClose__, v3);
    sub_1B761C0(&Method_WarBoardTreasureListComponent_OnClickCloseButton__, v4);
    byte_4A2BEFA = 1;
  }
  v5 = Method_WarBoardTreasureListComponent_OnClickCloseButton__;
  dialogType = this->fields.dialogType;
  if ( (*((_BYTE *)Method_WarBoardTreasureListComponent_OnClickCloseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B761D8(Method_WarBoardTreasureListComponent_OnClickCloseButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B761A4(v5, v5[4]);
  if ( dialogType == 2 )
    OverwriteAssetSoundName__PlayCommonSe(v7, 10, 0LL);
  else
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  v8 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WarBoardTreasureListComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall WarBoardTreasureListComponent__Open(
        WarBoardTreasureListComponent_o *this,
        System_Int32_array *treasureList,
        int32_t type,
        System_Action_o *closeCallback,
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
  __int64 v18; // x21
  System_String_o *scrollView; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  UILabel_o *textLabel; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *v29; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x22
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  System_Action_o *v36; // x20
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A2BEF9 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, treasureList);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v9);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_UISprite___, v10);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v11);
    sub_1B761C0(&LocalizationManager_TypeInfo, v12);
    sub_1B761C0(&Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__, v13);
    sub_1B761C0(&WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo, v14);
    sub_1B761C0(&StringLiteral_15391/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/, v15);
    sub_1B761C0(&StringLiteral_15390/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/, v16);
    sub_1B761C0(&StringLiteral_15389/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/, v17);
    byte_4A2BEF9 = 1;
  }
  v18 = sub_1B7640C(WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_36;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 24) = treasureList;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)treasureList, v23, v24);
  this->fields.dialogType = type;
  if ( type != 1 )
  {
    if ( type )
      goto LABEL_34;
    textLabel = this->fields.textLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15389/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/, 0LL);
    if ( textLabel )
    {
      UILabel__set_text(textLabel, scrollView, 0LL);
      titleLabel = this->fields.titleLabel;
      scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15390/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, scrollView, 0LL);
        goto LABEL_34;
      }
    }
LABEL_36:
    sub_1B7641C(scrollView, v20);
  }
  v29 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15391/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/, 0LL);
  if ( !v29 )
    goto LABEL_36;
  UILabel__set_text(v29, scrollView, 0LL);
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
                                    (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !scrollView )
    goto LABEL_36;
  v37.fields.z = 0.0;
  v37.fields.y = (float)(this->fields.height + 10);
  v37.fields.x = (float)this->fields.width;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)scrollView, v37, 0LL);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetParent(v31, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  v32 = (UnityEngine_GameObject_o *)scrollView;
  scrollView = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollView, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.basePos, 0LL);
  scrollView = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v32,
                                    (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0LL);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_36;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v33, 0, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.gridPos, 0LL);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_36;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v34, 0, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height - 10, 0LL);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_36;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v35, 1, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0LL);
LABEL_34:
  this->fields.closeCallbackFunc = closeCallback;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallback, v25, v26);
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !scrollView )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0LL);
  v36 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v18,
    Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardTreasureListComponent__get_closeBtnObject(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A2BEFD & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2BEFD = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B7641C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall WarBoardTreasureListComponent__setListData(
        WarBoardTreasureListComponent_o *this,
        System_Int32_array *treasureList,
        int32_t setColMax,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x24
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x25
  __int64 v16; // x8
  GiftMaster_o *v17; // x26
  unsigned __int64 v18; // x27
  int v19; // w8
  __int64 v20; // x24
  unsigned int v21; // w27
  Il2CppObject *prefabResultItem; // x25
  int32_t *v23; // x29
  UnityEngine_GameObject_o *v24; // x25
  UnityEngine_Transform_o *v25; // x26
  ItemIconComponent_o *v26; // x26
  int32_t v27; // w3
  GiftMaster_o *v28; // [xsp+0h] [xbp-80h]
  Il2CppObject *v29; // [xsp+8h] [xbp-78h]
  System_Int32_array *v30; // [xsp+10h] [xbp-70h]
  unsigned __int64 v31; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v4 = treasureList;
  if ( (byte_4A2BEFB & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_UIGrid___, treasureList);
    sub_1B761C0(&Method_DataManager_GetMasterData_GiftMaster___, v6);
    sub_1B761C0(&Method_DataManager_GetMasterData_WarBoardTreasureMaster___, v7);
    sub_1B761C0(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__, v8);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v9);
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v11);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A2BEFB = 1;
  }
  if ( v4 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_WarBoardTreasureMaster___),
          (Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
    {
LABEL_34:
      sub_1B7641C(Instance, v14);
    }
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_GiftMaster___);
    v16 = *(_QWORD *)&v4->max_length;
    if ( (int)v16 >= 1 )
    {
      v17 = (GiftMaster_o *)Instance;
      v18 = 0LL;
      v29 = MasterData_object;
      v30 = v4;
      v28 = (GiftMaster_o *)Instance;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)v16 )
          goto LABEL_35;
        if ( !MasterData_object )
          goto LABEL_34;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              v4->m_Items[v18 + 1],
                              (const MethodInfo_30FF780 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_34;
        if ( !v17 )
          goto LABEL_34;
        v31 = v18;
        Instance = (__int64)GiftMaster__GetGiftListById(v17, *(_DWORD *)(Instance + 40), 0LL);
        if ( !Instance )
          goto LABEL_34;
        v19 = *(_DWORD *)(Instance + 24);
        v20 = Instance;
        if ( v19 >= 1 )
          break;
LABEL_32:
        v4 = v30;
        v17 = v28;
        MasterData_object = v29;
        LODWORD(v16) = v30->max_length;
        v18 = v31 + 1;
        if ( (__int64)(v31 + 1) >= (int)v16 )
          return;
      }
      v21 = 0;
      while ( v21 < v19 )
      {
        prefabResultItem = (Il2CppObject *)this->fields.prefabResultItem;
        v23 = *(int32_t **)(v20 + 8LL * (int)v21 + 32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                              prefabResultItem,
                              (const MethodInfo_2EE5790 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_34;
        v24 = (UnityEngine_GameObject_o *)Instance;
        Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_34;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v24, 0LL);
        v25 = (UnityEngine_Transform_o *)Instance;
        if ( !byte_4A28BB1 )
        {
          Instance = sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v14);
          byte_4A28BB1 = 1;
        }
        if ( !v25 )
          goto LABEL_34;
        UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        Instance = (__int64)UnityEngine_GameObject__get_transform(v24, 0LL);
        if ( !Instance )
          goto LABEL_34;
        v32.fields.x = this->fields.iconScale;
        v32.fields.y = v32.fields.x;
        v32.fields.z = v32.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v32, 0LL);
        Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v24,
                              (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v23 )
          goto LABEL_34;
        v26 = (ItemIconComponent_o *)Instance;
        if ( !Instance )
          goto LABEL_34;
        v27 = v23[7] <= 1 ? -1 : v23[7];
        ItemIconComponent__SetGift_37964100((ItemIconComponent_o *)Instance, v23[5], v23[6], v27, 0, 0LL);
        ItemIconComponent__SetCondensedScale(v26, this->fields.counterLabelMaxWidth, 0LL);
        UnityEngine_GameObject__SetActive(v24, 1, 0LL);
        Instance = (__int64)this->fields.listRoot;
        if ( !Instance )
          goto LABEL_34;
        Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)Instance,
                              (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_34;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
                     Instance,
                     *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v19 = *(_DWORD *)(v20 + 24);
        if ( (int)++v21 >= v19 )
          goto LABEL_32;
      }
LABEL_35:
      sub_1B76424(Instance, v14);
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
    sub_1B7641C(this, method);
  WarBoardTreasureListComponent__setListData(this->fields.__4__this, this->fields.treasureList, v2, v3);
}