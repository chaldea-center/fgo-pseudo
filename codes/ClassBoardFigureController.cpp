void ClassBoardFigureController___ctor(ClassBoardFigureController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C3B3FB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_List_StandFigureCollect____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_List_StandFigureCollect___TypeInfo);
    sub_1C32C20(&StringLiteral_17533/*"btn_to_grand_servant_select"*/);
    sub_1C32C20(&StringLiteral_20487/*"img_plus"*/);
    sub_1C32C20(&StringLiteral_20591/*"img_text_base"*/);
    byte_4C3B3FB = 1;
  }
  this->fields.svtScale = 10.0;
  *(_QWORD *)&this->fields.svtDisplayTime = 4489188110499840000LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_List_StandFigureCollect___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_List_StandFigureCollect____ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_List_StandFigureCollect___o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.figureCollectList, (int32_t)v3, v4, v5);
  v6 = StringLiteral_17533/*"btn_to_grand_servant_select"*/;
  this->fields.selectServantSpriteName = (struct System_String_o *)StringLiteral_17533/*"btn_to_grand_servant_select"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selectServantSpriteName, v6, v7, v8);
  v9 = StringLiteral_20487/*"img_plus"*/;
  this->fields.selectServantPlusSpriteName = (struct System_String_o *)StringLiteral_20487/*"img_plus"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selectServantPlusSpriteName, v9, v10, v11);
  v12 = StringLiteral_20591/*"img_text_base"*/;
  this->fields.selectServantTxtBaseSpriteName = (struct System_String_o *)StringLiteral_20591/*"img_text_base"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selectServantTxtBaseSpriteName, v12, v13, v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardFigureController__Awake(ClassBoardFigureController_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardFigureController__ChangeDispServantFigure(
        ClassBoardFigureController_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *figureCollectList; // x0
  _BOOL8 v6; // x0
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v8; // x0
  UIStandFigureR_o *v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3B3F5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
    byte_4C3B3F5 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_24;
  if ( figureCollectList->fields._size <= index )
    return;
  figureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     figureCollectList,
                                                                     this->fields.currentSvtIndex,
                                                                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
  if ( !figureCollectList )
    goto LABEL_24;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    figureCollectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v11 = v10;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v6 )
      break;
    if ( !v11.fields._current )
      sub_1C32E7C(v6);
    monitor = (UIStandFigureR_o *)v11.fields._current[1].monitor;
    if ( !monitor )
      sub_1C32E7C(0);
    UIStandFigureR__SetAlpha(monitor, 0.0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
  if ( !figureCollectList
    || (figureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           figureCollectList,
                                                                           index,
                                                                           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__)) == 0 )
  {
LABEL_24:
    sub_1C32E7C(figureCollectList);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    figureCollectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v11 = v10;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1C32E7C(v8);
    v9 = (UIStandFigureR_o *)v11.fields._current[1].monitor;
    if ( !v9 )
      sub_1C32E7C(0);
    UIStandFigureR__SetAlpha(v9, 1.0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  this->fields.currentSvtIndex = index;
}


void ClassBoardFigureController__OnClickToGrandServantList(
        ClassBoardFigureController_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *classBoardController; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4C3B3FA & 1) == 0 )
  {
    sub_1C32C20(&Method_ClassBoardFigureController_OnClickToGrandServantList__);
    byte_4C3B3FA = 1;
  }
  classBoardController = this->fields.classBoardController;
  if ( !classBoardController )
    sub_1C32E7C(0);
  if ( ClassBoardController__IsTouchEnableUi(classBoardController, 0) )
  {
    v4 = Method_ClassBoardFigureController_OnClickToGrandServantList__;
    if ( (*((_BYTE *)Method_ClassBoardFigureController_OnClickToGrandServantList__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C32C38(Method_ClassBoardFigureController_OnClickToGrandServantList__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3B3F8 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_TypeInfo);
    byte_4C3B3F8 = 1;
  }
  v7 = sub_1C32E6C(ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(float *)(v7 + 40) = endAlpha;
  *(float *)(v7 + 44) = startAlpha;
  return (System_Collections_IEnumerator_o *)v7;
}


void ClassBoardFigureController__SetOnClickToGrandServantList(
        ClassBoardFigureController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onClickToGrandServantList = action;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClickToGrandServantList, (int32_t)action, (int32_t)method, v3);
}


void ClassBoardFigureController__SetServantSelectObj(
        ClassBoardFigureController_o *this,
        int32_t baseId,
        bool isDispMessage,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *svtBase; // x0
  System_String_o *ParentClassNameByBaseClassId; // x0
  UILabel_o *grandServantChoiceMessage; // x19
  Il2CppObject *v10; // x20
  System_String_o *v11; // x0

  if ( (byte_4C3B3F9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3373/*"CLASS_BOARD_CHOICE_GRAND_SERVANT_MSG"*/);
    byte_4C3B3F9 = 1;
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
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  svtBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !svtBase )
    goto LABEL_15;
  ParentClassNameByBaseClassId = ClassBoardBaseMaster__GetParentClassNameByBaseClassId(
                                   (ClassBoardBaseMaster_o *)svtBase,
                                   baseId,
                                   0);
  grandServantChoiceMessage = this->fields.grandServantChoiceMessage;
  v10 = (Il2CppObject *)ParentClassNameByBaseClassId;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3373/*"CLASS_BOARD_CHOICE_GRAND_SERVANT_MSG"*/, 0);
  svtBase = (UnityEngine_GameObject_o *)System_String__Format(v11, v10, 0);
  if ( !grandServantChoiceMessage )
