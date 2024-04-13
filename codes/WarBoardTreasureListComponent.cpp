void __fastcall WarBoardTreasureListComponent___ctor(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E933A & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E933A = 1;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x0
  System_Action_o *closeCallbackFunc; // x20
  UnityEngine_Object_o *v15; // x19

  if ( (byte_42E9338 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9338 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
  v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(v15, 0LL);
}


void __fastcall WarBoardTreasureListComponent__Init(WarBoardTreasureListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardTreasureListComponent__OnClickCloseButton(
        WarBoardTreasureListComponent_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Action_o *v14; // x20

  if ( (byte_42E9336 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SeManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardTreasureListComponent_EndClose__, v11, v12, v13);
    byte_42E9336 = 1;
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
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_WarBoardTreasureListComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
}


void __fastcall WarBoardTreasureListComponent__Open(
        WarBoardTreasureListComponent_o *this,
        System_Int32_array *treasureList,
        int32_t type,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
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
  __int64 v36; // x21
  System_String_o *scrollView; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  UILabel_o *textLabel; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *v59; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x22
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  System_Action_o *v66; // x20
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9335 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)treasureList, type, closeCallback);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__, v21, v22, v23);
    sub_B5D5C4(&WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_15404/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_15403/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_15402/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/, v33, v34, v35);
    byte_42E9335 = 1;
  }
  v36 = sub_B5D694(WarBoardTreasureListComponent___c__DisplayClass18_0_TypeInfo);
  WarBoardTreasureListComponent___c__DisplayClass18_0___ctor(
    (WarBoardTreasureListComponent___c__DisplayClass18_0_o *)v36,
    0LL);
  if ( !v36 )
    goto LABEL_38;
  *(_QWORD *)(v36 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
  *(_QWORD *)(v36 + 24) = treasureList;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v36 + 24),
    (System_Int32_array **)treasureList,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
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
    scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15402/*"WARBOARD_GET_TREASURE_DIALOG_MESSAGE"*/, 0LL);
    if ( textLabel )
    {
      UILabel__set_text(textLabel, scrollView, 0LL);
      titleLabel = this->fields.titleLabel;
      scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15403/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_GET"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, scrollView, 0LL);
        goto LABEL_36;
      }
    }
LABEL_38:
    sub_B5D69C(scrollView, v38);
  }
  v59 = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  scrollView = LocalizationManager__Get((System_String_o *)StringLiteral_15404/*"WARBOARD_GET_TREASURE_DIALOG_TITLE_RESULT"*/, 0LL);
  if ( !v59 )
    goto LABEL_38;
  UILabel__set_text(v59, scrollView, 0LL);
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
                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !scrollView )
    goto LABEL_38;
  v67.fields.z = 0.0;
  v67.fields.y = (float)(this->fields.height + 10);
  v67.fields.x = (float)this->fields.width;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)scrollView, v67, 0LL);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_38;
  v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetParent(v61, 0LL);
  if ( !scrollView )
    goto LABEL_38;
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  if ( !scrollView )
    goto LABEL_38;
  v62 = (UnityEngine_GameObject_o *)scrollView;
  scrollView = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollView, 0LL);
  if ( !scrollView )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.basePos, 0LL);
  scrollView = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v62,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !scrollView )
    goto LABEL_38;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0LL);
  scrollView = (System_String_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_38;
  v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v63, 0, 0LL);
  if ( !scrollView )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, this->fields.gridPos, 0LL);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_38;
  v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v64, 0, 0LL);
  if ( !scrollView )
    goto LABEL_38;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_38;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height - 10, 0LL);
  scrollView = (System_String_o *)this->fields.scrollBar;
  if ( !scrollView )
    goto LABEL_38;
  v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
  scrollView = (System_String_o *)GameObjectExtensions__GetChild(v65, 1, 0LL);
  if ( !scrollView )
    goto LABEL_38;
  scrollView = (System_String_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)scrollView,
                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !scrollView )
    goto LABEL_38;
  UIWidget__set_height((UIWidget_o *)scrollView, this->fields.height, 0LL);
