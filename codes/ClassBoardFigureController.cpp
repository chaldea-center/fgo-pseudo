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

  if ( (byte_4C2ACDC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_List_StandFigureCollect____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_List_StandFigureCollect___TypeInfo);
    sub_1C2D490(&StringLiteral_17529/*"btn_to_grand_servant_select"*/);
    sub_1C2D490(&StringLiteral_20475/*"img_plus"*/);
    sub_1C2D490(&StringLiteral_20579/*"img_text_base"*/);
    byte_4C2ACDC = 1;
  }
  this->fields.svtScale = 10.0;
  *(_QWORD *)&this->fields.svtDisplayTime = 4489188110499840000LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_List_StandFigureCollect___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_List_StandFigureCollect____ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_List_StandFigureCollect___o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.figureCollectList, (int32_t)v3, v4, v5);
  v6 = StringLiteral_17529/*"btn_to_grand_servant_select"*/;
  this->fields.selectServantSpriteName = (struct System_String_o *)StringLiteral_17529/*"btn_to_grand_servant_select"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectServantSpriteName, v6, v7, v8);
  v9 = StringLiteral_20475/*"img_plus"*/;
  this->fields.selectServantPlusSpriteName = (struct System_String_o *)StringLiteral_20475/*"img_plus"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectServantPlusSpriteName, v9, v10, v11);
  v12 = StringLiteral_20579/*"img_text_base"*/;
  this->fields.selectServantTxtBaseSpriteName = (struct System_String_o *)StringLiteral_20579/*"img_text_base"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectServantTxtBaseSpriteName, v12, v13, v14);
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

  if ( (byte_4C2ACD6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
    byte_4C2ACD6 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
  if ( !figureCollectList )
    goto LABEL_24;
  if ( figureCollectList->fields._size <= index )
    return;
  figureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     figureCollectList,
                                                                     this->fields.currentSvtIndex,
                                                                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
  if ( !figureCollectList )
    goto LABEL_24;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    figureCollectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v6 )
      break;
    if ( !v13.fields._current )
      sub_1C2D6EC(v6, v7);
    monitor = (UIStandFigureR_o *)v13.fields._current[1].monitor;
    if ( !monitor )
      sub_1C2D6EC(0, v7);
    UIStandFigureR__SetAlpha(monitor, 0.0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
  if ( !figureCollectList
    || (figureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           figureCollectList,
                                                                           index,
                                                                           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__)) == 0 )
  {
LABEL_24:
    sub_1C2D6EC(figureCollectList, *(_QWORD *)&index);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    figureCollectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    if ( !v13.fields._current )
      sub_1C2D6EC(v9, v10);
    v11 = (UIStandFigureR_o *)v13.fields._current[1].monitor;
    if ( !v11 )
      sub_1C2D6EC(0, v10);
    UIStandFigureR__SetAlpha(v11, 1.0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  this->fields.currentSvtIndex = index;
}


void ClassBoardFigureController__OnClickToGrandServantList(
        ClassBoardFigureController_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *classBoardController; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4C2ACDB & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardFigureController_OnClickToGrandServantList__);
    byte_4C2ACDB = 1;
  }
  classBoardController = this->fields.classBoardController;
  if ( !classBoardController )
    sub_1C2D6EC(0, method);
  if ( ClassBoardController__IsTouchEnableUi(classBoardController, 0) )
  {
    v4 = Method_ClassBoardFigureController_OnClickToGrandServantList__;
    if ( (*((_BYTE *)Method_ClassBoardFigureController_OnClickToGrandServantList__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8(Method_ClassBoardFigureController_OnClickToGrandServantList__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
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

  if ( (byte_4C2ACD9 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_TypeInfo);
    byte_4C2ACD9 = 1;
  }
  v7 = sub_1C2D6DC(ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClickToGrandServantList, (int32_t)action, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C2ACDA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3370/*"CLASS_BOARD_CHOICE_GRAND_SERVANT_MSG"*/);
    byte_4C2ACDA = 1;
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
  svtBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3370/*"CLASS_BOARD_CHOICE_GRAND_SERVANT_MSG"*/, 0);
  svtBase = (UnityEngine_GameObject_o *)System_String__Format(v11, v10, 0);
  if ( !grandServantChoiceMessage )