LABEL_15:
    sub_1C32E7C(svtBase);
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
    sub_1C32E7C(this);
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
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C3B3F3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    byte_4C3B3F3 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  svtBase = this->fields.svtBase;
  if ( !svtBase
    || (svtBase = UnityEngine_GameObject__get_gameObject(svtBase, 0)) == 0
    || (UnityEngine_GameObject__SetActive(svtBase, 1, 0), (svtBase = this->fields.servantSelectParentObj) == 0)
    || (UnityEngine_GameObject__SetActive(svtBase, 0, 0), !userSvtIds) )
  {
    sub_1C32E7C(svtBase);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v8,
    userSvtIds,
    (const MethodInfo_37812C4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v6 = 1;
  v9 = v8;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v9,
            (const MethodInfo_3520468 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    ClassBoardFigureController__SetSvtFigure_47839172(this, (int64_t)v9.fields._current, v6 & 1, v7);
    v6 = 0;
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v9,
    (const MethodInfo_3520464 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
}


void ClassBoardFigureController__SetSvtFigure_47839172(
        ClassBoardFigureController_o *this,
        int64_t userSvtId,
        bool isShow,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *v8; // x23
  SvtMultiPortraitMaster_o *v9; // x22
  void *monitor; // x21
  Il2CppClass *klass; // x24
  int32_t v12; // w21
  int32_t v13; // w21
  int32_t v14; // w24
  int32_t FigureLimitCount; // w0
  int v16; // w23
  BalanceConfig_c *v17; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x23
  void *v19; // x24
  Il2CppClass *v20; // x25
  void *v21; // x23
  Il2CppClass *v22; // x24
  int32_t v23; // w0
  int32_t v24; // w23
  int32_t v25; // w24
  void *v26; // x23
  Il2CppClass *v27; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x24
  int32_t SvtId; // w23
  System_Collections_Generic_List_object__o *v30; // x22
  _BOOL8 v31; // x0
  SvtMultiPortraitEntity_o *current; // x24
  UIStandFigureR_o *PrefabForImageId; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_Component_o *v36; // x25
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *v39; // x8
  int max_length; // w9
  UnityEngine_Transform_o *transform; // x0
  StandFigureCollect_o *v42; // x26
  __int64 v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UIStandFigureR_o *v52; // x21
  StandFigureCollect_o *v53; // x20
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v63; // x8
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+30h] [xbp-90h] BYREF
  int32_t value[2]; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v67; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3B3F4 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_List_StandFigureCollect___Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&StandFigureCollect_TypeInfo);
    byte_4C3B3F4 = 1;
  }
  v67 = 0;
  entity = 0;
  *(_QWORD *)value = 0;
  memset(&v65, 0, sizeof(v65));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_84;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          Master_object,
          &entity,
          userSvtId,
          (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v8 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
  if ( !entity )
    goto LABEL_84;
  v9 = (SvtMultiPortraitMaster_o *)Master_object;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v69.fields.currentCryptoKey = klass;
  *(_QWORD *)&v69.fields.fakeValue = monitor;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                  v69,
                                                                  0);
  if ( !entity )
    goto LABEL_84;
  v12 = (int)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getFigureImageLimitCount(
                                                                  (UserServantEntity_o *)entity,
                                                                  0,
                                                                  0);
  if ( !v8 )
    goto LABEL_84;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                                  (ServantLimitImageMaster_o *)v8,
                                                                  v12,
                                                                  (int32_t)Master_object,
                                                                  0);
  if ( !entity )
    goto LABEL_84;
  v13 = (int)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[5],
                                                                  0);
  if ( !entity )
    goto LABEL_84;
  v14 = (int)Master_object;
  FigureLimitCount = UserServantEntity__getFigureLimitCount((UserServantEntity_o *)entity, 0, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                  (ServantLimitImageMaster_o *)v8,
                                                                  v14,
                                                                  FigureLimitCount,
                                                                  0);
  v16 = (int)Master_object;
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  if ( v16 == v17->static_fields->ServantLimitMax )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !entity )
      goto LABEL_84;
    v18 = Master_object;
    v20 = entity[5].klass;
    v19 = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v70.fields.currentCryptoKey = v20;
    *(_QWORD *)&v70.fields.fakeValue = v19;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                    v70,
                                                                    0);
    if ( !v18 )
      goto LABEL_84;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                    v18,
                                                                    &v67,
                                                                    (int32_t)Master_object,
                                                                    (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v67;
      if ( !v67 )
        goto LABEL_84;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsContainOverwriteGrandGraphImageLimitCount(
                                                                      (ServantEntity_o *)v67,
                                                                      &value[1],
                                                                      0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_84;
        v22 = entity[5].klass;
        v21 = entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v71.fields.currentCryptoKey = v22;
        *(_QWORD *)&v71.fields.fakeValue = v21;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v71, 0);
        v24 = value[1];
        v25 = v23;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ImageLimitCount__TryGetGrandImageLimitCount(
                                                                        v25,
                                                                        v24,
                                                                        value,
                                                                        0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          v13 = value[0];
      }
    }
  }
  if ( !entity )
    goto LABEL_84;
  v27 = entity[5].klass;
  v26 = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v72.fields.currentCryptoKey = v27;
  *(_QWORD *)&v72.fields.fakeValue = v26;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                  v72,
                                                                  0);
  if ( !v9 )
    goto LABEL_84;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                                                  v9,
                                                                  (int32_t)Master_object,
                                                                  v13,
                                                                  0,
                                                                  0);
  if ( !entity )
    goto LABEL_84;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
  SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0);
  v30 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  if ( !v28
    || !System_Linq_Enumerable__Any_object_(
          v28,
          (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)StandFigureManager__CreateRenderPrefab_40577020(
                                                                    this->fields.svtBase,
                                                                    SvtId,
                                                                    v13,
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
      v52 = (UIStandFigureR_o *)Master_object;
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
          UIStandFigureR__SetAlpha(v52, 0.0, 0);
        v53 = (StandFigureCollect_o *)sub_1C32E6C(StandFigureCollect_TypeInfo);
        StandFigureCollect___ctor(v53, 0, v52, 0);
        if ( v30 )
        {
          items = v30->fields._items;
          v57 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
          ++v30->fields._version;
          if ( items )
          {
            size = v30->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v30,
                (Il2CppObject *)v53,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v59 = &items->obj.klass + size;
              v30->fields._size = size + 1;
              v59[4] = (Il2CppClass *)v53;
              sub_1C32BC4((CGThumbnailListItem_o *)(v59 + 4), (int32_t)v53, v54, v55);
            }
            goto LABEL_78;
          }
        }
      }
    }
