void __fastcall ClassBoardFigureController___ctor(ClassBoardFigureController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4B1FDE0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_17390/*"btn_to_grand_servant_select"*/, v4);
    sub_1BCAFF8(&StringLiteral_20304/*"img_plus"*/, v5);
    sub_1BCAFF8(&StringLiteral_20408/*"img_text_base"*/, v6);
    byte_4B1FDE0 = 1;
  }
  this->fields.svtScale = 10.0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.figureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.figureCollectList, (int32_t)v7, v8, v9);
  v10 = StringLiteral_17390/*"btn_to_grand_servant_select"*/;
  this->fields.selectServantSpriteName = (struct System_String_o *)StringLiteral_17390/*"btn_to_grand_servant_select"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectServantSpriteName, v10, v11, v12);
  v13 = StringLiteral_20304/*"img_plus"*/;
  this->fields.selectServantPlusSpriteName = (struct System_String_o *)StringLiteral_20304/*"img_plus"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectServantPlusSpriteName, v13, v14, v15);
  v16 = StringLiteral_20408/*"img_text_base"*/;
  this->fields.selectServantTxtBaseSpriteName = (struct System_String_o *)StringLiteral_20408/*"img_text_base"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectServantTxtBaseSpriteName, v16, v17, v18);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardFigureController__Awake(ClassBoardFigureController_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardFigureController__OnClickToGrandServantList(
        ClassBoardFigureController_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *classBoardController; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B1FDDF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ClassBoardFigureController_OnClickToGrandServantList__, method);
    byte_4B1FDDF = 1;
  }
  classBoardController = this->fields.classBoardController;
  if ( !classBoardController )
    sub_1BCB254(0LL, method);
  if ( ClassBoardController__IsTouchEnableUi(classBoardController, method) )
  {
    v4 = Method_ClassBoardFigureController_OnClickToGrandServantList__;
    if ( (*((_BYTE *)Method_ClassBoardFigureController_OnClickToGrandServantList__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCB010(Method_ClassBoardFigureController_OnClickToGrandServantList__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    ActionExtensions__Call(this->fields.onClickToGrandServantList, 0LL);
  }
}


void __fastcall ClassBoardFigureController__SetOnClickToGrandServantList(
        ClassBoardFigureController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onClickToGrandServantList = action;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.onClickToGrandServantList, (int32_t)action, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardFigureController__SetServantSelectObj(
        ClassBoardFigureController_o *this,
        int32_t baseId,
        bool isDispMessage,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *svtBase; // x0
  GrandGraphEntity_o *EntityByClassBoardBaseId; // x0
  GrandGraphEntity_o *v12; // x20
  UILabel_o *grandServantChoiceMessage; // x19
  System_String_o *v14; // x0

  if ( (byte_4B1FDDE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_GrandGraphMaster___, *(_QWORD *)&baseId);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_3344/*"CLASS_BOARD_CHOICE_GRAND_SERVANT_MSG"*/, v9);
    byte_4B1FDDE = 1;
  }
  svtBase = this->fields.svtBase;
  if ( !svtBase )
    goto LABEL_17;
  svtBase = UnityEngine_GameObject__get_gameObject(svtBase, 0LL);
  if ( !svtBase )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(svtBase, 0, 0LL);
  svtBase = this->fields.servantSelectParentObj;
  if ( !svtBase )
    goto LABEL_17;
  svtBase = UnityEngine_GameObject__get_gameObject(svtBase, 0LL);
  if ( !svtBase )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(svtBase, 1, 0LL);
  svtBase = this->fields.grandServantChoiceMessageObj;
  if ( !svtBase )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(svtBase, isDispMessage, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  svtBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !svtBase )
    goto LABEL_17;
  EntityByClassBoardBaseId = GrandGraphMaster__GetEntityByClassBoardBaseId((GrandGraphMaster_o *)svtBase, baseId, 0LL);
  if ( EntityByClassBoardBaseId )
  {
    v12 = EntityByClassBoardBaseId;
    grandServantChoiceMessage = this->fields.grandServantChoiceMessage;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3344/*"CLASS_BOARD_CHOICE_GRAND_SERVANT_MSG"*/, 0LL);
    svtBase = (UnityEngine_GameObject_o *)System_String__Format(v14, (Il2CppObject *)v12->fields.nameShort, 0LL);
    if ( grandServantChoiceMessage )
    {
      UILabel__set_text(grandServantChoiceMessage, (System_String_o *)svtBase, 0LL);
      return;
    }
