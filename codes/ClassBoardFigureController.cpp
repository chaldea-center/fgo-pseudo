void ClassBoardFigureController___ctor(ClassBoardFigureController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CF224A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_List_StandFigureCollect____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_List_StandFigureCollect___TypeInfo);
    sub_1C7BAE8(&StringLiteral_17625/*"btn_to_grand_servant_select"*/);
    sub_1C7BAE8(&StringLiteral_20661/*"img_plus"*/);
    sub_1C7BAE8(&StringLiteral_20765/*"img_text_base"*/);
    byte_4CF224A = 1;
  }
  this->fields.svtScale = 10.0;
  *(_QWORD *)&this->fields.svtDisplayTime = 4489188110499840000LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_List_StandFigureCollect___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_List_StandFigureCollect____ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_List_StandFigureCollect___o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.figureCollectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = StringLiteral_17625/*"btn_to_grand_servant_select"*/;
  this->fields.selectServantSpriteName = (struct System_String_o *)StringLiteral_17625/*"btn_to_grand_servant_select"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.selectServantSpriteName, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_20661/*"img_plus"*/;
  this->fields.selectServantPlusSpriteName = (struct System_String_o *)StringLiteral_20661/*"img_plus"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectServantPlusSpriteName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_20765/*"img_text_base"*/;
  this->fields.selectServantTxtBaseSpriteName = (struct System_String_o *)StringLiteral_20765/*"img_text_base"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectServantTxtBaseSpriteName,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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

  if ( (byte_4CF2244 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
    byte_4CF2244 = 1;
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
                                                                     (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
  if ( !figureCollectList )
    goto LABEL_24;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    figureCollectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v6 )
      break;
    if ( !v13.fields._current )
      sub_1C7BD40(v6, v7);
    monitor = (UIStandFigureR_o *)v13.fields._current[1].monitor;
    if ( !monitor )
      sub_1C7BD40(0, v7);
    UIStandFigureR__SetAlpha(monitor, 0.0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
  if ( !figureCollectList
    || (figureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           figureCollectList,
                                                                           index,
                                                                           (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__)) == 0 )
  {
LABEL_24:
    sub_1C7BD40(figureCollectList, *(_QWORD *)&index);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    figureCollectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    if ( !v13.fields._current )
      sub_1C7BD40(v9, v10);
    v11 = (UIStandFigureR_o *)v13.fields._current[1].monitor;
    if ( !v11 )
      sub_1C7BD40(0, v10);
    UIStandFigureR__SetAlpha(v11, 1.0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  this->fields.currentSvtIndex = index;
}


void ClassBoardFigureController__OnClickToGrandServantList(
        ClassBoardFigureController_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *classBoardController; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4CF2249 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ClassBoardFigureController_OnClickToGrandServantList__);
    byte_4CF2249 = 1;
  }
  classBoardController = this->fields.classBoardController;
  if ( !classBoardController )
    sub_1C7BD40(0, method);
  if ( ClassBoardController__IsTouchEnableUi(classBoardController, 0) )
  {
    v4 = Method_ClassBoardFigureController_OnClickToGrandServantList__;
    if ( (*((_BYTE *)Method_ClassBoardFigureController_OnClickToGrandServantList__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C7BB00(Method_ClassBoardFigureController_OnClickToGrandServantList__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v4, v4[4]);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CF2247 & 1) == 0 )
  {
    sub_1C7BAE8(&ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_TypeInfo);
    byte_4CF2247 = 1;
  }
  v7 = sub_1C7BD34(ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(float *)(v7 + 40) = endAlpha;
  *(float *)(v7 + 44) = startAlpha;
  return (System_Collections_IEnumerator_o *)v7;
}


void ClassBoardFigureController__SetOnClickToGrandServantList(
        ClassBoardFigureController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.onClickToGrandServantList = action;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClickToGrandServantList,
    (int32_t)action,
    (int32_t)method,
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
  System_String_o *ParentClassNameByBaseClassId; // x0
  UILabel_o *grandServantChoiceMessage; // x19
  Il2CppObject *v10; // x20
  System_String_o *v11; // x0

  if ( (byte_4CF2248 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3377/*"CLASS_BOARD_CHOICE_GRAND_SERVANT_MSG"*/);
    byte_4CF2248 = 1;
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
  svtBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3377/*"CLASS_BOARD_CHOICE_GRAND_SERVANT_MSG"*/, 0);
  svtBase = (UnityEngine_GameObject_o *)System_String__Format(v11, v10, 0);
  if ( !grandServantChoiceMessage )
