void __fastcall ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantStatusNpComponent_c *v2; // x8

  if ( (byte_40FCA78 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusNpComponent_TypeInfo, v1);
    byte_40FCA78 = 1;
  }
  ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_MAX_HEIGHT = 500;
  v2 = ServantStatusNpComponent_TypeInfo;
  ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_DEFAULT_HEIGHT = 57;
  v2->static_fields->DETAIL_LINE_HEIGHT = 19;
  v2->static_fields->MULTI_NP_POS_Y = -50.0;
  v2->static_fields->MASK_BASE_POS_Y = -11.0;
  v2->static_fields->MASK_DEFAULT_HEIGHT = 252;
  v2->static_fields->COND_TITLE_MAX_WIDTH = 540;
}


void __fastcall ServantStatusNpComponent___ctor(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FCA77 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, method);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    byte_40FCA77 = 1;
  }
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  this->fields.costumeIdHash = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.costumeIdHash,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusNpComponent__GetCommandLimitCount(
        ServantStatusNpComponent_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w0
  int commandLimitCountFix; // w22
  int32_t v11; // w21
  System_Collections_Generic_HashSet_int__o *costumeIdHash; // x0
  int32_t commandLimitCountAdjust; // w21
  System_Collections_Generic_HashSet_int__o *v14; // x0
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t SvtId; // w0

  if ( (byte_40FCA76 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, item);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Contains__, v5);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FCA76 = 1;
  }
  if ( !item )
    goto LABEL_24;
  ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                            item,
                                            0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteCommandCardLimitCount,
                                      0LL);
  commandLimitCountFix = this->fields.commandLimitCountFix;
  v11 = LimitCountByImageLimitCostumeIn;
  if ( (commandLimitCountFix & 0x80000000) != 0 || LimitCountByImageLimitCostumeIn == commandLimitCountFix )
  {
    commandLimitCountFix = LimitCountByImageLimitCostumeIn;
  }
  else if ( LimitCountByImageLimitCostumeIn >= 11 )
  {
    costumeIdHash = this->fields.costumeIdHash;
    if ( !costumeIdHash )
      goto LABEL_24;
    commandLimitCountFix = v11;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            costumeIdHash,
            v11,
            (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      commandLimitCountFix = this->fields.commandLimitCountFix;
  }
  commandLimitCountAdjust = this->fields.commandLimitCountAdjust;
  if ( (commandLimitCountAdjust & 0x80000000) != 0 || commandLimitCountFix <= commandLimitCountAdjust )
  {
    commandLimitCountAdjust = commandLimitCountFix;
  }
  else if ( commandLimitCountFix >= 11 )
  {
    v14 = this->fields.costumeIdHash;
    if ( !v14 )
      goto LABEL_24;
    commandLimitCountAdjust = commandLimitCountFix;
    if ( System_Collections_Generic_HashSet_int___Contains(
           v14,
           commandLimitCountFix,
           (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = this->fields.commandLimitCountAdjust;
    }
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL),
        !MasterData_WarQuestSelectionMaster) )
  {
LABEL_24:
    sub_B170D4();
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           MasterData_WarQuestSelectionMaster,
           SvtId,
           commandLimitCountAdjust,
           0LL);
}


