void ClassBoardFigureController___ctor(ClassBoardFigureController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_List_StandFigureCollect___c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t v11; // w1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_593C46F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_List_StandFigureCollect____ctor__);
    sub_21FFC50(&System_Collections_Generic_List_List_StandFigureCollect___TypeInfo);
    sub_21FFC50(&StringLiteral_18269/*"btn_to_grand_servant_select"*/);
    sub_21FFC50(&StringLiteral_21439/*"img_plus"*/);
    sub_21FFC50(&StringLiteral_21547/*"img_text_base"*/);
    byte_593C46F = 1;
  }
  v3 = System_Collections_Generic_List_List_StandFigureCollect___TypeInfo;
  this->fields.svtScale = 10.0;
  *(_QWORD *)&this->fields.svtDisplayTime = 4489188110499840000LL;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_List_StandFigureCollect____ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_List_StandFigureCollect___o *)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.figureCollectList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = StringLiteral_18269/*"btn_to_grand_servant_select"*/;
  this->fields.selectServantSpriteName = (struct System_String_o *)StringLiteral_18269/*"btn_to_grand_servant_select"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectServantSpriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = StringLiteral_21439/*"img_plus"*/;
  this->fields.selectServantPlusSpriteName = (struct System_String_o *)StringLiteral_21439/*"img_plus"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectServantPlusSpriteName,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = StringLiteral_21547/*"img_text_base"*/;
  this->fields.selectServantTxtBaseSpriteName = (struct System_String_o *)StringLiteral_21547/*"img_text_base"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectServantTxtBaseSpriteName,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardFigureController__Awake(ClassBoardFigureController_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardFigureController__ChangeDispServantFigure(
        ClassBoardFigureController_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *figureCollectList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UIStandFigureR_o *v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_593C469 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
    byte_593C469 = 1;
  }
  figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
  memset(&v13, 0, sizeof(v13));
  if ( !figureCollectList )
    goto LABEL_24;
  if ( figureCollectList->fields._size <= index )
    return;
  figureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     figureCollectList,
                                                                     this->fields.currentSvtIndex,
                                                                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
  if ( !figureCollectList )
    goto LABEL_24;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    figureCollectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v13 = v12;
  v12.fields._list = 0;
  *(_QWORD *)&v12.fields._index = &v13;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v6 )
      break;
    if ( !v13.fields._current )
      sub_21FFECC(v6, v7);
    monitor = (UIStandFigureR_o *)v13.fields._current[1].monitor;
    if ( !monitor )
      sub_21FFECC(0, v7);
    UIStandFigureR__SetAlpha(monitor, 0.0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
  if ( !figureCollectList
    || (figureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           figureCollectList,
                                                                           index,
                                                                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__)) == 0 )
  {
LABEL_24:
    sub_21FFECC(figureCollectList, *(_QWORD *)&index);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    figureCollectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v13 = v12;
  v12.fields._list = 0;
  *(_QWORD *)&v12.fields._index = &v13;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    if ( !v13.fields._current )
      sub_21FFECC(v9, v10);
    v11 = (UIStandFigureR_o *)v13.fields._current[1].monitor;
    if ( !v11 )
      sub_21FFECC(0, v10);
    UIStandFigureR__SetAlpha(v11, 1.0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  this->fields.currentSvtIndex = index;
}


void ClassBoardFigureController__OnClickToGrandServantList(
        ClassBoardFigureController_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *classBoardController; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_593C46E & 1) == 0 )
  {
    sub_21FFC50(&Method_ClassBoardFigureController_OnClickToGrandServantList__);
    byte_593C46E = 1;
  }
  classBoardController = this->fields.classBoardController;
  if ( !classBoardController )
    sub_21FFECC(0, method);
  if ( ClassBoardController__IsTouchEnableUi(classBoardController, 0) )
  {
    v4 = Method_ClassBoardFigureController_OnClickToGrandServantList__;
    if ( (*((_BYTE *)Method_ClassBoardFigureController_OnClickToGrandServantList__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_ClassBoardFigureController_OnClickToGrandServantList__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    ActionExtensions__Call(this->fields.onClickToGrandServantList, 0);
  }
}


System_Collections_IEnumerator_o *ClassBoardFigureController__PlaySwitchServantAnimationCoroutine(
        ClassBoardFigureController_o *this,
        float startAlpha,
        float endAlpha,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593C46C & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_TypeInfo);
    byte_593C46C = 1;
  }
  v7 = sub_21FFEBC(ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(float *)(v7 + 40) = endAlpha;
  *(float *)(v7 + 44) = startAlpha;
  return (System_Collections_IEnumerator_o *)v7;
}


void ClassBoardFigureController__SetOnClickToGrandServantList(
        ClassBoardFigureController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onClickToGrandServantList = action;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickToGrandServantList,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardFigureController__SetServantSelectObj(
        ClassBoardFigureController_o *this,
        int32_t baseId,
        bool isDispMessage,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *svtBase; // x0
  __int64 v8; // x1
  System_String_o *ParentClassNameByBaseClassId; // x0
  __int64 v10; // x1
  UILabel_o *grandServantChoiceMessage; // x19
  Il2CppObject *v12; // x20
  System_String_o *v13; // x0

  if ( (byte_593C46D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3507/*"CLASS_BOARD_CHOICE_GRAND_SERVANT_MSG"*/);
    byte_593C46D = 1;
  }
  svtBase = this->fields.svtBase;
  if ( !svtBase )
    goto LABEL_15;
  svtBase = UnityEngine_GameObject__get_gameObject(svtBase, 0);
  if ( !svtBase )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(svtBase, 0, 0);
  svtBase = this->fields.servantSelectParentObj;
  if ( !svtBase )
    goto LABEL_15;
  svtBase = UnityEngine_GameObject__get_gameObject(svtBase, 0);
  if ( !svtBase )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(svtBase, 1, 0);
  svtBase = this->fields.grandServantChoiceMessageObj;
  if ( !svtBase )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(svtBase, isDispMessage, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  svtBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !svtBase )
    goto LABEL_15;
  ParentClassNameByBaseClassId = ClassBoardBaseMaster__GetParentClassNameByBaseClassId(
                                   (ClassBoardBaseMaster_o *)svtBase,
                                   baseId,
                                   0);
  grandServantChoiceMessage = this->fields.grandServantChoiceMessage;
  v12 = (Il2CppObject *)ParentClassNameByBaseClassId;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3507/*"CLASS_BOARD_CHOICE_GRAND_SERVANT_MSG"*/, 0);
  svtBase = (UnityEngine_GameObject_o *)System_String__Format(v13, v12, 0);
  if ( !grandServantChoiceMessage )