LABEL_15:
    sub_1C2D6EC(svtBase, *(_QWORD *)&baseId);
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
    sub_1C2D6EC(this, atlasManagerUnit);
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

  if ( (byte_4C2ACD4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    byte_4C2ACD4 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  svtBase = this->fields.svtBase;
  if ( !svtBase
    || (svtBase = UnityEngine_GameObject__get_gameObject(svtBase, 0)) == 0
    || (UnityEngine_GameObject__SetActive(svtBase, 1, 0), (svtBase = this->fields.servantSelectParentObj) == 0)
    || (UnityEngine_GameObject__SetActive(svtBase, 0, 0), !userSvtIds) )
  {
    sub_1C2D6EC(svtBase, userSvtIds);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v8,
    userSvtIds,
    (const MethodInfo_377268C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v6 = 1;
  v9 = v8;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v9,
            (const MethodInfo_35119C8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    ClassBoardFigureController__SetSvtFigure_47688300(this, (int64_t)v9.fields._current, v6 & 1, v7);
    v6 = 0;
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v9,
    (const MethodInfo_35119C4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
}


void ClassBoardFigureController__SetSvtFigure_47688300(
        ClassBoardFigureController_o *this,
        int64_t userSvtId,
        bool isShow,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x23
  SvtMultiPortraitMaster_o *v10; // x22
  void *monitor; // x21
  Il2CppClass *klass; // x24
  int32_t v13; // w21
  int32_t v14; // w21
  int32_t v15; // w24
  int32_t FigureLimitCount; // w0
  int v17; // w23
  BalanceConfig_c *v18; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x23
  void *v20; // x24
  Il2CppClass *v21; // x25
  void *v22; // x23
  Il2CppClass *v23; // x24
  int32_t v24; // w0
  int32_t v25; // w23
  int32_t v26; // w24
  void *v27; // x23
  Il2CppClass *v28; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x24
  int32_t SvtId; // w23
  System_Collections_Generic_List_object__o *v31; // x22
  _BOOL8 v32; // x0
  __int64 v33; // x1
  SvtMultiPortraitEntity_o *current; // x24
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  UnityEngine_Component_o *v39; // x25
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  struct System_Int32_array *v44; // x8
  int max_length; // w9
  UnityEngine_Transform_o *transform; // x0
  __int64 v47; // x1
  StandFigureCollect_o *v48; // x26
  __int64 v49; // x0
  __int64 v50; // x1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  UIStandFigureR_o *v59; // x21
  StandFigureCollect_o *v60; // x20
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v70; // x8
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+30h] [xbp-90h] BYREF
  int32_t value[2]; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v74; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2ACD5 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_List_StandFigureCollect___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StandFigureCollect_TypeInfo);
    byte_4C2ACD5 = 1;
  }
  v74 = 0;
  entity = 0;
  *(_QWORD *)value = 0;
  memset(&v72, 0, sizeof(v72));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_84;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          Master_object,
          &entity,
          userSvtId,
          (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
  if ( !entity )
    goto LABEL_84;
  v10 = (SvtMultiPortraitMaster_o *)Master_object;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v76.fields.currentCryptoKey = klass;
  *(_QWORD *)&v76.fields.fakeValue = monitor;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                  v76,
                                                                  0);
  if ( !entity )
    goto LABEL_84;
  v13 = (int)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getFigureImageLimitCount(
                                                                  (UserServantEntity_o *)entity,
                                                                  0,
                                                                  0);
  if ( !v9 )
    goto LABEL_84;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                                  (ServantLimitImageMaster_o *)v9,
                                                                  v13,
                                                                  (int32_t)Master_object,
                                                                  0);
  if ( !entity )
    goto LABEL_84;
  v14 = (int)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[5],
                                                                  0);
  if ( !entity )
    goto LABEL_84;
  v15 = (int)Master_object;
  FigureLimitCount = UserServantEntity__getFigureLimitCount((UserServantEntity_o *)entity, 0, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                  (ServantLimitImageMaster_o *)v9,
                                                                  v15,
                                                                  FigureLimitCount,
                                                                  0);
  v17 = (int)Master_object;
  v18 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  if ( v17 == v18->static_fields->ServantLimitMax )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !entity )
      goto LABEL_84;
    v19 = Master_object;
    v21 = entity[5].klass;
    v20 = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v77.fields.currentCryptoKey = v21;
    *(_QWORD *)&v77.fields.fakeValue = v20;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                    v77,
                                                                    0);
    if ( !v19 )
      goto LABEL_84;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                    v19,
                                                                    &v74,
                                                                    (int32_t)Master_object,
                                                                    (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v74;
      if ( !v74 )
        goto LABEL_84;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__IsContainOverwriteGrandGraphImageLimitCount(
                                                                      (ServantEntity_o *)v74,
                                                                      &value[1],
                                                                      0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_84;
        v23 = entity[5].klass;
        v22 = entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v78.fields.currentCryptoKey = v23;
        *(_QWORD *)&v78.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v78, 0);
        v25 = value[1];
        v26 = v24;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ImageLimitCount__TryGetGrandImageLimitCount(
                                                                        v26,
                                                                        v25,
                                                                        value,
                                                                        0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          v14 = value[0];
      }
    }
  }
  if ( !entity )
    goto LABEL_84;
  v28 = entity[5].klass;
  v27 = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v79.fields.currentCryptoKey = v28;
  *(_QWORD *)&v79.fields.fakeValue = v27;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                  v79,
                                                                  0);
  if ( !v10 )
    goto LABEL_84;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                                                  v10,
                                                                  (int32_t)Master_object,
                                                                  v14,
                                                                  0,
                                                                  0);
  if ( !entity )
    goto LABEL_84;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
  SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  if ( !v29
    || !System_Linq_Enumerable__Any_object_(
          v29,
          (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)StandFigureManager__CreateRenderPrefab_40454792(
                                                                    this->fields.svtBase,
                                                                    SvtId,
                                                                    v14,
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
      v59 = (UIStandFigureR_o *)Master_object;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)Master_object,
                                                                      0);
      if ( Master_object )
      {
        v81.fields.x = this->fields.svtScale;
        v81.fields.y = v81.fields.x;
        v81.fields.z = v81.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Master_object, v81, 0);
        if ( !isShow )
          UIStandFigureR__SetAlpha(v59, 0.0, 0);
        v60 = (StandFigureCollect_o *)sub_1C2D6DC(StandFigureCollect_TypeInfo);
        StandFigureCollect___ctor(v60, 0, v59, 0);
        if ( v31 )
        {
          items = v31->fields._items;
          v64 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
          ++v31->fields._version;
          if ( items )
          {
            size = v31->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v31,
                (Il2CppObject *)v60,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
            }
            else
            {
              v66 = &items->obj.klass + size;
              v31->fields._size = size + 1;
              v66[4] = (Il2CppClass *)v60;
              sub_1C2D434((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v60, v61, v62);
            }
            goto LABEL_78;
          }
        }
      }
    }