LABEL_15:
    sub_1C7BD40(svtBase, *(_QWORD *)&baseId);
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
    sub_1C7BD40(this, atlasManagerUnit);
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

  if ( (byte_4CF2242 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    byte_4CF2242 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  svtBase = this->fields.svtBase;
  if ( !svtBase
    || (svtBase = UnityEngine_GameObject__get_gameObject(svtBase, 0)) == 0
    || (UnityEngine_GameObject__SetActive(svtBase, 1, 0), (svtBase = this->fields.servantSelectParentObj) == 0)
    || (UnityEngine_GameObject__SetActive(svtBase, 0, 0), !userSvtIds) )
  {
    sub_1C7BD40(svtBase, userSvtIds);
  }
  System_Collections_Generic_List_long___GetEnumerator(
    &v8,
    userSvtIds,
    (const MethodInfo_3827904 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v6 = 1;
  v9 = v8;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v9,
            (const MethodInfo_35BB458 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    ClassBoardFigureController__SetSvtFigure_48672412(this, (int64_t)v9.fields._current, v6 & 1, v7);
    v6 = 0;
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v9,
    (const MethodInfo_35BB454 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
}


void ClassBoardFigureController__SetSvtFigure_48672412(
        ClassBoardFigureController_o *this,
        int64_t userSvtId,
        bool isShow,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  SvtMultiPortraitMaster_o *v9; // x21
  int32_t v10; // w22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x24
  int32_t SvtId; // w23
  System_Collections_Generic_List_object__o *v15; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  SvtMultiPortraitEntity_o *current; // x24
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
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
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  UIStandFigureR_o *v54; // x22
  StandFigureCollect_o *v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF2243 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_List_StandFigureCollect___Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&StandFigureCollect_TypeInfo);
    byte_4CF2243 = 1;
  }
  entity = 0;
  memset(&v71, 0, sizeof(v71));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_59;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          Master_object,
          &entity,
          userSvtId,
          (const MethodInfo_34308A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
  if ( !entity )
    goto LABEL_59;
  v9 = (SvtMultiPortraitMaster_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__GetFigureImage(
                                                                  (UserServantEntity_o *)entity,
                                                                  1,
                                                                  0);
  if ( !entity )
    goto LABEL_59;
  v10 = (int)Master_object;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v73.fields.currentCryptoKey = klass;
  *(_QWORD *)&v73.fields.fakeValue = monitor;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                  v73,
                                                                  0);
  if ( !v9 )
    goto LABEL_59;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                                                  v9,
                                                                  (int32_t)Master_object,
                                                                  v10,
                                                                  0,
                                                                  0);
  if ( !entity )
    goto LABEL_59;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
  SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  if ( !v13
    || !System_Linq_Enumerable__Any_object_(
          v13,
          (const MethodInfo_317C204 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)StandFigureManager__CreateRenderPrefab_41240676(
                                                                    this->fields.svtBase,
                                                                    SvtId,
                                                                    v10,
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
        v75.fields.x = this->fields.svtScale;
        v75.fields.y = v75.fields.x;
        v75.fields.z = v75.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Master_object, v75, 0);
        if ( !isShow )
          UIStandFigureR__SetAlpha(v54, 0.0, 0);
        v55 = (StandFigureCollect_o *)sub_1C7BD34(StandFigureCollect_TypeInfo);
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
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
            }
            else
            {
              v65 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v65[4] = (Il2CppClass *)v55;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v65 + 4), (int32_t)v55, v56, v57, v58, v59, v60, v61);
            }
            goto LABEL_53;
          }
        }
      }
    }
