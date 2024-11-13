void __fastcall WarBoardConsumedPieceActionPointPopup___ctor(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B140C8 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardInfoPopupBase_TypeInfo, method, v2);
    byte_4B140C8 = 1;
  }
  if ( !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo, method);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardConsumedPieceActionPointPopup__Awake(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardConsumedPieceActionPointPopup__ClosePopup(
        WarBoardConsumedPieceActionPointPopup_o *this,
        System_Action_o *hideCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o **p_hideCompleteCallback; // x20
  System_Delegate_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x8
  System_Action_c *v19; // x1
  const MethodInfo *v20; // x1

  if ( (byte_4B140C7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, hideCallback, method);
    byte_4B140C7 = 1;
  }
  this->fields.hideCompleteCallback = 0LL;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.hideCompleteCallback,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.hideCompleteCallback,
          (System_Delegate_o *)hideCallback,
          0LL);
  v18 = (int64_t)v11;
  if ( !v11 )
    goto LABEL_7;
  v19 = System_Action_TypeInfo;
  if ( (System_Action_c *)v11->klass != System_Action_TypeInfo
    || (*p_hideCompleteCallback = (struct System_Action_o *)v11, (System_Action_c *)v11->klass != v19) )
  {
    sub_1BCACFC(v11);
LABEL_7:
    *p_hideCompleteCallback = (struct System_Action_o *)v18;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.hideCompleteCallback, v18, v12, v13, v14, v15, v16, v17);
  WarBoardInfoPopupBase__Hide((WarBoardInfoPopupBase_o *)this, v20);
}


void __fastcall WarBoardConsumedPieceActionPointPopup__Initialize(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISkinSprite_o *windowBase; // x0

  WarBoardInfoPopupBase__Initialize((WarBoardInfoPopupBase_o *)this, method);
  windowBase = this->fields.windowBase;
  if ( !windowBase )
    sub_1BCAA3C(0LL, v3);
  UISkinSprite__setupSprite(windowBase, 0LL);
}


void __fastcall WarBoardConsumedPieceActionPointPopup__OnClickClose(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4B140C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__, method, v2);
    byte_4B140C6 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v4 = Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickCallback->fields.m_target)(
        clickCallback->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickCallback->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConsumedPieceActionPointPopup__OpenNoticePopup(
        WarBoardConsumedPieceActionPointPopup_o *this,
        System_Action_bool__o *clickCallback,
        int32_t consumedPoint,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__o *consumedPieceList,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  System_String_o *v29; // x22
  Il2CppObject *v30; // x0
  System_String_o *Count; // x0
  const MethodInfo *v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Text_StringBuilder_o *v36; // x21
  int32_t v37; // w22
  Il2CppObject *Item; // x24
  int v39; // w23
  UILabel_o *consumedLabel; // x20
  __int64 v41; // x1
  UILabel_o *closeButtonLabel; // x20
  __int64 v43; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v45; // x1
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v47; // x20
  float height; // s0
  struct UILabel_o *v49; // x8
  int v50; // w8
  int32_t v51; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B140C5 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, clickCallback, *(_QWORD *)&consumedPoint);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&NGUITools_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__, v20, v21);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_15558/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_15559/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/, v26, v27);
    byte_4B140C5 = 1;
  }
  this->fields.clickCallback = clickCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.clickCallback,
    (int64_t)clickCallback,
    *(int64_t *)&consumedPoint,
    (int32_t)consumedPieceList,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_15559/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/, 0LL);
  v51 = consumedPoint;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  Count = System_String__Format(v29, v30, 0LL);
  if ( !this->fields.messgeLabel )
    goto LABEL_36;
  UILabel__set_text(this->fields.messgeLabel, Count, 0LL);
  v36 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v33, v34, v35);
  System_Text_StringBuilder___ctor(v36, 0LL);
  if ( !consumedPieceList )
    goto LABEL_36;
  Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                               (const MethodInfo_378B66C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
  if ( (int)Count >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
               v37,
               (const MethodInfo_378B6F4 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__);
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                                   (const MethodInfo_378B66C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( !Item )
        break;
      v39 = (int)Count;
      Count = (System_String_o *)Item[8].klass;
      if ( !Count )
        break;
      Count = BattleServantData__getServantShortName((BattleServantData_o *)Count, 0LL);
      if ( !v36 )
        break;
      if ( v37 == v39 - 1 )
        System_Text_StringBuilder__Append_61563116(v36, Count, 0LL);
      else
        System_Text_StringBuilder__AppendLine_61564340(v36, Count, 0LL);
      ++v37;
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                                   (const MethodInfo_378B66C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( v37 >= (int)Count )
        goto LABEL_16;
    }
LABEL_36:
    sub_1BCAA3C(Count, v32);
  }
LABEL_16:
  if ( !v36 )
    goto LABEL_36;
  consumedLabel = this->fields.consumedLabel;
  Count = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v36->klass->vtable._3_ToString.method)(
                               v36,
                               v36->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !consumedLabel )
    goto LABEL_36;
  UILabel__set_text(consumedLabel, Count, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
  Count = LocalizationManager__Get((System_String_o *)StringLiteral_15558/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_36;
  UILabel__set_text(closeButtonLabel, Count, 0LL);
  Count = (System_String_o *)this->fields.consumedLabel;
  if ( !Count )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Count, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v43);
  NGUITools__UpdateWidgetCollider_47423264(gameObject, 1, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
  Count = (System_String_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)Count & 1) != 0 )
  {
    v47 = this->fields.scrollView;
    if ( !v47 )
      goto LABEL_36;
    Count = (System_String_o *)v47->fields.mPanel;
    if ( !Count )
      goto LABEL_36;
    height = UIPanel__get_height((UIPanel_o *)Count, 0LL);
    v49 = this->fields.consumedLabel;
    if ( !v49 )
      goto LABEL_36;
    v50 = height <= (float)v49->fields.mHeight ? 1 : 4;
    v47->fields.contentPivot = v50;
    Count = (System_String_o *)this->fields.scrollView;
    if ( !Count )
      goto LABEL_36;
    UIScrollView__ResetPosition((UIScrollView_o *)Count, 0LL);
  }
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, v32);
}