LABEL_84:
    sub_1C2D6EC(Master_object, v8);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)v29,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v72 = v71;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v32 )
      break;
    current = (SvtMultiPortraitEntity_o *)v72.fields._current;
    if ( !v72.fields._current )
      sub_1C2D6EC(v32, v33);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtBase,
                         (int32_t)v72.fields._current[2].klass,
                         9,
                         0,
                         HIDWORD(v72.fields._current[2].klass) + 1,
                         0,
                         0,
                         -1,
                         0,
                         0);
    v39 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C2D6EC(0, v36);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C2D434((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v37, v38);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v39, 0);
      v44 = current->fields.commonPosition;
      if ( !v44 )
        sub_1C2D6EC(gameObject, v42);
      max_length = v44->max_length;
      if ( max_length == 1 )
        sub_1C2D6F4(gameObject, v42, v43);
      if ( !max_length )
        sub_1C2D6F4(gameObject, v42, v43);
      GameObjectExtensions__AddLocalPosition_35919432(gameObject, (float)v44->m_Items[0], (float)v44->m_Items[1], 0);
    }
    transform = UnityEngine_Component__get_transform(v39, 0);
    if ( !transform )
      sub_1C2D6EC(0, v47);
    v80.fields.x = this->fields.svtScale;
    v80.fields.y = v80.fields.x;
    v80.fields.z = v80.fields.x;
    UnityEngine_Transform__set_localScale(transform, v80, 0);
    if ( !isShow )
      UIStandFigureR__SetAlpha((UIStandFigureR_o *)v39, 0.0, 0);
    v48 = (StandFigureCollect_o *)sub_1C2D6DC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v48, current, (UIStandFigureR_o *)v39, 0);
    if ( !v31 )
      sub_1C2D6EC(v49, v50);
    v53 = v31->fields._items;
    v54 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v31->fields._version;
    if ( !v53 )
      sub_1C2D6EC(v49, v50);
    v55 = v31->fields._size;
    if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        (Il2CppObject *)v48,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v56 = &v53->obj.klass + v55;
      v31->fields._size = v55 + 1;
      v56[4] = (Il2CppClass *)v48;
      sub_1C2D434((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v48, v51, v52);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
LABEL_78:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.figureCollectList;
  if ( !Master_object )
    goto LABEL_84;
  v67 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  v68 = Method_System_Collections_Generic_List_List_StandFigureCollect___Add__;
  ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
  if ( !v67 )
    goto LABEL_84;
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v67 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)v31,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
  }
  else
  {
    v70 = v67 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v70 + 32) = v31;
    sub_1C2D434((CGThumbnailListItem_o *)(v70 + 32), (int32_t)v31, v57, v58);
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
    sub_1C2D6EC(0, method);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.classBoardController, (int32_t)controller, (int32_t)method, v3);
}