LABEL_15:
    sub_21FFECC(svtBase, *(_QWORD *)&baseId);
  UILabel__set_text(grandServantChoiceMessage, (System_String_o *)svtBase, 0);
}


void ClassBoardFigureController__SetServantSelectSprite(
        ClassBoardFigureController_o *this,
        AtlasManagerUnit_o *atlasManagerUnit,
        const MethodInfo *method)
{
  ClassBoardFigureController_o *v4; // x19

  if ( !atlasManagerUnit
    || (v4 = this,
        AtlasManagerUnit__SetUI(
          atlasManagerUnit,
          this->fields.servantSelectSprite,
          this->fields.selectServantSpriteName,
          0),
        AtlasManagerUnit__SetUI(
          atlasManagerUnit,
          v4->fields.servantSelectPlusSprite,
          v4->fields.selectServantPlusSpriteName,
          0),
        AtlasManagerUnit__SetUI(
          atlasManagerUnit,
          v4->fields.servantSelectTxtBaseSprite,
          v4->fields.selectServantTxtBaseSpriteName,
          0),
        (this = (ClassBoardFigureController_o *)v4->fields.servantSelectSprite) == 0) )
  {
    sub_21FFECC(this, atlasManagerUnit);
  }
  ((void (__fastcall *)(ClassBoardFigureController_o *, void *))this->klass[2]._1.parent)(
    this,
    this->klass[2]._1.generic_class);
}