LABEL_17:
    sub_1BCB254(svtBase, *(_QWORD *)&baseId);
  }
}


void __fastcall ClassBoardFigureController__SetServantSelectSprite(
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
          0LL),
        AtlasManagerUnit__SetUI(
          atlasManagerUnit,
          v4->fields.servantSelectPlusSprite,
          v4->fields.selectServantPlusSpriteName,
          0LL),
        AtlasManagerUnit__SetUI(
          atlasManagerUnit,
          v4->fields.servantSelectTxtBaseSprite,
          v4->fields.selectServantTxtBaseSpriteName,
          0LL),
        (this = (ClassBoardFigureController_o *)v4->fields.servantSelectSprite) == 0LL) )
  {
    sub_1BCB254(this, atlasManagerUnit);
  }
  ((void (__fastcall *)(ClassBoardFigureController_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
}


void __fastcall ClassBoardFigureController__SetSvtFigure(
        ClassBoardFigureController_o *this,
        int64_t userSvtId,
        System_Action_o *setupEndCallBack,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  UnityEngine_GameObject_o *svtBase; // x0
  Il2CppObject *Master_object; // x22
  SvtMultiPortraitMaster_o *v24; // x21
  void *monitor; // x20
  Il2CppClass *klass; // x23
  int32_t v27; // w20
  int32_t v28; // w20
  int32_t v29; // w23
  int32_t FigureLimitCount; // w0
  int v31; // w22
  BalanceConfig_c *v32; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x22
  void *v34; // x23
  Il2CppClass *v35; // x24
  void *v36; // x22
  Il2CppClass *v37; // x23
  int32_t v38; // w0
  int32_t v39; // w22
  int32_t v40; // w23
  void *v41; // x22
  Il2CppClass *v42; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x22
  int32_t SvtId; // w21
  _BOOL8 v45; // x0
  __int64 v46; // x1
  SvtMultiPortraitEntity_o *current; // x22
  CGThumbnailListItem_o *PrefabForImageId; // x0
  __int64 v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UnityEngine_Component_o *v52; // x23
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  struct System_Int32_array *v57; // x8
  il2cpp_array_size_t max_length; // w9
  UnityEngine_Transform_o *transform; // x0
  __int64 v60; // x1
  System_Collections_Generic_List_object__o *v61; // x24
  StandFigureCollect_o *v62; // x25
  __int64 v63; // x0
  __int64 v64; // x1
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  UIStandFigureR_o *v71; // x21
  System_Collections_Generic_List_object__o *figureCollectList; // x19
  StandFigureCollect_o *v73; // x20
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x0
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+30h] [xbp-90h] BYREF
  int32_t value[2]; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *v83; // [xsp+58h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1FDDD & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, userSvtId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SvtMultiPortraitMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, v9);
    sub_1BCAFF8(&DataManager_TypeInfo, v10);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v12);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v16);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v19);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1BCAFF8(&StandFigureCollect_TypeInfo, v21);
    byte_4B1FDDD = 1;
  }
  entity = 0LL;
  *(_QWORD *)value = 0LL;
  v83 = 0LL;
  memset(&v81, 0, sizeof(v81));
  svtBase = this->fields.svtBase;
  if ( !svtBase )
    goto LABEL_78;
  svtBase = UnityEngine_GameObject__get_gameObject(svtBase, 0LL);
  if ( !svtBase )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive(svtBase, 1, 0LL);
  svtBase = this->fields.servantSelectParentObj;
  if ( !svtBase )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive(svtBase, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  svtBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !svtBase )
    goto LABEL_78;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)svtBase,
          &entity,
          userSvtId,
          (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  svtBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
  if ( !entity )
    goto LABEL_78;
  v24 = (SvtMultiPortraitMaster_o *)svtBase;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v85.fields.currentCryptoKey = klass;
  *(_QWORD *)&v85.fields.fakeValue = monitor;
  svtBase = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v85, 0LL);
  if ( !entity )
    goto LABEL_78;
  v27 = (int)svtBase;
  svtBase = (UnityEngine_GameObject_o *)UserServantEntity__getFigureImageLimitCount(
                                          (UserServantEntity_o *)entity,
                                          0,
                                          0LL);
  if ( !Master_object )
    goto LABEL_78;
  svtBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                          (ServantLimitImageMaster_o *)Master_object,
                                          v27,
                                          (int32_t)svtBase,
                                          0LL);
  if ( !entity )
    goto LABEL_78;
  v28 = (int)svtBase;
  svtBase = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[5],
                                          0LL);
  if ( !entity )
    goto LABEL_78;
  v29 = (int)svtBase;
  FigureLimitCount = UserServantEntity__getFigureLimitCount((UserServantEntity_o *)entity, 0, 0LL);
  svtBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                          (ServantLimitImageMaster_o *)Master_object,
                                          v29,
                                          FigureLimitCount,
                                          0LL);
  v31 = (int)svtBase;
  v32 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v32 = BalanceConfig_TypeInfo;
  }
  if ( v31 == v32->static_fields->ServantLimitMax )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    svtBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !entity )
      goto LABEL_78;
    v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)svtBase;
    v35 = entity[5].klass;
    v34 = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v86.fields.currentCryptoKey = v35;
    *(_QWORD *)&v86.fields.fakeValue = v34;
    svtBase = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v86, 0LL);
    if ( !v33 )
      goto LABEL_78;
    svtBase = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            v33,
                                            &v83,
                                            (int32_t)svtBase,
                                            (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)svtBase & 1) != 0 )
    {
      svtBase = (UnityEngine_GameObject_o *)v83;
      if ( !v83 )
        goto LABEL_78;
      svtBase = (UnityEngine_GameObject_o *)ServantEntity__IsContainOverwriteGrandGraphImageLimitCount(
                                              (ServantEntity_o *)v83,
                                              &value[1],
                                              0LL);
      if ( ((unsigned __int8)svtBase & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_78;
        v37 = entity[5].klass;
        v36 = entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v87.fields.currentCryptoKey = v37;
        *(_QWORD *)&v87.fields.fakeValue = v36;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v87, 0LL);
        v39 = value[1];
        v40 = v38;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        svtBase = (UnityEngine_GameObject_o *)ImageLimitCount__TryGetGrandImageLimitCount(v40, v39, value, 0LL);
        if ( ((unsigned __int8)svtBase & 1) != 0 )
          v28 = value[0];
      }
    }
  }
  if ( !entity )
    goto LABEL_78;
  v42 = entity[5].klass;
  v41 = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v88.fields.currentCryptoKey = v42;
  *(_QWORD *)&v88.fields.fakeValue = v41;
  svtBase = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v88, 0LL);
  if ( !v24 )
    goto LABEL_78;
  svtBase = (UnityEngine_GameObject_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v24, (int32_t)svtBase, v28, 0, 0LL);
  if ( !entity )
    goto LABEL_78;
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)svtBase;
  SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0LL);
  if ( !v43
    || !System_Linq_Enumerable__Any_object_(
          v43,
          (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
  {
    svtBase = (UnityEngine_GameObject_o *)StandFigureManager__CreateRenderPrefab_39863448(
                                            this->fields.svtBase,
                                            SvtId,
                                            v28,
                                            9,
                                            0,
                                            1,
                                            0LL,
                                            0,
                                            -1,
                                            0LL,
                                            0LL);
    if ( svtBase )
    {
      v71 = (UIStandFigureR_o *)svtBase;
      svtBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)svtBase,
                                              0LL);
      if ( svtBase )
      {
        v90.fields.x = this->fields.svtScale;
        v90.fields.y = v90.fields.x;
        v90.fields.z = v90.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)svtBase, v90, 0LL);
        figureCollectList = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
        v73 = (StandFigureCollect_o *)sub_1BCB244(StandFigureCollect_TypeInfo);
        StandFigureCollect___ctor(v73, 0LL, v71, 0LL);
        if ( figureCollectList )
        {
          items = figureCollectList->fields._items;
          v77 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
          ++figureCollectList->fields._version;
          if ( items )
          {
            size = figureCollectList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                figureCollectList,
                (Il2CppObject *)v73,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
            }
            else
            {
              v79 = &items->obj.klass + size;
              figureCollectList->fields._size = size + 1;
              v79[4] = (Il2CppClass *)v73;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v79 + 4), (int32_t)v73, v74, v75);
            }
            return;
          }
        }
      }
    }