LABEL_59:
    sub_1C7BD40(Master_object, v8);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)v13,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v71 = v70;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v16 )
      break;
    current = (SvtMultiPortraitEntity_o *)v71.fields._current;
    if ( !v71.fields._current )
      sub_1C7BD40(v16, v17);
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
      sub_1C7BD40(0, v20);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
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
        sub_1C7BD40(gameObject, v30);
      max_length = v31->max_length;
      if ( max_length == 1 )
        sub_1C7BD48(gameObject);
      if ( !max_length )
        sub_1C7BD48(gameObject);
      GameObjectExtensions__AddLocalPosition_36524260(gameObject, (float)v31->m_Items[0], (float)v31->m_Items[1], 0);
    }
    transform = UnityEngine_Component__get_transform(v27, 0);
    if ( !transform )
      sub_1C7BD40(0, v34);
    v74.fields.x = this->fields.svtScale;
    v74.fields.y = v74.fields.x;
    v74.fields.z = v74.fields.x;
    UnityEngine_Transform__set_localScale(transform, v74, 0);
    if ( !isShow )
      UIStandFigureR__SetAlpha((UIStandFigureR_o *)v27, 0.0, 0);
    v35 = (StandFigureCollect_o *)sub_1C7BD34(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v35, current, (UIStandFigureR_o *)v27, 0);
    if ( !v15 )
      sub_1C7BD40(v36, v37);
    v44 = v15->fields._items;
    v45 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v15->fields._version;
    if ( !v44 )
      sub_1C7BD40(v36, v37);
    v46 = v15->fields._size;
    if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        (Il2CppObject *)v35,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = &v44->obj.klass + v46;
      v15->fields._size = v46 + 1;
      v47[4] = (Il2CppClass *)v35;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v47 + 4), (int32_t)v35, v38, v39, v40, v41, v42, v43);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
LABEL_53:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.figureCollectList;
  if ( !Master_object )
    goto LABEL_59;
  v66 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  v67 = Method_System_Collections_Generic_List_List_StandFigureCollect___Add__;
  ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
  if ( !v66 )
    goto LABEL_59;
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v66 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)v15,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
  }
  else
  {
    v69 = v66 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v69 + 32) = v15;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v69 + 32), (int32_t)v15, v48, v49, v50, v51, v52, v53);
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
    sub_1C7BD40(0, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.classBoardController = controller;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.classBoardController,
    (int32_t)controller,
    (int32_t)method,
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
  if ( (byte_4CF2245 & 1) == 0 )
  {
    this = (ClassBoardFigureController_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Count__);
    byte_4CF2245 = 1;
  }
  figureCollectList = v2->fields.figureCollectList;
  if ( !figureCollectList )
    sub_1C7BD40(this, method);
  if ( figureCollectList->fields._size >= 2 )
  {
    v4 = ClassBoardFigureController__SwitchServantCoroutine(v2, method);
    UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)v2, v4, 0);
  }
}