void ClassBoardFigureController__SetSvtFigure(
        ClassBoardFigureController_o *this,
        System_Collections_Generic_List_long__o *userSvtIds,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *svtBase; // x0
  char v6; // w20
  const MethodInfo *v7; // x3
  __int64 v8; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o *v9; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_593C467 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    byte_593C467 = 1;
  }
  svtBase = this->fields.svtBase;
  memset(&v10, 0, sizeof(v10));
  if ( !svtBase
    || (svtBase = UnityEngine_GameObject__get_gameObject(svtBase, 0)) == 0
    || (UnityEngine_GameObject__SetActive(svtBase, 1, 0), (svtBase = this->fields.servantSelectParentObj) == 0)
    || (UnityEngine_GameObject__SetActive(svtBase, 0, 0), !userSvtIds) )
  {
    sub_21FFECC(svtBase, userSvtIds);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v10,
    userSvtIds,
    (const MethodInfo_4438C14 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v8 = 0;
  v9 = &v10;
  v6 = 1;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v10,
            (const MethodInfo_40C441C *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    ClassBoardFigureController__SetSvtFigure_55237784(this, (int64_t)v10.fields._current, v6 & 1, v7);
    v6 = 0;
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v10,
    (const MethodInfo_40C4418 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
}


void ClassBoardFigureController__SetSvtFigure_55237784(
        ClassBoardFigureController_o *this,
        int64_t userSvtId,
        bool isShow,
        const MethodInfo *method)
{
  int v7; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  SvtMultiPortraitMaster_o *v11; // x21
  int32_t v12; // w22
  int32_t v13; // w23
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x24
  System_Collections_Generic_List_object__o *v15; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  SvtMultiPortraitEntity_o *current; // x24
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UnityEngine_Component_o *v27; // x25
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  struct System_Int32_array *v31; // x8
  int max_length; // w9
  UnityEngine_Transform_o *transform; // x0
  __int64 v34; // x1
  StandFigureCollect_o *v35; // x26
  __int64 v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  UIStandFigureR_o *v54; // x22
  StandFigureCollect_o *v55; // x20
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v69; // x8
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593C468 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_StandFigureCollect___Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_21FFC50(&StandFigureCollect_TypeInfo);
    byte_593C468 = 1;
  }
  entity = 0;
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v71, 0, sizeof(v71));
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userSvtId);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_55;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          Master_object,
          &entity,
          userSvtId,
          (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
  if ( !entity )
    goto LABEL_55;
  v11 = (SvtMultiPortraitMaster_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__GetFigureImage(
                                                                  (UserServantEntity_o *)entity,
                                                                  1,
                                                                  -1,
                                                                  0);
  if ( !entity )
    goto LABEL_55;
  v12 = (int)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__GetServantId(
                                                                  (UserServantEntity_o *)entity,
                                                                  -1,
                                                                  0);
  if ( !v11 )
    goto LABEL_55;
  v13 = (int)Master_object;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(v11, (int32_t)Master_object, v12, 4, 0);
  v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  if ( !EntityListOrderBy
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)StandFigureManager__CreateRenderPrefab_47607168(
                                                                    this->fields.svtBase,
                                                                    v13,
                                                                    v12,
                                                                    9,
                                                                    0,
                                                                    1,
                                                                    0,
                                                                    0,
                                                                    -1,
                                                                    0,
                                                                    0);
    if ( Master_object )
    {
      v54 = (UIStandFigureR_o *)Master_object;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)Master_object,
                                                                      0);
      if ( Master_object )
      {
        v74.fields.x = this->fields.svtScale;
        v74.fields.y = v74.fields.x;
        v74.fields.z = v74.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Master_object, v74, 0);
        if ( !isShow )
          UIStandFigureR__SetAlpha(v54, 0.0, 0);
        v55 = (StandFigureCollect_o *)sub_21FFEBC(StandFigureCollect_TypeInfo);
        StandFigureCollect___ctor(v55, 0, v54, 0);
        if ( v15 )
        {
          items = v15->fields._items;
          v63 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
          ++v15->fields._version;
          if ( items )
          {
            size = v15->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                (Il2CppObject *)v55,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
            }
            else
            {
              v65 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v65[4] = (Il2CppClass *)v55;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v65 + 4), (int32_t)v55, v56, v57, v58, v59, v60, v61);
            }
            goto LABEL_49;
          }
        }
      }
    }