LABEL_78:
    sub_1BCB254(svtBase, userSvtId);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v80,
    (System_Collections_Generic_List_object__o *)v43,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v81 = v80;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v81,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v45 )
      break;
    current = (SvtMultiPortraitEntity_o *)v81.fields._current;
    if ( !v81.fields._current )
      sub_1BCB254(v45, v46);
    PrefabForImageId = (CGThumbnailListItem_o *)StandFigureManager__CreatePrefabForImageId(
                                                  this->fields.svtBase,
                                                  (int32_t)v81.fields._current[2].klass,
                                                  9,
                                                  0,
                                                  HIDWORD(v81.fields._current[2].klass) + 1,
                                                  0LL,
                                                  0,
                                                  -1,
                                                  0LL,
                                                  0LL);
    v52 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1BCB254(0LL, v49);
    PrefabForImageId[1].klass = (CGThumbnailListItem_c *)current;
    sub_1BCAF9C(PrefabForImageId + 1, (int32_t)current, v50, v51);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v52, 0LL);
      v57 = current->fields.commonPosition;
      if ( !v57 )
        sub_1BCB254(gameObject, v55);
      max_length = v57->max_length;
      if ( max_length == 1 )
        sub_1BCB25C(gameObject, v55, v56);
      if ( !max_length )
        sub_1BCB25C(gameObject, v55, v56);
      GameObjectExtensions__AddLocalPosition_35357784(gameObject, (float)v57->m_Items[1], (float)v57->m_Items[2], 0LL);
    }
    transform = UnityEngine_Component__get_transform(v52, 0LL);
    if ( !transform )
      sub_1BCB254(0LL, v60);
    v89.fields.x = this->fields.svtScale;
    v89.fields.y = v89.fields.x;
    v89.fields.z = v89.fields.x;
    UnityEngine_Transform__set_localScale(transform, v89, 0LL);
    v61 = (System_Collections_Generic_List_object__o *)this->fields.figureCollectList;
    v62 = (StandFigureCollect_o *)sub_1BCB244(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v62, current, (UIStandFigureR_o *)v52, 0LL);
    if ( !v61 )
      sub_1BCB254(v63, v64);
    v67 = v61->fields._items;
    v68 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v61->fields._version;
    if ( !v67 )
      sub_1BCB254(v63, v64);
    v69 = v61->fields._size;
    if ( (unsigned int)v69 >= v67->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v61,
        (Il2CppObject *)v62,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = &v67->obj.klass + v69;
      v61->fields._size = v69 + 1;
      v70[4] = (Il2CppClass *)v62;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v62, v65, v66);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v81,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardFigureController__SetUIPanelAlpha(
        ClassBoardFigureController_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct UIPanel_o *svtPanel; // x0

  svtPanel = this->fields.svtPanel;
  if ( !svtPanel )
    sub_1BCB254(0LL, method);
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, long double))svtPanel->klass->vtable._8_set_alpha.method)(
    svtPanel,
    svtPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    *(long double *)&alpha);
}


void __fastcall ClassBoardFigureController__Setup(
        ClassBoardFigureController_o *this,
        ClassBoardController_o *controller,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.classBoardController = controller;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.classBoardController, (int32_t)controller, (int32_t)method, v3);
}