LABEL_84:
    sub_1C32E7C(Master_object);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v64,
    (System_Collections_Generic_List_object__o *)v28,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v65 = v64;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v65,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v31 )
      break;
    current = (SvtMultiPortraitEntity_o *)v65.fields._current;
    if ( !v65.fields._current )
      sub_1C32E7C(v31);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtBase,
                         (int32_t)v65.fields._current[2].klass,
                         9,
                         0,
                         HIDWORD(v65.fields._current[2].klass) + 1,
                         0,
                         0,
                         -1,
                         0,
                         0);
    v36 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C32E7C(0);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C32BC4((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v34, v35);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v36, 0);
      v39 = current->fields.commonPosition;
      if ( !v39 )
        sub_1C32E7C(gameObject);
      max_length = v39->max_length;
      if ( max_length == 1 )
        sub_1C32E84(gameObject);
      if ( !max_length )
        sub_1C32E84(gameObject);
      GameObjectExtensions__AddLocalPosition_36037696(gameObject, (float)v39->m_Items[0], (float)v39->m_Items[1], 0);
    }
    transform = UnityEngine_Component__get_transform(v36, 0);
    if ( !transform )
      sub_1C32E7C(0);
    v73.fields.x = this->fields.svtScale;
    v73.fields.y = v73.fields.x;
    v73.fields.z = v73.fields.x;
    UnityEngine_Transform__set_localScale(transform, v73, 0);
    if ( !isShow )
      UIStandFigureR__SetAlpha((UIStandFigureR_o *)v36, 0.0, 0);
    v42 = (StandFigureCollect_o *)sub_1C32E6C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v42, current, (UIStandFigureR_o *)v36, 0);
    if ( !v30 )
      sub_1C32E7C(v43);
    v46 = v30->fields._items;
    v47 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v30->fields._version;
    if ( !v46 )
      sub_1C32E7C(v43);
    v48 = v30->fields._size;
    if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v30,
        (Il2CppObject *)v42,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    }
    else
    {
      v49 = &v46->obj.klass + v48;
      v30->fields._size = v48 + 1;
      v49[4] = (Il2CppClass *)v42;
      sub_1C32BC4((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v42, v44, v45);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v65,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
LABEL_78:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.figureCollectList;
  if ( !Master_object )
    goto LABEL_84;
  v60 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  v61 = Method_System_Collections_Generic_List_List_StandFigureCollect___Add__;
  ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
  if ( !v60 )
    goto LABEL_84;
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v60 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)v30,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = v60 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v63 + 32) = v30;
    sub_1C32BC4((CGThumbnailListItem_o *)(v63 + 32), (int32_t)v30, v50, v51);
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
    sub_1C32E7C(0);
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
  const MethodInfo *v3; // x3

  this->fields.classBoardController = controller;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.classBoardController, (int32_t)controller, (int32_t)method, v3);
}