LABEL_55:
    sub_21FFECC(Master_object, v9);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)EntityListOrderBy,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v71 = v70;
  v70.fields._list = 0;
  *(_QWORD *)&v70.fields._index = &v71;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v16 )
      break;
    current = (SvtMultiPortraitEntity_o *)v71.fields._current;
    if ( !v71.fields._current )
      sub_21FFECC(v16, v17);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtBase,
                         (int32_t)v71.fields._current[2].klass,
                         9,
                         0,
                         HIDWORD(v71.fields._current[2].klass) + 1,
                         0,
                         0,
                         -1,
                         0,
                         0);
    v27 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_21FFECC(0, v20);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v27, 0);
      v31 = current->fields.commonPosition;
      if ( !v31 )
        sub_21FFECC(gameObject, v30);
      max_length = v31->max_length;
      if ( max_length == 1 )
        sub_21FFED4(gameObject);
      if ( !max_length )
        sub_21FFED4(gameObject);
      GameObjectExtensions__AddLocalPosition_42877056(gameObject, (float)v31->m_Items[0], (float)v31->m_Items[1], 0);
    }
    transform = UnityEngine_Component__get_transform(v27, 0);
    if ( !transform )
      sub_21FFECC(0, v34);
    v73.fields.x = this->fields.svtScale;
    v73.fields.y = v73.fields.x;
    v73.fields.z = v73.fields.x;
    UnityEngine_Transform__set_localScale(transform, v73, 0);
    if ( !isShow )
      UIStandFigureR__SetAlpha((UIStandFigureR_o *)v27, 0.0, 0);
    v35 = (StandFigureCollect_o *)sub_21FFEBC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v35, current, (UIStandFigureR_o *)v27, 0);
    if ( !v15
      || (v44 = v15->fields._items,
          v45 = Method_System_Collections_Generic_List_StandFigureCollect__Add__,
          ++v15->fields._version,
          !v44) )
    {
      sub_21FFECC(v36, v37);
    }
    v46 = v15->fields._size;
    if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        (Il2CppObject *)v35,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = &v44->obj.klass + v46;
      v15->fields._size = v46 + 1;
      v47[4] = (Il2CppClass *)v35;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v47 + 4), (int32_t)v35, v38, v39, v40, v41, v42, v43);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
LABEL_49:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.figureCollectList;
  if ( !Master_object )
    goto LABEL_55;
  v66 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  v67 = Method_System_Collections_Generic_List_List_StandFigureCollect___Add__;
  ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
  if ( !v66 )
    goto LABEL_55;
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v66 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)v15,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
  }
  else
  {
    v69 = v66 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v69 + 32) = v15;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v69 + 32), (int32_t)v15, v48, v49, v50, v51, v52, v53);
  }
}


void ClassBoardFigureController__SetUIPanelAlpha(
        ClassBoardFigureController_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct UIPanel_o *svtPanel; // x0

  svtPanel = this->fields.svtPanel;
  if ( !svtPanel )
    sub_21FFECC(0, method);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))svtPanel->klass->vtable._8_set_alpha.methodPtr)(
    svtPanel,
    svtPanel->klass->vtable._8_set_alpha.method,
    alpha);
}


