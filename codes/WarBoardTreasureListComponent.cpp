void __fastcall WarBoardTreasureListComponent___ctor(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FA900 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA900 = 1;
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
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x0
  System_Action_o *closeCallbackFunc; // x20
  UnityEngine_Object_o *v12; // x19

  if ( (byte_40FA8FE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA8FE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
  v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(v12, 0LL);
}


void __fastcall WarBoardTreasureListComponent__Init(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *v10; // x20

  if ( (byte_40FA8FC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&SeManager_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_WarBoardTreasureListComponent_EndClose__, v5);
    byte_40FA8FC = 1;
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
  v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_WarBoardTreasureListComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UILabel_o *textLabel; // x22
  System_String_o *v38; // x0
  UILabel_o *titleLabel; // x22
  System_String_o *v40; // x0
  UILabel_o *v41; // x22
  System_String_o *v42; // x0
  struct UIPanel_o *scrollView; // x0
  UIWidget_o *listBg; // x0
  UIWidget_o *v45; // x0
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v48; // x0
  UnityEngine_BoxCollider_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x22
  UnityEngine_Transform_o *transform; // x0
  UIWidget_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_Transform_o *Child; // x0
  UnityEngine_Component_o *scrollBar; // x0
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_Component_o *v62; // x0
  WebViewObject_o *v63; // x0
  UnityEngine_Component_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_Component_o *v66; // x0
  WebViewObject_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  System_Action_o *v73; // x20
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA8FB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, treasureList);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v9);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__, v13);
    sub_B16FFC(&WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_15185, v15);
    sub_B16FFC(&StringLiteral_15184, v16);
    sub_B16FFC(&StringLiteral_15183, v17);
    byte_40FA8FB = 1;
  }
  v18 = sub_B170CC(
          WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo,
          treasureList,
          *(_QWORD *)&type,
          closeCallback,
          method);
  WarBoardTreasureListComponent___c__DisplayClass18_0___ctor(
    (WarBoardTreasureListComponent___c__DisplayClass18_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_38;
  *(_QWORD *)(v18 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v18 + 24) = treasureList;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v18 + 24),
    (System_Int32_array **)treasureList,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_15183, 0LL);
    if ( textLabel )
    {
      UILabel__set_text(textLabel, v38, 0LL);
      titleLabel = this->fields.titleLabel;
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_15184, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, v40, 0LL);
        goto LABEL_36;
      }
    }
LABEL_38:
    sub_B170D4();
  }
  v41 = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_15185, 0LL);
  if ( !v41 )
    goto LABEL_38;
  UILabel__set_text(v41, v42, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_38;
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float, float, float, float))scrollView->klass->vtable._18_SetRect.method)(
    scrollView,
    scrollView->klass->vtable._19_ParentHasChanged.methodPtr,
    0.0,
    0.0,
    (float)this->fields.width,
    (float)this->fields.height);
  listBg = (UIWidget_o *)this->fields.listBg;
  if ( !listBg )
    goto LABEL_38;
  UIWidget__set_width(listBg, this->fields.width, 0LL);
  v45 = (UIWidget_o *)this->fields.listBg;
  if ( !v45 )
    goto LABEL_38;
  UIWidget__set_height(v45, this->fields.height + 10, 0LL);
  v46 = (UnityEngine_Component_o *)this->fields.listBg;
  if ( !v46 )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject(v46, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.basePos, 0LL);
  v48 = (UnityEngine_Component_o *)this->fields.listBg;
  if ( !v48 )
    goto LABEL_38;
  Component_WebViewObject = (UnityEngine_BoxCollider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                           v48,
                                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !Component_WebViewObject )
    goto LABEL_38;
  v74.fields.z = 0.0;
  v74.fields.y = (float)(this->fields.height + 10);
  v74.fields.x = (float)this->fields.width;
  UnityEngine_BoxCollider__set_size(Component_WebViewObject, v74, 0LL);
  v50 = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !v50 )
    goto LABEL_38;
  v51 = UnityEngine_Component__get_gameObject(v50, 0LL);
  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v51, 0LL);
  if ( !Parent )
    goto LABEL_38;
  v53 = UnityEngine_Component__get_gameObject(Parent, 0LL);
  if ( !v53 )
    goto LABEL_38;
  v54 = v53;
  transform = UnityEngine_GameObject__get_transform(v53, 0LL);
  if ( !transform )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(transform, this->fields.basePos, 0LL);
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v54,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Component_srcLineSprite )
    goto LABEL_38;
  UIWidget__set_height(Component_srcLineSprite, this->fields.height, 0LL);
  v57 = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !v57 )
    goto LABEL_38;
  v58 = UnityEngine_Component__get_gameObject(v57, 0LL);
  Child = GameObjectExtensions__GetChild(v58, 0, 0LL);
  if ( !Child )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(Child, this->fields.gridPos, 0LL);
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_38;
  v61 = UnityEngine_Component__get_gameObject(scrollBar, 0LL);
  v62 = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v61, 0, 0LL);
  if ( !v62 )
    goto LABEL_38;
  v63 = UnityEngine_Component__GetComponent_WebViewObject_(
          v62,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !v63 )
    goto LABEL_38;
  UIWidget__set_height((UIWidget_o *)v63, this->fields.height - 10, 0LL);
  v64 = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !v64 )
    goto LABEL_38;
  v65 = UnityEngine_Component__get_gameObject(v64, 0LL);
  v66 = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v65, 1, 0LL);
  if ( !v66 )
    goto LABEL_38;
  v67 = UnityEngine_Component__GetComponent_WebViewObject_(
          v66,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !v67 )
    goto LABEL_38;
  UIWidget__set_height((UIWidget_o *)v67, this->fields.height, 0LL);
