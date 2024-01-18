void __fastcall WarBoardTreasureListComponent___ctor(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  if ( (byte_41888DE & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_41888DE = 1;
  }
  *(_QWORD *)&this->fields.iconScale = 0x743F59999ALL;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardTreasureListComponent__EndClose(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x0
  System_Action_o *closeCallbackFunc; // x20
  UnityEngine_Object_o *v13; // x19

  if ( (byte_41888DC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41888DC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
  v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(v13, 0LL);
}


void __fastcall WarBoardTreasureListComponent__Init(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardTreasureListComponent__OnClickCloseButton(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_41888DA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&SeManager_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_WarBoardTreasureListComponent_EndClose__, v5);
    byte_41888DA = 1;
  }
  if ( this->fields.dialogType == 2 )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(10, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
  }
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UILabel_o *textLabel; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *v41; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x22
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  System_Action_o *v48; // x20
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41888D9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, treasureList);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v9);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__, v13);
    sub_B2C35C(&WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_15245/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/, v15);
    sub_B2C35C(&StringLiteral_15244/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/, v16);
    sub_B2C35C(&StringLiteral_15243/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/, v17);
    byte_41888D9 = 1;
  }
  v18 = sub_B2C42C(WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo);
  WarBoardTreasureListComponent___c__DisplayClass18_0___ctor(
    (WarBoardTreasureListComponent___c__DisplayClass18_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_38;
  *(_QWORD *)(v18 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = treasureList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v18 + 24),
    (System_Int32_array **)treasureList,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.dialogType = type;
  if ( type != 1 )
  {
    if ( type )
      goto LABEL_36;
    textLabel = this->fields.textLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15243/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/, 0LL);
    if ( textLabel )
    {
      UILabel__set_text(textLabel, scrollView, 0LL);
      titleLabel = this->fields.titleLabel;
      scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15244/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, scrollView, 0LL);
        goto LABEL_36;
      }
    }
LABEL_38:
    sub_B2C434(scrollView, v20);
  }
  v41 = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15245/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/, 0LL);
  if ( !v41 )
    goto LABEL_38;
  UILabel__set_text(v41, scrollView, 0LL);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_38;
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer, float, float, float, float))scrollView->klass->vtable._18_System_IConvertible_ToDouble.method)(
    scrollView,
    scrollView->klass->vtable._19_System_IConvertible_ToDecimal.methodPtr,
    0.0,
    0.0,
    (float)this->fields.width,
    (float)this->fields.height);
  scrollView = (System_String_o *)this->fields.listBg;
  if ( !scrollView )
    goto LABEL_38;
  UIWidget__set_width((UIWidget_o *)scrollView, this->fields.width, 0LL);
  scrollView = (System_String_o *)this->fields.listBg;
  if ( !scrollView )
    goto LABEL_38;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height + 10, 0LL);
  scrollView = (System_String_o *)this->fields.listBg;
  if ( !scrollView )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.basePos, 0LL);
  scrollView = (System_String_o *)this->fields.listBg;
  if ( !scrollView )
    goto LABEL_38;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !scrollView )
    goto LABEL_38;
  v49.fields.z = 0.0;
  v49.fields.y = (float)(this->fields.height + 10);
  v49.fields.x = (float)this->fields.width;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)scrollView, v49, 0LL);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_38;
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetParent(v43, 0LL);
  if ( !scrollView )
    goto LABEL_38;
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  if ( !scrollView )
    goto LABEL_38;
  v44 = (UnityEngine_GameObject_o *)scrollView;
  scrollView = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollView, 0LL);
  if ( !scrollView )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.basePos, 0LL);
  scrollView = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v44,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !scrollView )
    goto LABEL_38;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0LL);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_38;
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v45, 0, 0LL);
  if ( !scrollView )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.gridPos, 0LL);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_38;
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v46, 0, 0LL);
  if ( !scrollView )
    goto LABEL_38;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_38;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height - 10, 0LL);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_38;
  v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v47, 1, 0LL);
  if ( !scrollView )
    goto LABEL_38;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_38;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0LL);