void ClassBoardFigureController__Setup(
        ClassBoardFigureController_o *this,
        ClassBoardController_o *controller,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.classBoardController = controller;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardController,
    (int32_t)controller,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardFigureController__StartSwitchServantCoroutine(
        ClassBoardFigureController_o *this,
        const MethodInfo *method)
{
  ClassBoardFigureController_o *v2; // x19
  struct System_Collections_Generic_List_List_StandFigureCollect___o *figureCollectList; // x8
  System_Collections_IEnumerator_o *v4; // x1

  v2 = this;
  if ( (byte_593C46A & 1) == 0 )
  {
    this = (ClassBoardFigureController_o *)sub_21FFC50(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Count__);
    byte_593C46A = 1;
  }
  figureCollectList = v2->fields.figureCollectList;
  if ( !figureCollectList )
    sub_21FFECC(this, method);
  if ( figureCollectList->fields._size >= 2 )
  {
    v4 = ClassBoardFigureController__SwitchServantCoroutine(v2, method);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)v2, v4, 0);
  }
}


System_Collections_IEnumerator_o *ClassBoardFigureController__SwitchServantCoroutine(
        ClassBoardFigureController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593C46B & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardFigureController__SwitchServantCoroutine_d__25_TypeInfo);
    byte_593C46B = 1;
  }
  v3 = sub_21FFEBC(ClassBoardFigureController__SwitchServantCoroutine_d__25_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26___ctor(
        ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26__MoveNext(
        ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *v2; // x19
  int32_t _1__state; // w8
  struct ClassBoardFigureController_o *_4__this; // x21
  Il2CppObject *Item; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  float v12; // s0
  float currentTime_5__2; // s8
  float svtSwitchAnimationTime; // s1
  float v15; // s8
  _BOOL8 v16; // x0
  __int64 v17; // x1
  UIStandFigureR_o *v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  UIStandFigureR_o *v21; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+18h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_593C470 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    this = (ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *)sub_21FFC50(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
    byte_593C470 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  memset(&v30, 0, sizeof(v30));
  if ( _1__state == 1 )
  {
    currentTime_5__2 = v2->fields._currentTime_5__2;
    v2->fields.__1__state = -1;
    v12 = currentTime_5__2 + UnityEngine_Time__get_deltaTime(0);
    v2->fields._currentTime_5__2 = v12;
    if ( !_4__this )
      goto LABEL_29;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields._currentTime_5__2 = 0.0;
    v2->fields.__1__state = -1;
    if ( !_4__this
      || (this = (ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *)_4__this->fields.figureCollectList) == 0 )
    {
LABEL_29:
      sub_21FFECC(this, method);
    }
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             _4__this->fields.currentSvtIndex,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
    v2->fields._targets_5__3 = (struct System_Collections_Generic_List_StandFigureCollect__o *)Item;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields._targets_5__3, (int32_t)Item, v6, v7, v8, v9, v10, v11);
    v12 = v2->fields._currentTime_5__2;
  }
  svtSwitchAnimationTime = _4__this->fields.svtSwitchAnimationTime;
  if ( v12 >= svtSwitchAnimationTime )
  {
    this = (ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *)v2->fields._targets_5__3;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v30,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
      while ( 1 )
      {
        v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v30,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
        if ( !v19 )
          break;
        if ( !v30.fields._current )
          sub_21FFECC(v19, v20);
        v21 = *(UIStandFigureR_o **)((char *)&v30.fields._current->klass + (unsigned __int64)off_18);
        if ( !v21 )
          sub_21FFECC(0, v20);
        UIStandFigureR__SetAlpha(v21, v2->fields.endAlpha, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v30,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
      return 0;
    }
    goto LABEL_29;
  }
  this = (ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *)v2->fields._targets_5__3;
  if ( !this )
    goto LABEL_29;
  v15 = v2->fields.startAlpha
      + (float)((float)(v12 / svtSwitchAnimationTime) * (float)(v2->fields.endAlpha - v2->fields.startAlpha));
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v16 )
      break;
    if ( !v30.fields._current )
      sub_21FFECC(v16, v17);
    v18 = *(UIStandFigureR_o **)((char *)&v30.fields._current->klass + (unsigned __int64)off_18);
    if ( !v18 )
      sub_21FFECC(0, v17);
    UIStandFigureR__SetAlpha(v18, v15, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v2->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
  sub_21FFBF4(p__2__current, 0, v23, v24, v25, v26, v27, v28);
  result = 1;
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return result;
}


Il2CppObject *ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26__System_Collections_IEnumerator_Reset(
        ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26__System_Collections_IEnumerator_get_Current(
        ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26__System_IDisposable_Dispose(
        ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardFigureController__SwitchServantCoroutine_d__25___ctor(
        ClassBoardFigureController__SwitchServantCoroutine_d__25_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardFigureController__SwitchServantCoroutine_d__25__MoveNext(
        ClassBoardFigureController__SwitchServantCoroutine_d__25_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w9
  struct ClassBoardFigureController_o *_4__this; // x0
  bool v5; // w8
  Il2CppObject *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t v13; // w8
  float svtDisplayTime; // s8
  UnityEngine_WaitForSeconds_o *v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Collections_Generic_List_List_StandFigureCollect___o *figureCollectList; // x9
  int v23; // w8
  Il2CppObject *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_593C471 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Count__);
    sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_593C471 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v5 = 0;
  if ( _1__state > 1 )
  {
    if ( _1__state == 2 )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        figureCollectList = _4__this->fields.figureCollectList;
        v23 = _4__this->fields.currentSvtIndex + 1;
        _4__this->fields.currentSvtIndex = v23;
        if ( figureCollectList )
        {
          if ( v23 >= figureCollectList->fields._size )
            _4__this->fields.currentSvtIndex = 0;
          v24 = (Il2CppObject *)ClassBoardFigureController__PlaySwitchServantAnimationCoroutine(
                                  _4__this,
                                  0.0,
                                  1.0,
                                  method);
          this->fields.__2__current = v24;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
            (int32_t)v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          v13 = 3;
          goto LABEL_17;
        }
      }
      goto LABEL_19;
    }
    if ( _1__state != 3 )
      return v5;
LABEL_10:
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      svtDisplayTime = _4__this->fields.svtDisplayTime;
      v15 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v15, svtDisplayTime, 0);
      this->fields.__2__current = (Il2CppObject *)v15;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
        (int32_t)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      v13 = 1;
      goto LABEL_17;
    }
LABEL_19:
    sub_21FFECC(_4__this, method);
  }
  if ( !_1__state )
    goto LABEL_10;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      v6 = (Il2CppObject *)ClassBoardFigureController__PlaySwitchServantAnimationCoroutine(_4__this, 1.0, 0.0, method);
      this->fields.__2__current = v6;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
        (int32_t)v6,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = 2;
LABEL_17:
      this->fields.__1__state = v13;
      return 1;
    }
    goto LABEL_19;
  }
  return v5;
}


Il2CppObject *ClassBoardFigureController__SwitchServantCoroutine_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardFigureController__SwitchServantCoroutine_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardFigureController__SwitchServantCoroutine_d__25__System_Collections_IEnumerator_Reset(
        ClassBoardFigureController__SwitchServantCoroutine_d__25_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ClassBoardFigureController__SwitchServantCoroutine_d__25_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ClassBoardFigureController__SwitchServantCoroutine_d__25__System_Collections_IEnumerator_get_Current(
        ClassBoardFigureController__SwitchServantCoroutine_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardFigureController__SwitchServantCoroutine_d__25__System_IDisposable_Dispose(
        ClassBoardFigureController__SwitchServantCoroutine_d__25_o *this,
        const MethodInfo *method)
{
  ;
}