LABEL_36:
  this->fields.closeCallbackFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v68 )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(v68, 1, 0LL);
  v73 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v69, v70, v71, v72);
  System_Action___ctor(
    v73,
    (Il2CppObject *)v18,
    Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v73, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardTreasureListComponent__get_closeBtnObject(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FA8FF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA8FF = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  WebViewManager_o *v15; // x0
  void *GiftListById; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x8
  unsigned __int64 v20; // x9
  WarEntity_o *Entity; // x0
  int v22; // w8
  void *v23; // x23
  unsigned int v24; // w22
  int32_t *v25; // x26
  struct UnityEngine_GameObject_o *prefabResultItem; // x24
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v30; // x25
  int v31; // s0
  UnityEngine_Transform_o *v34; // x0
  ItemIconComponent_o *Component_srcLineSprite; // x0
  ItemIconComponent_o *v36; // x25
  int32_t v37; // w3
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v40; // [xsp+0h] [xbp-70h]
  System_Int32_array *v41; // [xsp+8h] [xbp-68h]
  GiftMaster_o *v42; // [xsp+10h] [xbp-60h]
  unsigned __int64 v43; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  v4 = treasureList;
  if ( (byte_40FA8FD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, treasureList);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardTreasureMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v9);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FA8FD = 1;
  }
  if ( v4 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardTreasureMaster___),
          (v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
LABEL_33:
      sub_B170D4();
    }
    GiftListById = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)v15,
                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
    v19 = *(_QWORD *)&v4->max_length;
    v42 = (GiftMaster_o *)GiftListById;
    if ( (int)v19 >= 1 )
    {
      v20 = 0LL;
      v40 = MasterData_WarQuestSelectionMaster;
      v41 = v4;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)v19 )
          goto LABEL_34;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_33;
        v43 = v20;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v4->m_Items[v20 + 1],
                   (const MethodInfo_266F388 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_33;
        if ( !v42 )
          goto LABEL_33;
        GiftListById = GiftMaster__GetGiftListById(v42, (int32_t)Entity->fields.longName, 0LL);
        if ( !GiftListById )
          goto LABEL_33;
        v22 = *((_DWORD *)GiftListById + 6);
        v23 = GiftListById;
        if ( v22 >= 1 )
          break;
LABEL_31:
        MasterData_WarQuestSelectionMaster = v40;
        v4 = v41;
        LODWORD(v19) = v41->max_length;
        v20 = v43 + 1;
        if ( (__int64)(v43 + 1) >= (int)v19 )
          return;
      }
      v24 = 0;
      while ( v24 < v22 )
      {
        v25 = (int32_t *)*((_QWORD *)v23 + (int)v24 + 4);
        prefabResultItem = this->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v27 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)prefabResultItem,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !v27 )
          goto LABEL_33;
        v28 = v27;
        transform = UnityEngine_GameObject__get_transform(v27, 0LL);
        if ( !transform )
          goto LABEL_33;
        UnityEngine_Transform__set_parent(transform, this->fields.listRoot, 0LL);
        v30 = UnityEngine_GameObject__get_transform(v28, 0LL);
        *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v30 )
          goto LABEL_33;
        UnityEngine_Transform__set_localPosition(v30, *(UnityEngine_Vector3_o *)&v31, 0LL);
        v34 = UnityEngine_GameObject__get_transform(v28, 0LL);
        if ( !v34 )
          goto LABEL_33;
        v44.fields.x = this->fields.iconScale;
        v44.fields.y = v44.fields.x;
        v44.fields.z = v44.fields.x;
        UnityEngine_Transform__set_localScale(v34, v44, 0LL);
        Component_srcLineSprite = (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v28,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v25 )
          goto LABEL_33;
        v36 = Component_srcLineSprite;
        if ( !Component_srcLineSprite )
          goto LABEL_33;
        v37 = v25[7] <= 1 ? -1 : v25[7];
        ItemIconComponent__SetGift(Component_srcLineSprite, v25[5], v25[6], v37, 0, 0LL);
        ItemIconComponent__SetCondensedScale(v36, this->fields.counterLabelMaxWidth, 0LL);
        UnityEngine_GameObject__SetActive(v28, 1, 0LL);
        listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
        if ( !listRoot )
          goto LABEL_33;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    listRoot,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Component_WebViewObject )
          goto LABEL_33;
        GiftListById = (void *)(*(__int64 (__fastcall **)(WebViewObject_o *, Il2CppClass *))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
                                 Component_WebViewObject,
                                 Component_WebViewObject->klass[1]._1.element_class);
        v22 = *((_DWORD *)v23 + 6);
        if ( (int)++v24 >= v22 )
          goto LABEL_31;
      }
LABEL_34:
      sub_B17100(GiftListById, v17, v18);
      sub_B170A0();
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
    sub_B170D4();
  WarBoardTreasureListComponent__setListData(_4__this, this->fields.treasureList, 0, 0LL);
}