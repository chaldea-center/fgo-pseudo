void __fastcall ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantStatusNpComponent_c *v2; // x8

  if ( (byte_42186F5 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusNpComponent_TypeInfo, v1);
    byte_42186F5 = 1;
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
  __int64 v4; // x1
  System_Collections_Generic_HashSet_int__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42186F4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, method);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_42186F4 = 1;
  }
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  this->fields.costumeIdHash = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.costumeIdHash,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusNpComponent__GetCommandLimitCount(
        ServantStatusNpComponent_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusNpComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w0
  int32_t commandLimitCountFix; // w22
  int32_t v11; // w21
  int32_t commandLimitCountAdjust; // w21
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x20

  v4 = this;
  if ( (byte_42186F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, item);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Contains__, v5);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v6);
    this = (ServantStatusNpComponent_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_42186F3 = 1;
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
  commandLimitCountFix = v4->fields.commandLimitCountFix;
  v11 = LimitCountByImageLimitCostumeIn;
  if ( (commandLimitCountFix & 0x80000000) != 0 || LimitCountByImageLimitCostumeIn == commandLimitCountFix )
  {
    commandLimitCountFix = LimitCountByImageLimitCostumeIn;
  }
  else if ( LimitCountByImageLimitCostumeIn >= 11 )
  {
    this = (ServantStatusNpComponent_o *)v4->fields.costumeIdHash;
    if ( !this )
      goto LABEL_24;
    commandLimitCountFix = v11;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            v11,
            (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      commandLimitCountFix = v4->fields.commandLimitCountFix;
  }
  commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
  if ( (commandLimitCountAdjust & 0x80000000) != 0 || commandLimitCountFix <= commandLimitCountAdjust )
  {
    commandLimitCountAdjust = commandLimitCountFix;
  }
  else if ( commandLimitCountFix >= 11 )
  {
    this = (ServantStatusNpComponent_o *)v4->fields.costumeIdHash;
    if ( !this )
      goto LABEL_24;
    commandLimitCountAdjust = commandLimitCountFix;
    if ( System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           commandLimitCountFix,
           (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
    }
  }
  this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)this,
                                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL),
        !MasterData_WarQuestSelectionMaster) )
  {
LABEL_24:
    sub_B0D97C(this);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           MasterData_WarQuestSelectionMaster,
           (int32_t)this,
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
  DataManager_o *CommandLimitCount; // x0
  struct BattleCommandData_o *commandCardData; // x8
  struct BattleCommandData_o *v17; // x23
  ServantLimitImageMaster_o *v18; // x21
  int32_t SvtId; // w0
  int32_t dispLimitCount; // w22
  int32_t v21; // w20
  struct UnityEngine_GameObject_o *commandCardPrefab; // x21
  UnityEngine_GameObject_o *v23; // x21
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  DataManager_o *v28; // x23
  System_Int32_array **gameObject; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x2
  int32_t cardType; // w25
  int32_t v38; // w24
  int32_t v39; // w26
  __int64 v40; // x1
  __int64 v41; // x2
  BattleCommandData_o *v42; // x27
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct BattleCommandData_o *v49; // x25
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t v51; // w0
  int32_t v52; // w24
  int32_t v53; // w20
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct BattleCommandData_o *v55; // x9
  struct BattleCommandComponent_o **p_commandCardComponent; // x19
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int32_t layer; // w19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42186F2 & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandData_TypeInfo, item);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v7);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v8);
    sub_B0D8A4(&NGUITools_TypeInfo, v9);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&StringLiteral_15060/*"Unlit/Transparent Colored"*/, v13);
    sub_B0D8A4(&StringLiteral_4175/*"CommandCard"*/, v14);
    byte_42186F2 = 1;
  }
  if ( this->fields.tdEntity )
  {
    if ( this->fields.commandCardData )
    {
      CommandLimitCount = (DataManager_o *)ServantStatusNpComponent__GetCommandLimitCount(this, item, method);
      commandCardData = this->fields.commandCardData;
      if ( commandCardData )
      {
        commandCardData->fields.svtlimit = (int)CommandLimitCount;
        v17 = this->fields.commandCardData;
        CommandLimitCount = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( CommandLimitCount )
        {
          CommandLimitCount = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 CommandLimitCount,
                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( item )
          {
            v18 = (ServantLimitImageMaster_o *)CommandLimitCount;
            SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
            dispLimitCount = item->fields.dispLimitCount;
            v21 = SvtId;
            if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ImageLimitCount_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            }
            CommandLimitCount = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                   dispLimitCount,
                                                   0LL);
            if ( v18 )
            {
              CommandLimitCount = (DataManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     v18,
                                                     v21,
                                                     (int32_t)CommandLimitCount,
                                                     0LL);
              if ( v17 )
              {
                v17->fields._loadsvtLimit = (int)CommandLimitCount;
                CommandLimitCount = (DataManager_o *)this->fields.commandCardComponent;
                if ( CommandLimitCount )
                {
                  BattleCommandComponent__setData(
                    (BattleCommandComponent_o *)CommandLimitCount,
                    this->fields.commandCardData,
                    0LL,
                    0,
                    1,
                    0,
                    0LL);
                  CommandLimitCount = (DataManager_o *)this->fields.commandCardComponent;
                  if ( CommandLimitCount )
                  {
                    BattleCommandComponent__updateView(
                      (BattleCommandComponent_o *)CommandLimitCount,
                      1,
                      0,
                      1,
                      0,
                      this->fields.isCharaHide,
                      0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_39:
      sub_B0D97C(CommandLimitCount);
    }
    commandCardPrefab = this->fields.commandCardPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    CommandLimitCount = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCardPrefab,
                                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !CommandLimitCount )
      goto LABEL_39;
    v23 = (UnityEngine_GameObject_o *)CommandLimitCount;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)CommandLimitCount, 0LL);
    CommandLimitCount = (DataManager_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
    if ( !CommandLimitCount )
      goto LABEL_39;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)CommandLimitCount, 0LL);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v23, (System_String_o *)StringLiteral_4175/*"CommandCard"*/, 0LL);
    CommandLimitCount = (DataManager_o *)this->fields.commandCardBase;
    if ( !CommandLimitCount )
      goto LABEL_39;
    CommandLimitCount = (DataManager_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)CommandLimitCount,
                                           0LL);
    if ( !transform )
      goto LABEL_39;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)CommandLimitCount, 0LL);
    zero = UnityEngine_Vector3__get_zero(0LL);
    UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
    identity = UnityEngine_Quaternion__get_identity(0LL);
    UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
    v66.fields.x = x;
    v66.fields.y = y;
    v66.fields.z = z;
    UnityEngine_Transform__set_localScale(transform, v66, 0LL);
    UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
      v23,
      (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    CommandLimitCount = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v23,
                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !CommandLimitCount )
      goto LABEL_39;
    v28 = CommandLimitCount;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)CommandLimitCount, 110, 0LL);
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v28[2].fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)gameObject;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v28[2].fields.masterLoadThreads,
      gameObject,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    CommandLimitCount = (DataManager_o *)ServantStatusNpComponent__GetCommandLimitCount(this, item, v36);
    if ( !item )
      goto LABEL_39;
    cardType = this->fields.cardType;
    v38 = (int)CommandLimitCount;
    v39 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    v42 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v40, v41);
    BattleCommandData___ctor_18472988(v42, cardType, v39, v38, 0, 0LL);
    this->fields.commandCardData = v42;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.commandCardData,
      (System_Int32_array **)v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    v49 = this->fields.commandCardData;
    CommandLimitCount = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !CommandLimitCount )
      goto LABEL_39;
    MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        CommandLimitCount,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v51 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    v52 = item->fields.dispLimitCount;
    v53 = v51;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    CommandLimitCount = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v52, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_39;
    CommandLimitCount = (DataManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           MasterData_WarQuestSelectionMaster,
                                           v53,
                                           (int32_t)CommandLimitCount,
                                           0LL);
    if ( !v49 )
      goto LABEL_39;
    v49->fields._loadsvtLimit = (int)CommandLimitCount;
    tdEntity = this->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_39;
    v55 = this->fields.commandCardData;
    if ( !v55 )
      goto LABEL_39;
    v55->fields.treasureDvc = tdEntity->fields.id;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v28, this->fields.commandCardData, 0LL, 0, 1, 0, 0LL);
    BattleCommandComponent__setShader((BattleCommandComponent_o *)v28, (System_String_o *)StringLiteral_15060/*"Unlit/Transparent Colored"*/, 0LL);
    BattleCommandComponent__updateView((BattleCommandComponent_o *)v28, 1, 0, 1, 0, this->fields.isCharaHide, 0LL);
    this->fields.commandCardComponent = (struct BattleCommandComponent_o *)v28;
    p_commandCardComponent = &this->fields.commandCardComponent;
    sub_B0D840(
      (BattleServantConfConponent_o *)p_commandCardComponent,
      (System_Int32_array **)v28,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    CommandLimitCount = (DataManager_o *)*(p_commandCardComponent - 11);
    if ( !CommandLimitCount )
      goto LABEL_39;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)CommandLimitCount, 0LL);
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer(v23, layer, 0LL);
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
  UILabel_o *nameLabel; // x0
  struct UISprite_array *guageSpriteList; // x8
  __int64 v35; // x19
  int max_length; // w9
  __int64 v37; // x19
  __int64 v38; // x19
  TreasureDvcMaster_o *v39; // x19
  struct TreasureDvcEntity_o *v40; // x0
  struct TreasureDvcEntity_o **p_tdEntity; // x28
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x19
  __int64 v49; // x19
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t dispLimitCount; // w24
  ServantLimitAddMaster_o *v52; // x19
  int32_t LimitCountByImageLimitCostumeIn; // w24
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x25
  int32_t ServantImageLimitSealAfter; // w24
  UILabel_o *rubyLabel; // x19
  struct UILabel_o *v57; // x19
  System_String_o *name; // x1
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct TreasureDvcEntity_o *v60; // x8
  struct UILabel_o *npRankLabel; // x19
  System_String_o *rank; // x1
  struct TreasureDvcEntity_o *v63; // x8
  struct UILabel_o *npTypeLabel; // x19
  System_String_o *typeText; // x1
  struct TreasureDvcEntity_o *v66; // x8
  UILabel_o *npLevelLabel; // x24
  System_String_o *v68; // x25
  System_String_o *v69; // x0
  System_String_o *v70; // x1
  UILabel_o *maxGuageLabel; // x24
  System_String_o *v72; // x25
  Il2CppObject *v73; // x0
  UIWidget_o *explanationLabel; // x24
  int32_t *p_monitor; // x8
  __int64 v76; // x24
  __int64 v77; // x24
  TreasureDvcLvEntity_o *v78; // x0
  System_String_o *Detail; // x19
  ServantStatusNpComponent_c *v80; // x0
  UILabel_o *v81; // x24
  int32_t v82; // w28
  int32_t SvtId; // w0
  int32_t *p_cardId; // x8
  int32_t v85; // w9
  struct UILabel_o *v86; // x8
  int32_t mHeight; // w19
  int32_t monitor_high; // w8
  struct UILabel_o *v89; // x9
  int32_t v90; // w19
  int32_t v91; // w28
  int32_t v92; // w27
  UILabel_o *condLabel; // x19
  float MULTI_NP_POS_Y; // s0
  double v95; // d0
  int32_t v96; // w19
  __int64 v97; // x24
  __int64 v98; // x24
  ServantTreasureDeviceReleaseMaster_o *v99; // x24
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_o *v107; // x1
  int v108; // w19
  int v109; // w8
  struct UISprite_array *v110; // x8
  __int64 v111; // x21
  int v112; // w22
  int v113; // w9
  UISprite_o *v114; // x19
  System_String_o *v115; // x0
  __int64 v116; // x0
  int32_t v117; // [xsp+0h] [xbp-80h]
  int32_t v118; // [xsp+4h] [xbp-7Ch]
  System_String_o *value; // [xsp+10h] [xbp-70h]
  int32_t v120; // [xsp+1Ch] [xbp-64h]
  int v122; // [xsp+24h] [xbp-5Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42186F1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&idx);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v21);
    sub_B0D8A4(&DataManager_TypeInfo, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Clear__, v23);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v24);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v25);
    sub_B0D8A4(&ServantStatusNpComponent_TypeInfo, v26);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27);
    sub_B0D8A4(&StringLiteral_19600/*"img_npgage_"*/, v28);
    sub_B0D8A4(&StringLiteral_12028/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, v29);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v30);
    sub_B0D8A4(&StringLiteral_19601/*"img_npgage_bg"*/, v31);
    sub_B0D8A4(&StringLiteral_1/*""*/, v32);
    byte_42186F1 = 1;
  }
  entity = 0LL;
  v122 = 0;
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.rubyLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.npRankLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.npTypeLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.npLevelLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.maxGuageLabel;
  if ( !nameLabel )
    goto LABEL_16;
  value = title;
  v120 = idx;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  guageSpriteList = this->fields.guageSpriteList;
  if ( !guageSpriteList )
    goto LABEL_16;
  v35 = 0LL;
  while ( 1 )
  {
    max_length = guageSpriteList->max_length;
    if ( (int)v35 >= max_length )
      break;
    if ( (unsigned int)v35 >= max_length )
    {
LABEL_166:
      v116 = sub_B0D9A8(nameLabel);
      sub_B0D948(v116, 0LL);
    }
    nameLabel = (UILabel_o *)guageSpriteList->m_Items[v35];
    if ( nameLabel )
    {
      UISprite__set_spriteName((UISprite_o *)nameLabel, (System_String_o *)StringLiteral_19601/*"img_npgage_bg"*/, 0LL);
      guageSpriteList = this->fields.guageSpriteList;
      ++v35;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_16;
  }
  if ( tdId < 1 )
    return;
  v37 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v38 = **(_QWORD **)(v37 + 192);
  if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
    sub_AA65A4(v38);
  nameLabel = **(UILabel_o ***)(v38 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !item )
    goto LABEL_16;
  v39 = (TreasureDvcMaster_o *)nameLabel;
  nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( !v39 )
    goto LABEL_16;
  v40 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v39, (int32_t)nameLabel, tdId, 0LL);
  this->fields.tdEntity = v40;
  p_tdEntity = &this->fields.tdEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tdEntity,
    (System_Int32_array **)v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  if ( !this->fields.tdEntity )
    return;
  v48 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v49 = **(_QWORD **)(v48 + 192);
  if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
    sub_AA65A4(v49);
  nameLabel = **(UILabel_o ***)(v49 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)nameLabel,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  dispLimitCount = item->fields.dispLimitCount;
  v52 = (ServantLimitAddMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  v118 = condLimitCount;
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(dispLimitCount, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 (int32_t)nameLabel,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( !v52 )
    goto LABEL_16;
  ServantLimitAddMaster__TryGetEntity(v52, &entity, (int32_t)nameLabel, ServantImageLimitSealAfter, 0LL);
  nameLabel = (UILabel_o *)item->fields.svtEntity;
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue((ServantEntity_o *)nameLabel, 0LL);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0LL),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_16;
    rubyLabel = this->fields.rubyLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDRuby(entity, 0LL);
    if ( !rubyLabel )
      goto LABEL_16;
    UILabel__set_text(rubyLabel, (System_String_o *)nameLabel, 0LL);
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_16;
    v57 = this->fields.nameLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDName(entity, 0LL);
    if ( !v57 )
      goto LABEL_16;
    name = (System_String_o *)nameLabel;
    nameLabel = v57;
  }
  else
  {
    tdEntity = this->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_16;
    nameLabel = this->fields.rubyLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, tdEntity->fields.ruby, 0LL);
    v60 = this->fields.tdEntity;
    if ( !v60 )
      goto LABEL_16;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_16;
    name = v60->fields.name;
  }
  UILabel__set_text(nameLabel, name, 0LL);
  nameLabel = (UILabel_o *)item->fields.svtEntity;
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue((ServantEntity_o *)nameLabel, 0LL);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDRank(entity, 0LL),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_16;
    npRankLabel = this->fields.npRankLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDRank(entity, 0LL);
    if ( !npRankLabel )
      goto LABEL_16;
    rank = (System_String_o *)nameLabel;
    nameLabel = npRankLabel;
  }
  else
  {
    v63 = this->fields.tdEntity;
    if ( !v63 )
      goto LABEL_16;
    nameLabel = this->fields.npRankLabel;
    if ( !nameLabel )
      goto LABEL_16;
    rank = v63->fields.rank;
  }
  UILabel__set_text(nameLabel, rank, 0LL);
  nameLabel = (UILabel_o *)item->fields.svtEntity;
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue((ServantEntity_o *)nameLabel, 0LL);
  if ( entity
    && ((unsigned __int8)nameLabel & 1) != 0
    && (nameLabel = (UILabel_o *)ServantLimitAddEntity__ExistOverwriteTDTypeText(entity, 0LL),
        ((unsigned __int8)nameLabel & 1) != 0) )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_16;
    npTypeLabel = this->fields.npTypeLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverWriteTDTypeText(entity, 0LL);
    if ( !npTypeLabel )
      goto LABEL_16;
    typeText = (System_String_o *)nameLabel;
    nameLabel = npTypeLabel;
  }
  else
  {
    v66 = this->fields.tdEntity;
    if ( !v66 )
      goto LABEL_16;
    nameLabel = this->fields.npTypeLabel;
    if ( !nameLabel )
      goto LABEL_16;
    typeText = v66->fields.typeText;
  }
  UILabel__set_text(nameLabel, typeText, 0LL);
  if ( !tdInfo )
    goto LABEL_16;
  npLevelLabel = this->fields.npLevelLabel;
  if ( tdInfo->fields.lv <= 0 )
  {
    v70 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !npLevelLabel )
      goto LABEL_16;
  }
  else
  {
    v68 = System_Int32__ToString((int)tdInfo + 20, 0LL);
    v69 = System_Int32__ToString((int)tdInfo + 24, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_43852188(v68, (System_String_o *)StringLiteral_879/*"/"*/, v69, 0LL);
    v70 = (System_String_o *)nameLabel;
    if ( !npLevelLabel )
      goto LABEL_16;
  }
  UILabel__set_text(npLevelLabel, v70, 0LL);
  maxGuageLabel = this->fields.maxGuageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_12028/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0LL);
  v122 = 100 * tdInfo->fields.guageCount;
  v73 = (Il2CppObject *)System_Int32__ToString((int32_t)&v122, 0LL);
  nameLabel = (UILabel_o *)System_String__Format(v72, v73, 0LL);
  if ( !maxGuageLabel )
    goto LABEL_16;
  UILabel__set_text(maxGuageLabel, (System_String_o *)nameLabel, 0LL);
  explanationLabel = (UIWidget_o *)this->fields.explanationLabel;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  if ( multiFlg )
  {
    if ( (WORD1(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    p_monitor = (int32_t *)&nameLabel->fields.onPostFill->monitor + 1;
    if ( !explanationLabel )
      goto LABEL_16;
  }
  else
  {
    if ( (WORD1(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    p_monitor = (int32_t *)&nameLabel->fields.onPostFill->monitor;
    if ( !explanationLabel )
      goto LABEL_16;
  }
  UIWidget__set_height(explanationLabel, *p_monitor, 0LL);
  v76 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v76 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v77 = **(_QWORD **)(v76 + 192);
  if ( (*(_BYTE *)(v77 + 306) & 1) == 0 )
    sub_AA65A4(v77);
  nameLabel = **(UILabel_o ***)(v77 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !*p_tdEntity || !nameLabel )
    goto LABEL_16;
  v78 = TreasureDvcLvMaster__GetEntity(
          (TreasureDvcLvMaster_o *)nameLabel,
          (*p_tdEntity)->fields.id,
          tdInfo->fields.lv,
          0LL);
  if ( v78 )
    Detail = TreasureDvcLvEntity__getDetail(v78, 0LL);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v80 = ServantStatusNpComponent_TypeInfo;
  v81 = this->fields.explanationLabel;
  if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v80 = ServantStatusNpComponent_TypeInfo;
  }
  v82 = WrapControlText__textBBCodeAdjust(
          v81,
          Detail,
          v80->static_fields->DETAIL_FONT_SIZE,
          v80->static_fields->DETAIL_FONT_SIZE,
          v80->static_fields->DETAIL_MAX_HEIGHT,
          0LL);
  SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
  nameLabel = (UILabel_o *)ServantTreasureDvcMaster__getEntityFromIDID(SvtId, tdId, 0LL);
  p_cardId = &tdInfo->fields.cardId;
  if ( nameLabel )
    p_cardId = (int32_t *)&nameLabel->fields.mGo;
  v85 = *p_cardId;
  v86 = this->fields.explanationLabel;
  this->fields.cardType = v85;
  if ( !v86 )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  mHeight = v86->fields.mHeight;
  if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  }
  v117 = v82;
  monitor_high = HIDWORD(nameLabel->fields.onPostFill->monitor);
  if ( mHeight <= monitor_high )
  {
    v91 = isCharaHide;
    v92 = 0;
  }
  else
  {
    v89 = this->fields.explanationLabel;
    if ( !v89 )
      goto LABEL_16;
    v90 = v89->fields.mHeight;
    v91 = isCharaHide;
    if ( (HIBYTE(nameLabel->fields.mLocalToPanel.fields.m32) & 4) != 0 && !LODWORD(nameLabel->fields.panel) )
    {
      j_il2cpp_runtime_class_init_0(nameLabel);
      monitor_high = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v92 = v90 - monitor_high;
  }
  nameLabel = (UILabel_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  if ( !nameLabel
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B0D97C(nameLabel);
  }
  if ( multiFlg )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0LL);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, value, 0LL);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    condLabel = this->fields.condLabel;
    if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    }
    if ( !condLabel )
      goto LABEL_16;
    UILabel__SetCondensedScale(condLabel, ServantStatusNpComponent_TypeInfo->static_fields->COND_TITLE_MAX_WIDTH, 0LL);
    GameObjectExtensions__SetLocalPositionY(
      this->fields.npObject,
      ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y,
      0LL);
    MULTI_NP_POS_Y = ServantStatusNpComponent_TypeInfo->static_fields->MULTI_NP_POS_Y;
    if ( MULTI_NP_POS_Y == INFINITY )
      v95 = -MULTI_NP_POS_Y;
    else
      v95 = MULTI_NP_POS_Y;
    v96 = UnityEngine_Mathf__Abs_40818848((int)v95, 0LL);
    if ( v120 < 1 )
      this->fields.commandLimitCountAdjust = v118 - 1;
    else
      this->fields.commandLimitCountFix = v118;
    v97 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v97 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v98 = **(_QWORD **)(v97 + 192);
    if ( (*(_BYTE *)(v98 + 306) & 1) == 0 )
      sub_AA65A4(v98);
    nameLabel = **(UILabel_o ***)(v98 + 184);
    if ( !nameLabel )
      goto LABEL_16;
    v99 = (ServantTreasureDeviceReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)nameLabel,
                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !v99 )
      goto LABEL_16;
    v92 += v96;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v99, (int32_t)nameLabel, 0LL);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.costumeIdHash,
      (System_Int32_array **)CorrespondsCostume,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
    nameLabel = this->fields.condLabel;
    if ( !nameLabel )
      goto LABEL_16;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    nameLabel = (UILabel_o *)this->fields.costumeIdHash;
    if ( !nameLabel )
      goto LABEL_16;
    System_Collections_Generic_HashSet_int___Clear(
      (System_Collections_Generic_HashSet_int__o *)nameLabel,
      (const MethodInfo_2C75614 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  }
  if ( tdInfo->fields.id == tdId )
  {
    nameLabel = (UILabel_o *)this->fields.maskBase;
    if ( !nameLabel )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
    nameLabel = this->fields.maskInfoLabel;
    if ( !nameLabel )
      goto LABEL_16;
    v107 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
      nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
    }
    if ( !this->fields.maskBase )
      goto LABEL_16;
    v108 = HIDWORD(nameLabel->fields.onPostFill->monitor) * v117;
    UnityEngine_GameObject__SetActive(this->fields.maskBase, 1, 0LL);
    v109 = v108 >= 0 ? v108 : v108 + 1;
    GameObjectExtensions__SetLocalPositionY(
      this->fields.maskBase,
      ServantStatusNpComponent_TypeInfo->static_fields->MASK_BASE_POS_Y - (float)(v109 >> 1),
      0LL);
    nameLabel = (UILabel_o *)this->fields.maskSprite;
    if ( !nameLabel )
      goto LABEL_16;
    UIWidget__set_height(
      (UIWidget_o *)nameLabel,
      ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT + v108,
      0LL);
    nameLabel = this->fields.maskInfoLabel;
    if ( !nameLabel )
      goto LABEL_16;
    v107 = closedMessage;
  }
  UILabel__set_text(nameLabel, v107, 0LL);
  v110 = this->fields.guageSpriteList;
  this->fields.isCharaHide = v91 == 1;
  if ( !v110 )
    goto LABEL_16;
  v111 = 0LL;
  v112 = 100;
  while ( 1 )
  {
    v113 = v110->max_length;
    if ( (int)v111 >= v113 || (int)v111 >= tdInfo->fields.guageCount )
      break;
    if ( (unsigned int)v111 >= v113 )
      goto LABEL_166;
    v114 = v110->m_Items[v111];
    v122 = v112;
    v115 = System_Int32__ToString((int32_t)&v122, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_43849904((System_String_o *)StringLiteral_19600/*"img_npgage_"*/, v115, 0LL);
    if ( v114 )
    {
      UISprite__set_spriteName(v114, (System_String_o *)nameLabel, 0LL);
      v110 = this->fields.guageSpriteList;
      ++v111;
      v112 += 100;
      if ( v110 )
        continue;
    }
    goto LABEL_16;
  }
  this->fields._Adjust_k__BackingField = v92;
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