LABEL_36:
  this->fields.closeCallbackFunc = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !scrollView )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0LL);
  v48 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v18,
    Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardTreasureListComponent__get_closeBtnObject(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_41888DD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41888DD = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTreasureListComponent__setListData(
        WarBoardTreasureListComponent_o *this,
        System_Int32_array *treasureList,
        int32_t setColMax,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x22
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *Instance; // x0
  __int64 v14; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v16; // x8
  unsigned __int64 v17; // x9
  int v18; // w8
  void *v19; // x23
  unsigned int v20; // w22
  int32_t *v21; // x26
  struct UnityEngine_GameObject_o *prefabResultItem; // x24
  UnityEngine_GameObject_o *v23; // x24
  UnityEngine_Transform_o *transform; // x25
  int v25; // s0
  ItemIconComponent_o *v28; // x25
  int32_t v29; // w3
  __int64 v30; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // [xsp+0h] [xbp-70h]
  System_Int32_array *v32; // [xsp+8h] [xbp-68h]
  GiftMaster_o *v33; // [xsp+10h] [xbp-60h]
  unsigned __int64 v34; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v4 = treasureList;
  if ( (byte_41888DB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, treasureList);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardTreasureMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v9);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_41888DB = 1;
  }
  if ( v4 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardTreasureMaster___),
          (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
LABEL_33:
      sub_B2C434(Instance, v14);
    }
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
    v16 = *(_QWORD *)&v4->max_length;
    v33 = (GiftMaster_o *)Instance;
    if ( (int)v16 >= 1 )
    {
      v17 = 0LL;
      v31 = MasterData_WarQuestSelectionMaster;
      v32 = v4;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)v16 )
          goto LABEL_34;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_33;
        v34 = v17;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v4->m_Items[v17 + 1],
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_33;
        if ( !v33 )
          goto LABEL_33;
        Instance = GiftMaster__GetGiftListById(v33, *((_DWORD *)Instance + 10), 0LL);
        if ( !Instance )
          goto LABEL_33;
        v18 = *((_DWORD *)Instance + 6);
        v19 = Instance;
        if ( v18 >= 1 )
          break;
LABEL_31:
        MasterData_WarQuestSelectionMaster = v31;
        v4 = v32;
        LODWORD(v16) = v32->max_length;
        v17 = v34 + 1;
        if ( (__int64)(v34 + 1) >= (int)v16 )
          return;
      }
      v20 = 0;
      while ( v20 < v18 )
      {
        v21 = (int32_t *)*((_QWORD *)v19 + (int)v20 + 4);
        prefabResultItem = this->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefabResultItem,
                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_33;
        v23 = (UnityEngine_GameObject_o *)Instance;
        Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_33;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v23, 0LL);
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_33;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v25, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v23, 0LL);
        if ( !Instance )
          goto LABEL_33;
        v35.fields.x = this->fields.iconScale;
        v35.fields.y = v35.fields.x;
        v35.fields.z = v35.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v35, 0LL);
        Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                     v23,
                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v21 )
          goto LABEL_33;
        v28 = (ItemIconComponent_o *)Instance;
        if ( !Instance )
          goto LABEL_33;
        v29 = v21[7] <= 1 ? -1 : v21[7];
        ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v21[5], v21[6], v29, 0, 0LL);
        ItemIconComponent__SetCondensedScale(v28, this->fields.counterLabelMaxWidth, 0LL);
        UnityEngine_GameObject__SetActive(v23, 1, 0LL);
        Instance = this->fields.listRoot;
        if ( !Instance )
          goto LABEL_33;
        Instance = UnityEngine_Component__GetComponent_WebViewObject_(
                     (UnityEngine_Component_o *)Instance,
                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_33;
        Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
                             Instance,
                             *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v18 = *((_DWORD *)v19 + 6);
        if ( (int)++v20 >= v18 )
          goto LABEL_31;
      }
LABEL_34:
      v30 = sub_B2C460(Instance);
      sub_B2C400(v30, 0LL);
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
    sub_B2C434(0LL, method);
  WarBoardTreasureListComponent__setListData(_4__this, this->fields.treasureList, 0, 0LL);
}