void ClassBoardFigureController__StartSwitchServantCoroutine(
        ClassBoardFigureController_o *this,
        const MethodInfo *method)
{
  ClassBoardFigureController_o *v2; // x19
  struct System_Collections_Generic_List_List_StandFigureCollect___o *figureCollectList; // x8
  System_Collections_IEnumerator_o *v4; // x1

  v2 = this;
  if ( (byte_4C2ACD7 & 1) == 0 )
  {
    this = (ClassBoardFigureController_o *)sub_1C2D490(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Count__);
    byte_4C2ACD7 = 1;
  }
  figureCollectList = v2->fields.figureCollectList;
  if ( !figureCollectList )
    sub_1C2D6EC(this, method);
  if ( figureCollectList->fields._size >= 2 )
  {
    v4 = ClassBoardFigureController__SwitchServantCoroutine(v2, method);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)v2, v4, 0);
  }
}


System_Collections_IEnumerator_o *ClassBoardFigureController__SwitchServantCoroutine(
        ClassBoardFigureController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2ACD8 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardFigureController__SwitchServantCoroutine_d__25_TypeInfo);
    byte_4C2ACD8 = 1;
  }
  v3 = sub_1C2D6DC(ClassBoardFigureController__SwitchServantCoroutine_d__25_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  __int64 v13; // x1
  UIStandFigureR_o *v14; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  UIStandFigureR_o *monitor; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_4C2ACDD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    this = (ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *)sub_1C2D490(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
    byte_4C2ACDD = 1;
  }
  memset(&v23, 0, sizeof(v23));
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
      sub_1C2D6EC(this, method);
    }
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             _4__this->fields.currentSvtIndex,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
    v2->fields._targets_5__3 = (struct System_Collections_Generic_List_StandFigureCollect__o *)Item;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields._targets_5__3, (int32_t)Item, v6, v7);
    v8 = v2->fields._currentTime_5__2;
  }
  svtSwitchAnimationTime = _4__this->fields.svtSwitchAnimationTime;
  if ( v8 >= svtSwitchAnimationTime )
  {
    this = (ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *)v2->fields._targets_5__3;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
      v23 = v22;
      while ( 1 )
      {
        v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v23,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
        if ( !v15 )
          break;
        if ( !v23.fields._current )
          sub_1C2D6EC(v15, v16);
        monitor = (UIStandFigureR_o *)v23.fields._current[1].monitor;
        if ( !monitor )
          sub_1C2D6EC(0, v16);
        UIStandFigureR__SetAlpha(monitor, v2->fields.endAlpha, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v23,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v12 )
      break;
    if ( !v23.fields._current )
      sub_1C2D6EC(v12, v13);
    v14 = (UIStandFigureR_o *)v23.fields._current[1].monitor;
    if ( !v14 )
      sub_1C2D6EC(0, v13);
    UIStandFigureR__SetAlpha(v14, v11, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v2->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C2D434(p__2__current, 0, v19, v20);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C2ACDE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Count__);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C2ACDE = 1;
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
      v5 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
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
        sub_1C2D6EC(_4__this, method);
      }
      if ( v13 >= figureCollectList->fields._size )
        _4__this->fields.currentSvtIndex = 0;
      v14 = (Il2CppObject *)ClassBoardFigureController__PlaySwitchServantAnimationCoroutine(_4__this, 0.0, 1.0, method);
      LODWORD(v5) = (_DWORD)v14;
      this->fields.__2__current = v14;
      p__2__current = &this->fields.__2__current;
      v9 = 3;
LABEL_14:
      sub_1C2D434((CGThumbnailListItem_o *)p__2__current, (int32_t)v5, v6, v7);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ClassBoardFigureController__SwitchServantCoroutine_d__25_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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