void ClassBoardFigureController__StartSwitchServantCoroutine(
        ClassBoardFigureController_o *this,
        const MethodInfo *method)
{
  ClassBoardFigureController_o *v2; // x19
  struct System_Collections_Generic_List_List_StandFigureCollect___o *figureCollectList; // x8
  System_Collections_IEnumerator_o *v4; // x1

  v2 = this;
  if ( (byte_4C3B3F6 & 1) == 0 )
  {
    this = (ClassBoardFigureController_o *)sub_1C32C20(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Count__);
    byte_4C3B3F6 = 1;
  }
  figureCollectList = v2->fields.figureCollectList;
  if ( !figureCollectList )
    sub_1C32E7C(this);
  if ( figureCollectList->fields._size >= 2 )
  {
    v4 = ClassBoardFigureController__SwitchServantCoroutine(v2, method);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)v2, v4, 0);
  }
}


System_Collections_IEnumerator_o *ClassBoardFigureController__SwitchServantCoroutine(
        ClassBoardFigureController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3B3F7 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardFigureController__SwitchServantCoroutine_d__25_TypeInfo);
    byte_4C3B3F7 = 1;
  }
  v3 = sub_1C32E6C(ClassBoardFigureController__SwitchServantCoroutine_d__25_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  float v8; // s0
  float currentTime_5__2; // s8
  float svtSwitchAnimationTime; // s1
  float v11; // s8
  _BOOL8 v12; // x0
  UIStandFigureR_o *v13; // x0
  _BOOL8 v14; // x0
  UIStandFigureR_o *monitor; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_4C3B3FC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    this = (ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *)sub_1C32C20(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
    byte_4C3B3FC = 1;
  }
  memset(&v21, 0, sizeof(v21));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    currentTime_5__2 = v2->fields._currentTime_5__2;
    v2->fields.__1__state = -1;
    v8 = currentTime_5__2 + UnityEngine_Time__get_deltaTime(0);
    v2->fields._currentTime_5__2 = v8;
    if ( !_4__this )
      goto LABEL_29;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v2->fields._currentTime_5__2 = 0.0;
    if ( !_4__this
      || (this = (ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *)_4__this->fields.figureCollectList) == 0 )
    {
LABEL_29:
      sub_1C32E7C(this);
    }
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             _4__this->fields.currentSvtIndex,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
    v2->fields._targets_5__3 = (struct System_Collections_Generic_List_StandFigureCollect__o *)Item;
    sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._targets_5__3, (int32_t)Item, v6, v7);
    v8 = v2->fields._currentTime_5__2;
  }
  svtSwitchAnimationTime = _4__this->fields.svtSwitchAnimationTime;
  if ( v8 >= svtSwitchAnimationTime )
  {
    this = (ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *)v2->fields._targets_5__3;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
      v21 = v20;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v21,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
        if ( !v14 )
          break;
        if ( !v21.fields._current )
          sub_1C32E7C(v14);
        monitor = (UIStandFigureR_o *)v21.fields._current[1].monitor;
        if ( !monitor )
          sub_1C32E7C(0);
        UIStandFigureR__SetAlpha(monitor, v2->fields.endAlpha, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v21,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
      return 0;
    }
    goto LABEL_29;
  }
  this = (ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *)v2->fields._targets_5__3;
  if ( !this )
    goto LABEL_29;
  v11 = v2->fields.startAlpha
      + (float)((float)(v8 / svtSwitchAnimationTime) * (float)(v2->fields.endAlpha - v2->fields.startAlpha));
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v12 )
      break;
    if ( !v21.fields._current )
      sub_1C32E7C(v12);
    v13 = (UIStandFigureR_o *)v21.fields._current[1].monitor;
    if ( !v13 )
      sub_1C32E7C(0);
    UIStandFigureR__SetAlpha(v13, v11, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v2->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C32BC4(p__2__current, 0, v17, v18);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  struct ClassBoardFigureController_o *_4__this; // x0
  float svtDisplayTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject **p__2__current; // x0
  int32_t v9; // w21
  bool result; // w0
  Il2CppObject *v11; // x0
  struct System_Collections_Generic_List_List_StandFigureCollect___o *figureCollectList; // x9
  int v13; // w8
  Il2CppObject *v14; // x0

  if ( (byte_4C3B3FD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Count__);
    sub_1C32C20(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C3B3FD = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_16;
      svtDisplayTime = _4__this->fields.svtDisplayTime;
      v5 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, svtDisplayTime, 0);
      this->fields.__2__current = (Il2CppObject *)v5;
      p__2__current = &this->fields.__2__current;
      v9 = 1;
      goto LABEL_14;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_16;
      v11 = (Il2CppObject *)ClassBoardFigureController__PlaySwitchServantAnimationCoroutine(_4__this, 1.0, 0.0, method);
      LODWORD(v5) = (_DWORD)v11;
      this->fields.__2__current = v11;
      p__2__current = &this->fields.__2__current;
      v9 = 2;
      goto LABEL_14;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this
        || (figureCollectList = _4__this->fields.figureCollectList,
            v13 = _4__this->fields.currentSvtIndex + 1,
            _4__this->fields.currentSvtIndex = v13,
            !figureCollectList) )
      {
LABEL_16:
        sub_1C32E7C(_4__this);
      }
      if ( v13 >= figureCollectList->fields._size )
        _4__this->fields.currentSvtIndex = 0;
      v14 = (Il2CppObject *)ClassBoardFigureController__PlaySwitchServantAnimationCoroutine(_4__this, 0.0, 1.0, method);
      LODWORD(v5) = (_DWORD)v14;
      this->fields.__2__current = v14;
      p__2__current = &this->fields.__2__current;
      v9 = 3;
LABEL_14:
      sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, (int32_t)v5, v6, v7);
      result = 1;
      this->fields.__1__state = v9;
      break;
    default:
      result = 0;
      break;
  }
  return result;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_ClassBoardFigureController__SwitchServantCoroutine_d__25_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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