LABEL_36:
  this->fields.closeCallbackFunc = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallback,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  scrollView = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !scrollView )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0LL);
  v66 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v66,
    (Il2CppObject *)v36,
    Method_WarBoardTreasureListComponent___c__DisplayClass18_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v66, 0, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardTreasureListComponent__get_closeBtnObject(
        WarBoardTreasureListComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E9339 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9339 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTreasureListComponent__setListData(
        WarBoardTreasureListComponent_o *this,
        System_Int32_array *treasureList,
        int32_t setColMax,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x22
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
  void *Instance; // x0
  __int64 v28; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v30; // x8
  unsigned __int64 v31; // x9
  int v32; // w8
  void *v33; // x23
  unsigned int v34; // w22
  int32_t *v35; // x26
  struct UnityEngine_GameObject_o *prefabResultItem; // x24
  UnityEngine_GameObject_o *v37; // x24
  UnityEngine_Transform_o *transform; // x25
  int v39; // s0
  ItemIconComponent_o *v42; // x25
  int32_t v43; // w3
  __int64 v44; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v45; // [xsp+0h] [xbp-70h]
  System_Int32_array *v46; // [xsp+8h] [xbp-68h]
  GiftMaster_o *v47; // [xsp+10h] [xbp-60h]
  unsigned __int64 v48; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  v4 = treasureList;
  if ( (byte_42E9337 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, (_DWORD)treasureList, setColMax, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardTreasureMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42E9337 = 1;
  }
  if ( v4 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardTreasureMaster___),
          (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
    {
LABEL_33:
      sub_B5D69C(Instance, v28);
    }
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
    v30 = *(_QWORD *)&v4->max_length;
    v47 = (GiftMaster_o *)Instance;
    if ( (int)v30 >= 1 )
    {
      v31 = 0LL;
      v45 = MasterData_WarQuestSelectionMaster;
      v46 = v4;
      while ( 1 )
      {
        if ( v31 >= (unsigned int)v30 )
          goto LABEL_34;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_33;
        v48 = v31;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v4->m_Items[v31 + 1],
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_33;
        if ( !v47 )
          goto LABEL_33;
        Instance = GiftMaster__GetGiftListById(v47, *((_DWORD *)Instance + 10), 0LL);
        if ( !Instance )
          goto LABEL_33;
        v32 = *((_DWORD *)Instance + 6);
        v33 = Instance;
        if ( v32 >= 1 )
          break;
LABEL_31:
        MasterData_WarQuestSelectionMaster = v45;
        v4 = v46;
        LODWORD(v30) = v46->max_length;
        v31 = v48 + 1;
        if ( (__int64)(v48 + 1) >= (int)v30 )
          return;
      }
      v34 = 0;
      while ( v34 < v32 )
      {
        v35 = (int32_t *)*((_QWORD *)v33 + (int)v34 + 4);
        prefabResultItem = this->fields.prefabResultItem;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefabResultItem,
                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !Instance )
          goto LABEL_33;
        v37 = (UnityEngine_GameObject_o *)Instance;
        Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_33;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Instance, this->fields.listRoot, 0LL);
        transform = UnityEngine_GameObject__get_transform(v37, 0LL);
        *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_33;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v39, 0LL);
        Instance = UnityEngine_GameObject__get_transform(v37, 0LL);
        if ( !Instance )
          goto LABEL_33;
        v49.fields.x = this->fields.iconScale;
        v49.fields.y = v49.fields.x;
        v49.fields.z = v49.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v49, 0LL);
        Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                     v37,
                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !v35 )
          goto LABEL_33;
        v42 = (ItemIconComponent_o *)Instance;
        if ( !Instance )
          goto LABEL_33;
        v43 = v35[7] <= 1 ? -1 : v35[7];
        ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v35[5], v35[6], v43, 0, 0LL);
        ItemIconComponent__SetCondensedScale(v42, this->fields.counterLabelMaxWidth, 0LL);
        UnityEngine_GameObject__SetActive(v37, 1, 0LL);
        Instance = this->fields.listRoot;
        if ( !Instance )
          goto LABEL_33;
        Instance = UnityEngine_Component__GetComponent_WebViewObject_(
                     (UnityEngine_Component_o *)Instance,
                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !Instance )
          goto LABEL_33;
        Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 440LL))(
                             Instance,
                             *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        v32 = *((_DWORD *)v33 + 6);
        if ( (int)++v34 >= v32 )
          goto LABEL_31;
      }
LABEL_34:
      v44 = sub_B5D6C8(Instance);
      sub_B5D668(v44, 0LL);
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
    sub_B5D69C(0LL, method);
  WarBoardTreasureListComponent__setListData(_4__this, this->fields.treasureList, 0, 0LL);
}