System_Collections_IEnumerator_o *ClassBoardFigureController__SwitchServantCoroutine(
        ClassBoardFigureController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF2246 & 1) == 0 )
  {
    sub_1C7BAE8(&ClassBoardFigureController__SwitchServantCoroutine_d__25_TypeInfo);
    byte_4CF2246 = 1;
  }
  v3 = sub_1C7BD34(ClassBoardFigureController__SwitchServantCoroutine_d__25_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  float v12; // s0
  float currentTime_5__2; // s8
  float svtSwitchAnimationTime; // s1
  float v15; // s8
  _BOOL8 v16; // x0
  __int64 v17; // x1
  UIStandFigureR_o *v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  UIStandFigureR_o *monitor; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_4CF224B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    this = (ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
    byte_4CF224B = 1;
  }
  memset(&v31, 0, sizeof(v31));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
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
    v2->fields.__1__state = -1;
    v2->fields._currentTime_5__2 = 0.0;
    if ( !_4__this
      || (this = (ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_o *)_4__this->fields.figureCollectList) == 0 )
    {
LABEL_29:
      sub_1C7BD40(this, method);
    }
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             _4__this->fields.currentSvtIndex,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_List_StandFigureCollect___get_Item__);
    v2->fields._targets_5__3 = (struct System_Collections_Generic_List_StandFigureCollect__o *)Item;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._targets_5__3, (int32_t)Item, v6, v7, v8, v9, v10, v11);
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
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
      v31 = v30;
      while ( 1 )
      {
        v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
        if ( !v19 )
          break;
        if ( !v31.fields._current )
          sub_1C7BD40(v19, v20);
        monitor = (UIStandFigureR_o *)v31.fields._current[1].monitor;
        if ( !monitor )
          sub_1C7BD40(0, v20);
        UIStandFigureR__SetAlpha(monitor, v2->fields.endAlpha, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v31,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v16 )
      break;
    if ( !v31.fields._current )
      sub_1C7BD40(v16, v17);
    v18 = (UIStandFigureR_o *)v31.fields._current[1].monitor;
    if ( !v18 )
      sub_1C7BD40(0, v17);
    UIStandFigureR__SetAlpha(v18, v15, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v2->fields.__2__current = 0;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C7BA8C(p__2__current, 0, v23, v24, v25, v26, v27, v28);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_ClassBoardFigureController__PlaySwitchServantAnimationCoroutine_d__26_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject **p__2__current; // x0
  int32_t v13; // w21
  bool result; // w0
  Il2CppObject *v15; // x0
  struct System_Collections_Generic_List_List_StandFigureCollect___o *figureCollectList; // x9
  int v17; // w8
  Il2CppObject *v18; // x0

  if ( (byte_4CF224C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_List_StandFigureCollect___get_Count__);
    sub_1C7BAE8(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CF224C = 1;
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
      v5 = (UnityEngine_WaitForSeconds_o *)sub_1C7BD34(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, svtDisplayTime, 0);
      this->fields.__2__current = (Il2CppObject *)v5;
      p__2__current = &this->fields.__2__current;
      v13 = 1;
      goto LABEL_14;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_16;
      v15 = (Il2CppObject *)ClassBoardFigureController__PlaySwitchServantAnimationCoroutine(_4__this, 1.0, 0.0, method);
      LODWORD(v5) = (_DWORD)v15;
      this->fields.__2__current = v15;
      p__2__current = &this->fields.__2__current;
      v13 = 2;
      goto LABEL_14;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this
        || (figureCollectList = _4__this->fields.figureCollectList,
            v17 = _4__this->fields.currentSvtIndex + 1,
            _4__this->fields.currentSvtIndex = v17,
            !figureCollectList) )
      {
LABEL_16:
        sub_1C7BD40(_4__this, method);
      }
      if ( v17 >= figureCollectList->fields._size )
        _4__this->fields.currentSvtIndex = 0;
      v18 = (Il2CppObject *)ClassBoardFigureController__PlaySwitchServantAnimationCoroutine(_4__this, 0.0, 1.0, method);
      LODWORD(v5) = (_DWORD)v18;
      this->fields.__2__current = v18;
      p__2__current = &this->fields.__2__current;
      v13 = 3;
LABEL_14:
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v5, v6, v7, v8, v9, v10, v11);
      result = 1;
      this->fields.__1__state = v13;
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_ClassBoardFigureController__SwitchServantCoroutine_d__25_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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