void __fastcall ServantStatusNpComponent__ModifyCommandCard(
        ServantStatusNpComponent_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t CommandLimitCount; // w0
  struct BattleCommandData_o *commandCardData; // x8
  struct BattleCommandData_o *v17; // x23
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitImageMaster_o *v20; // x21
  int32_t SvtId; // w0
  int32_t dispLimitCount; // w22
  int32_t v23; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w0
  int32_t ServantLimitCountSealAfter; // w0
  BattleCommandComponent_o *commandCardComponent; // x0
  BattleCommandComponent_o *v27; // x0
  struct UnityEngine_GameObject_o *commandCardPrefab; // x21
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x21
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v32; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *commandCardBase; // x0
  UnityEngine_Transform_o *v37; // x0
  BattleCommandComponent_o *Component_srcLineSprite; // x0
  BattleCommandComponent_o *v39; // x23
  System_Int32_array **gameObject; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x2
  int32_t v48; // w0
  int32_t cardType; // w25
  int32_t v50; // w24
  int32_t v51; // w26
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  BattleCommandData_o *v56; // x27
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct BattleCommandData_o *v63; // x25
  WebViewManager_o *v64; // x0
  ServantLimitImageMaster_o *v65; // x22
  int32_t v66; // w0
  int32_t v67; // w24
  int32_t v68; // w20
  int32_t v69; // w0
  int32_t v70; // w0
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct BattleCommandData_o *v72; // x9
  struct BattleCommandComponent_o **p_commandCardComponent; // x19
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  UnityEngine_GameObject_o *v80; // x0
  int32_t layer; // w19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FCA75 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandData_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v7);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v8);
    sub_B16FFC(&NGUITools_TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_14954/*"Unlit/Transparent Colored"*/, v13);
    sub_B16FFC(&StringLiteral_4144/*"CommandCard"*/, v14);
    byte_40FCA75 = 1;
  }
  if ( this->fields.tdEntity )
  {
    if ( this->fields.commandCardData )
    {
      CommandLimitCount = ServantStatusNpComponent__GetCommandLimitCount(this, item, method);
      commandCardData = this->fields.commandCardData;
      if ( commandCardData )
      {
        commandCardData->fields.svtlimit = CommandLimitCount;
        v17 = this->fields.commandCardData;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( item )
          {
            v20 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
            SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
            dispLimitCount = item->fields.dispLimitCount;
            v23 = SvtId;
            if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ImageLimitCount_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            }
            LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(dispLimitCount, 0LL);
            if ( v20 )
            {
              ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                             v20,
                                             v23,
                                             LimitCountByImageLimitCostumeIn,
                                             0LL);
              if ( v17 )
              {
                v17->fields._loadsvtLimit = ServantLimitCountSealAfter;
                commandCardComponent = this->fields.commandCardComponent;
                if ( commandCardComponent )
                {
                  BattleCommandComponent__setData(commandCardComponent, this->fields.commandCardData, 0LL, 0, 1, 0, 0LL);
                  v27 = this->fields.commandCardComponent;
                  if ( v27 )
                  {
                    BattleCommandComponent__updateView(v27, 1, 0, 1, 0, this->fields.isCharaHide, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_39:
      sub_B170D4();
    }
    commandCardPrefab = this->fields.commandCardPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v29 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCardPrefab,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v29 )
      goto LABEL_39;
    v30 = v29;
    transform = UnityEngine_GameObject__get_transform(v29, 0LL);
    v32 = UnityEngine_GameObject__get_transform(v30, 0LL);
    if ( !v32 )
      goto LABEL_39;
    localScale = UnityEngine_Transform__get_localScale(v32, 0LL);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v30, (System_String_o *)StringLiteral_4144/*"CommandCard"*/, 0LL);
    commandCardBase = this->fields.commandCardBase;
    if ( !commandCardBase )
      goto LABEL_39;
    v37 = UnityEngine_GameObject__get_transform(commandCardBase, 0LL);
    if ( !transform )
      goto LABEL_39;
    UnityEngine_Transform__set_parent(transform, v37, 0LL);
    zero = UnityEngine_Vector3__get_zero(0LL);
    UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
    identity = UnityEngine_Quaternion__get_identity(0LL);
    UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
    v84.fields.x = x;
    v84.fields.y = y;
    v84.fields.z = z;
    UnityEngine_Transform__set_localScale(transform, v84, 0LL);
    UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
      v30,
      (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    Component_srcLineSprite = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v30,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !Component_srcLineSprite )
      goto LABEL_39;
    v39 = Component_srcLineSprite;
    BattleCommandComponent__setDepth(Component_srcLineSprite, 110, 0LL);
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v39->fields.target = (struct UnityEngine_GameObject_o *)gameObject;
    sub_B16F98((BattleServantConfConponent_o *)&v39->fields.target, gameObject, v41, v42, v43, v44, v45, v46);
    v48 = ServantStatusNpComponent__GetCommandLimitCount(this, item, v47);
    if ( !item )
      goto LABEL_39;
    cardType = this->fields.cardType;
    v50 = v48;
    v51 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    v56 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v52, v53, v54, v55);
    BattleCommandData___ctor_18691260(v56, cardType, v51, v50, 0, 0LL);
    this->fields.commandCardData = v56;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.commandCardData,
      (System_Int32_array **)v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    v63 = this->fields.commandCardData;
    v64 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v64 )
      goto LABEL_39;
    v65 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v64,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v66 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    v67 = item->fields.dispLimitCount;
    v68 = v66;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    v69 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v67, 0LL);
    if ( !v65 )
      goto LABEL_39;
    v70 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v65, v68, v69, 0LL);
    if ( !v63 )
      goto LABEL_39;
    v63->fields._loadsvtLimit = v70;
    tdEntity = this->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_39;
    v72 = this->fields.commandCardData;
    if ( !v72 )
      goto LABEL_39;
    v72->fields.treasureDvc = tdEntity->fields.id;
    BattleCommandComponent__setData(v39, this->fields.commandCardData, 0LL, 0, 1, 0, 0LL);
    BattleCommandComponent__setShader(v39, (System_String_o *)StringLiteral_14954/*"Unlit/Transparent Colored"*/, 0LL);
    BattleCommandComponent__updateView(v39, 1, 0, 1, 0, this->fields.isCharaHide, 0LL);
    this->fields.commandCardComponent = v39;
    p_commandCardComponent = &this->fields.commandCardComponent;
    sub_B16F98(
      (BattleServantConfConponent_o *)p_commandCardComponent,
      (System_Int32_array **)v39,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79);
    v80 = (UnityEngine_GameObject_o *)*(p_commandCardComponent - 11);
    if ( !v80 )
      goto LABEL_39;
    layer = UnityEngine_GameObject__get_layer(v80, 0LL);
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer(v30, layer, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusNpComponent__Set(
        ServantStatusNpComponent_o *this,
        int32_t idx,
        TreasureDvcInfo_o *tdInfo,
        ServantStatusListViewItem_o *item,
        int32_t tdId,
        bool multiFlg,
        int32_t condLimitCount,
        System_String_o *title,
        System_String_o *closedMessage,
        int32_t isCharaHide,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  UILabel_o *nameLabel; // x0
  UILabel_o *rubyLabel; // x0
  UILabel_o *npRankLabel; // x0
  UILabel_o *npTypeLabel; // x0
  UILabel_o *npLevelLabel; // x0
  UILabel_o *maxGuageLabel; // x0
  UILabel_o *explanationLabel; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  struct UISprite_array *guageSpriteList; // x8
  __int64 v45; // x23
  int max_length; // w9
  UISprite_o *v47; // x0
  __int64 v48; // x23
  __int64 v49; // x23
  DataManager_o *v50; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct TreasureDvcEntity_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x23
  __int64 v60; // x23
  DataManager_o *v61; // x0
  WarQuestSelectionMaster_o *v62; // x0
  ServantLimitAddMaster_o *v63; // x28
  int32_t dispLimitCount; // w23
  int32_t LimitCountByImageLimitCostumeIn; // w23
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x24
  int32_t SvtId; // w0
  int32_t ServantImageLimitSealAfter; // w23
  int32_t v69; // w0
  ServantEntity_o *svtEntity; // x0
  bool IsNameTrue; // w0
  UILabel_o *v72; // x23
  System_String_o *OverwriteTDRuby; // x0
  struct UILabel_o *v74; // x23
  System_String_o *OverwriteTDName; // x0
  System_String_o *name; // x1
  UILabel_o *v77; // x0
  struct TreasureDvcEntity_o *tdEntity; // x8
  UILabel_o *v79; // x0
  struct TreasureDvcEntity_o *v80; // x8
  ServantEntity_o *v81; // x0
  bool v82; // w0
  struct UILabel_o *v83; // x23
  System_String_o *v84; // x0
  System_String_o *rank; // x1
  UILabel_o *v86; // x0
  struct TreasureDvcEntity_o *v87; // x8
  ServantEntity_o *v88; // x0
  bool v89; // w0
  struct UILabel_o *v90; // x23
  System_String_o *v91; // x0
  System_String_o *typeText; // x1
  UILabel_o *v93; // x0
  struct TreasureDvcEntity_o *v94; // x8
  UILabel_o *v95; // x23
  System_String_o *v96; // x24
  System_String_o *v97; // x0
  System_String_o *v98; // x1
  UILabel_o *v99; // x23
  System_String_o *v100; // x24
  Il2CppObject *v101; // x0
  System_String_o *v102; // x0
  UIWidget_o *v103; // x23
  ServantStatusNpComponent_c *v104; // x0
  int32_t *p_DETAIL_LINE_HEIGHT; // x8
  __int64 v106; // x23
  __int64 v107; // x23
  DataManager_o *v108; // x0
  TreasureDvcLvMaster_o *v109; // x0
  TreasureDvcLvEntity_o *v110; // x0
  System_String_o *Detail; // x23
  ServantStatusNpComponent_c *v112; // x0
  UILabel_o *v113; // x28
  int32_t v114; // w28
  int32_t v115; // w0
  const MethodInfo *v116; // x2
  ServantTreasureDvcEntity_o *EntityFromIDID; // x0
  int32_t *p_cardId; // x8
  int32_t v119; // w9
  struct UILabel_o *v120; // x8
  ServantStatusNpComponent_c *v121; // x0
  int32_t mHeight; // w23
  int32_t DETAIL_LINE_HEIGHT; // w8
  struct UILabel_o *v124; // x9
  int32_t v125; // w23
  int32_t v126; // w28
  int32_t v127; // w27
  UnityEngine_Component_o *condSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *condLabel; // x0
  UILabel_o *v131; // x23
  float MULTI_NP_POS_Y; // s0
  double v133; // d0
  int32_t v134; // w23
  UILabel_o *v135; // x0
  System_Collections_Generic_HashSet_int__o *costumeIdHash; // x0
  __int64 v137; // x24
  __int64 v138; // x24
  DataManager_o *v139; // x0
  ServantTreasureDeviceReleaseMaster_o *v140; // x24
  int32_t v141; // w0
  const MethodInfo *v142; // x2
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  UnityEngine_GameObject_o *maskBase; // x0
  UILabel_o *maskInfoLabel; // x0
  System_String_o *v152; // x1
  ServantStatusNpComponent_c *v153; // x0
  int v154; // w21
  int v155; // w8
  UIWidget_o *maskSprite; // x0
  struct UISprite_array *v157; // x8
  __int64 v158; // x22
  int v159; // w23
  int v160; // w9
  UISprite_o *v161; // x21
  System_String_o *v162; // x0
  System_String_o *v163; // x0
  int32_t v164; // [xsp+Ch] [xbp-84h]
  System_String_o *value; // [xsp+20h] [xbp-70h]
  int32_t v166; // [xsp+2Ch] [xbp-64h]
  int v168; // [xsp+34h] [xbp-5Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_40FCA74 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&idx);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v21);
    sub_B16FFC(&DataManager_TypeInfo, v22);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Clear__, v24);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v25);
    sub_B16FFC(&LocalizationManager_TypeInfo, v26);
    sub_B16FFC(&ServantStatusNpComponent_TypeInfo, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v28);
    sub_B16FFC(&StringLiteral_19464/*"img_npgage_"*/, v29);
    sub_B16FFC(&StringLiteral_11940/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, v30);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v31);
    sub_B16FFC(&StringLiteral_19465/*"img_npgage_bg"*/, v32);
    sub_B16FFC(&StringLiteral_1/*""*/, v33);
    byte_40FCA74 = 1;
  }
  entity = 0LL;
  v168 = 0;
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  rubyLabel = this->fields.rubyLabel;
  if ( !rubyLabel )
    goto LABEL_16;
  UILabel__set_text(rubyLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  npRankLabel = this->fields.npRankLabel;
  if ( !npRankLabel )
    goto LABEL_16;
  UILabel__set_text(npRankLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  npTypeLabel = this->fields.npTypeLabel;
  if ( !npTypeLabel )
    goto LABEL_16;
  UILabel__set_text(npTypeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  npLevelLabel = this->fields.npLevelLabel;
  if ( !npLevelLabel )
    goto LABEL_16;
  UILabel__set_text(npLevelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maxGuageLabel = this->fields.maxGuageLabel;
  if ( !maxGuageLabel )
    goto LABEL_16;
  value = title;
  v166 = idx;
  UILabel__set_text(maxGuageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  explanationLabel = this->fields.explanationLabel;
  if ( !explanationLabel )
    goto LABEL_16;
  UILabel__set_text(explanationLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  guageSpriteList = this->fields.guageSpriteList;
  if ( !guageSpriteList )
    goto LABEL_16;
  v45 = 0LL;
  while ( 1 )
  {
    max_length = guageSpriteList->max_length;
    if ( (int)v45 >= max_length )
      break;
    if ( (unsigned int)v45 >= max_length )
    {
LABEL_165:
      sub_B17100(v41, v42, v43);
      sub_B170A0();
    }
    v47 = guageSpriteList->m_Items[v45];
    if ( v47 )
    {
      UISprite__set_spriteName(v47, (System_String_o *)StringLiteral_19465/*"img_npgage_bg"*/, 0LL);
      guageSpriteList = this->fields.guageSpriteList;
      ++v45;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_16;
  }
  if ( tdId < 1 )
    return;
  v48 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v49 = **(_QWORD **)(v48 + 192);
  if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
    sub_AAFCFC(v49);
  v50 = **(DataManager_o ***)(v49 + 184);
  if ( !v50 )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        v50,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_16;
  v52 = (struct TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        tdId,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  this->fields.tdEntity = v52;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tdEntity,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  if ( !this->fields.tdEntity )
    return;
  v59 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v59 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v60 = **(_QWORD **)(v59 + 192);
  if ( (*(_BYTE *)(v60 + 306) & 1) == 0 )
    sub_AAFCFC(v60);
  v61 = **(DataManager_o ***)(v60 + 184);
  if ( !v61 )
    goto LABEL_16;
  v62 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          v61,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !item )
    goto LABEL_16;
  v63 = (ServantLimitAddMaster_o *)v62;
  dispLimitCount = item->fields.dispLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(dispLimitCount, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 SvtId,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  v69 = ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( !v63 )
    goto LABEL_16;
  ServantLimitAddMaster__TryGetEntity(v63, &entity, v69, ServantImageLimitSealAfter, 0LL);
  svtEntity = item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_16;
  IsNameTrue = ServantEntity__IsNameTrue(svtEntity, 0LL);
  if ( entity && IsNameTrue && ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0LL) )
  {
    if ( !entity )
      goto LABEL_16;
    v72 = this->fields.rubyLabel;
    OverwriteTDRuby = ServantLimitAddEntity__GetOverwriteTDRuby(entity, 0LL);
    if ( !v72 )
      goto LABEL_16;
    UILabel__set_text(v72, OverwriteTDRuby, 0LL);
    if ( !entity )
      goto LABEL_16;
    v74 = this->fields.nameLabel;
    OverwriteTDName = ServantLimitAddEntity__GetOverwriteTDName(entity, 0LL);
    if ( !v74 )
      goto LABEL_16;
    name = OverwriteTDName;
    v77 = v74;
  }
  else
  {
    tdEntity = this->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_16;
    v79 = this->fields.rubyLabel;
    if ( !v79 )
      goto LABEL_16;
    UILabel__set_text(v79, tdEntity->fields.ruby, 0LL);
    v80 = this->fields.tdEntity;
    if ( !v80 )
      goto LABEL_16;
    v77 = this->fields.nameLabel;
    if ( !v77 )
      goto LABEL_16;
    name = v80->fields.name;
  }
  UILabel__set_text(v77, name, 0LL);
  v81 = item->fields.svtEntity;
  if ( !v81 )
    goto LABEL_16;
  v82 = ServantEntity__IsNameTrue(v81, 0LL);
  if ( entity && v82 && ServantLimitAddEntity__ExistOverwriteTDRank(entity, 0LL) )
  {
    if ( !entity )
      goto LABEL_16;
    v83 = this->fields.npRankLabel;
    v84 = ServantLimitAddEntity__GetOverWriteTDRank(entity, 0LL);
    if ( !v83 )
      goto LABEL_16;
    rank = v84;
    v86 = v83;
  }
  else
  {
    v87 = this->fields.tdEntity;
    if ( !v87 )
      goto LABEL_16;
    v86 = this->fields.npRankLabel;
    if ( !v86 )
      goto LABEL_16;
    rank = v87->fields.rank;
  }
  UILabel__set_text(v86, rank, 0LL);
  v88 = item->fields.svtEntity;
  if ( !v88 )
    goto LABEL_16;
  v89 = ServantEntity__IsNameTrue(v88, 0LL);
  if ( entity && v89 && ServantLimitAddEntity__ExistOverwriteTDTypeText(entity, 0LL) )
  {
    if ( !entity )
      goto LABEL_16;
    v90 = this->fields.npTypeLabel;
    v91 = ServantLimitAddEntity__GetOverWriteTDTypeText(entity, 0LL);
    if ( !v90 )
      goto LABEL_16;
    typeText = v91;
    v93 = v90;
  }
  else
  {
    v94 = this->fields.tdEntity;
    if ( !v94 )
      goto LABEL_16;
    v93 = this->fields.npTypeLabel;
    if ( !v93 )
      goto LABEL_16;
    typeText = v94->fields.typeText;
  }
  UILabel__set_text(v93, typeText, 0LL);
  if ( !tdInfo )
    goto LABEL_16;
  v95 = this->fields.npLevelLabel;
  if ( tdInfo->fields.lv <= 0 )
  {
    v98 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v95 )
      goto LABEL_16;
  }
  else
  {
    v96 = System_Int32__ToString((int)tdInfo + 20, 0LL);
    v97 = System_Int32__ToString((int)tdInfo + 24, 0LL);
    v98 = System_String__Concat_43746016(v96, (System_String_o *)StringLiteral_871/*"/"*/, v97, 0LL);
    if ( !v95 )
      goto LABEL_16;
  }
  UILabel__set_text(v95, v98, 0LL);
  v99 = this->fields.maxGuageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v100 = LocalizationManager__Get((System_String_o *)StringLiteral_11940/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0LL);
  v168 = 100 * tdInfo->fields.guageCount;
  v101 = (Il2CppObject *)System_Int32__ToString((int32_t)&v168, 0LL);
  v102 = System_String__Format(v100, v101, 0LL);
  if ( !v99 )
    goto LABEL_16;
  UILabel__set_text(v99, v102, 0LL);
  v103 = (UIWidget_o *)this->fields.explanationLabel;
  v104 = ServantStatusNpComponent_TypeInfo;
  if ( multiFlg )
  {
    if ( (WORD1(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      v104 = ServantStatusNpComponent_TypeInfo;
    }
    p_DETAIL_LINE_HEIGHT = &v104->static_fields->DETAIL_LINE_HEIGHT;
    if ( !v103 )
      goto LABEL_16;
  }
  else
  {
    if ( (WORD1(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      v104 = ServantStatusNpComponent_TypeInfo;
    }
    p_DETAIL_LINE_HEIGHT = &v104->static_fields->DETAIL_DEFAULT_HEIGHT;
    if ( !v103 )
      goto LABEL_16;
  }
  UIWidget__set_height(v103, *p_DETAIL_LINE_HEIGHT, 0LL);
  v106 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v106 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v107 = **(_QWORD **)(v106 + 192);
  if ( (*(_BYTE *)(v107 + 306) & 1) == 0 )
    sub_AAFCFC(v107);
  v108 = **(DataManager_o ***)(v107 + 184);
  if ( !v108 )
    goto LABEL_16;
  v109 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    v108,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !v109 )
    goto LABEL_16;
  v110 = TreasureDvcLvMaster__GetEntity(v109, tdId, tdInfo->fields.lv, 0LL);
  if ( v110 )
    Detail = TreasureDvcLvEntity__getDetail(v110, 0LL);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v112 = ServantStatusNpComponent_TypeInfo;
  v113 = this->fields.explanationLabel;
  if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v112 = ServantStatusNpComponent_TypeInfo;
  }
  v114 = WrapControlText__textBBCodeAdjust(
           v113,
           Detail,
           v112->static_fields->DETAIL_FONT_SIZE,
           v112->static_fields->DETAIL_FONT_SIZE,
           v112->static_fields->DETAIL_MAX_HEIGHT,
           0LL);
  v115 = ServantStatusListViewItem__get_SvtId(item, 0LL);
  EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(v115, tdId, v116);
  p_cardId = &tdInfo->fields.cardId;
  if ( EntityFromIDID )
    p_cardId = &EntityFromIDID->fields.cardId;
  v119 = *p_cardId;
  v120 = this->fields.explanationLabel;
  this->fields.cardType = v119;
  if ( !v120 )
    goto LABEL_16;
  v121 = ServantStatusNpComponent_TypeInfo;
  mHeight = v120->fields.mHeight;
  if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v121 = ServantStatusNpComponent_TypeInfo;
  }
  v164 = v114;
  DETAIL_LINE_HEIGHT = v121->static_fields->DETAIL_LINE_HEIGHT;
  if ( mHeight <= DETAIL_LINE_HEIGHT )
  {
    v126 = isCharaHide;
    v127 = 0;
  }
  else
  {
    v124 = this->fields.explanationLabel;
    if ( !v124 )
      goto LABEL_16;
    v125 = v124->fields.mHeight;
    v126 = isCharaHide;
    if ( (BYTE3(v121->vtable._0_Equals.methodPtr) & 4) != 0 && !v121->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v121);
      DETAIL_LINE_HEIGHT = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v127 = v125 - DETAIL_LINE_HEIGHT;
  }
  condSprite = (UnityEngine_Component_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  if ( !condSprite || (gameObject = UnityEngine_Component__get_gameObject(condSprite, 0LL)) == 0LL )
LABEL_16:
    sub_B170D4();
  if ( multiFlg )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    condLabel = this->fields.condLabel;
    if ( !condLabel )
      goto LABEL_16;
    UILabel__set_text(condLabel, value, 0LL);
    v131 = this->fields.condLabel;
    if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    }
    if ( !v131 )
      goto LABEL_16;
    UILabel__SetCondensedScale(v131, ServantStatusNpComponent_TypeInfo->static_fields->COND_TITLE_MAX_WIDTH, 0LL);
    GameObjectExtensions__SetLocalPositionY(
      this->fields.npObject,
      ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y,
      0LL);
    MULTI_NP_POS_Y = ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y;
    if ( MULTI_NP_POS_Y == INFINITY )
      v133 = -MULTI_NP_POS_Y;
    else
      v133 = MULTI_NP_POS_Y;
    v134 = UnityEngine_Mathf__Abs_40727336((int)v133, 0LL);
    if ( v166 < 1 )
      this->fields.commandLimitCountAdjust = condLimitCount - 1;
    else
      this->fields.commandLimitCountFix = condLimitCount;
    v137 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v137 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v138 = **(_QWORD **)(v137 + 192);
    if ( (*(_BYTE *)(v138 + 306) & 1) == 0 )
      sub_AAFCFC(v138);
    v139 = **(DataManager_o ***)(v138 + 184);
    if ( !v139 )
      goto LABEL_16;
    v140 = (ServantTreasureDeviceReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     v139,
                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    v141 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !v140 )
      goto LABEL_16;
    v127 += v134;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v140, v141, v142);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.costumeIdHash,
      (System_Int32_array **)CorrespondsCostume,
      v144,
      v145,
      v146,
      v147,
      v148,
      v149);
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v135 = this->fields.condLabel;
    if ( !v135 )
      goto LABEL_16;
    UILabel__set_text(v135, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    costumeIdHash = this->fields.costumeIdHash;
    if ( !costumeIdHash )
      goto LABEL_16;
    System_Collections_Generic_HashSet_int___Clear(
      costumeIdHash,
      (const MethodInfo_21D8598 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  }
  if ( tdInfo->fields.id == tdId )
  {
    maskBase = this->fields.maskBase;
    if ( !maskBase )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(maskBase, 0, 0LL);
    maskInfoLabel = this->fields.maskInfoLabel;
    if ( !maskInfoLabel )
      goto LABEL_16;
    v152 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    v153 = ServantStatusNpComponent_TypeInfo;
    if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      v153 = ServantStatusNpComponent_TypeInfo;
    }
    if ( !this->fields.maskBase )
      goto LABEL_16;
    v154 = v153->static_fields->DETAIL_LINE_HEIGHT * v164;
    UnityEngine_GameObject__SetActive(this->fields.maskBase, 1, 0LL);
    v155 = v154 >= 0 ? v154 : v154 + 1;
    GameObjectExtensions__SetLocalPositionY(
      this->fields.maskBase,
      ServantStatusNpComponent_TypeInfo->static_fields->MASK_BASE_POS_Y - (float)(v155 >> 1),
      0LL);
    maskSprite = (UIWidget_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_16;
    UIWidget__set_height(maskSprite, ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT + v154, 0LL);
    maskInfoLabel = this->fields.maskInfoLabel;
    if ( !maskInfoLabel )
      goto LABEL_16;
    v152 = closedMessage;
  }
  UILabel__set_text(maskInfoLabel, v152, 0LL);
  v157 = this->fields.guageSpriteList;
  this->fields.isCharaHide = v126 == 1;
  if ( !v157 )
    goto LABEL_16;
  v158 = 0LL;
  v159 = 100;
  while ( 1 )
  {
    v160 = v157->max_length;
    if ( (int)v158 >= v160 || (int)v158 >= tdInfo->fields.guageCount )
      break;
    if ( (unsigned int)v158 >= v160 )
      goto LABEL_165;
    v161 = v157->m_Items[v158];
    v168 = v159;
    v162 = System_Int32__ToString((int32_t)&v168, 0LL);
    v163 = System_String__Concat_43743732((System_String_o *)StringLiteral_19464/*"img_npgage_"*/, v162, 0LL);
    if ( v161 )
    {
      UISprite__set_spriteName(v161, v163, 0LL);
      v157 = this->fields.guageSpriteList;
      ++v158;
      v159 += 100;
      if ( v157 )
        continue;
    }
    goto LABEL_16;
  }
  this->fields._Adjust_k__BackingField = v127;
}


int32_t __fastcall ServantStatusNpComponent__get_Adjust(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  return this->fields._Adjust_k__BackingField;
}


void __fastcall ServantStatusNpComponent__set_Adjust(
        ServantStatusNpComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Adjust_k__BackingField = value;
}