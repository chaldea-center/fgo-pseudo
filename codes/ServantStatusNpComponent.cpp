void __fastcall ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  ServantStatusNpComponent_c *v1; // x8

  if ( (byte_42B429D & 1) == 0 )
  {
    sub_B52984(&ServantStatusNpComponent_TypeInfo);
    byte_42B429D = 1;
  }
  ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_MAX_HEIGHT = 500;
  v1 = ServantStatusNpComponent_TypeInfo;
  ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_DEFAULT_HEIGHT = 57;
  v1->static_fields->DETAIL_LINE_HEIGHT = 19;
  v1->static_fields->MULTI_NP_POS_Y = -50.0;
  v1->static_fields->MASK_BASE_POS_Y = -11.0;
  v1->static_fields->MASK_DEFAULT_HEIGHT = 252;
  v1->static_fields->COND_TITLE_MAX_WIDTH = 540;
}


void __fastcall ServantStatusNpComponent___ctor(ServantStatusNpComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B429C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_42B429C = 1;
  }
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  this->fields.costumeIdHash = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.costumeIdHash,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusNpComponent__GetCommandLimitCount(
        ServantStatusNpComponent_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusNpComponent_o *v4; // x20
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w0
  int32_t commandLimitCountFix; // w22
  int32_t v8; // w21
  int32_t commandLimitCountAdjust; // w21
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x20

  v4 = this;
  if ( (byte_42B429B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_B52984(&ImageLimitCount_TypeInfo);
    this = (ServantStatusNpComponent_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B429B = 1;
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
  v8 = LimitCountByImageLimitCostumeIn;
  if ( (commandLimitCountFix & 0x80000000) != 0 || LimitCountByImageLimitCostumeIn == commandLimitCountFix )
  {
    commandLimitCountFix = LimitCountByImageLimitCostumeIn;
  }
  else if ( LimitCountByImageLimitCostumeIn >= 11 )
  {
    this = (ServantStatusNpComponent_o *)v4->fields.costumeIdHash;
    if ( !this )
      goto LABEL_24;
    commandLimitCountFix = v8;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            v8,
            (const MethodInfo_24D9CCC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
           (const MethodInfo_24D9CCC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
    }
  }
  this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)this,
                                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL),
        !MasterData_WarQuestSelectionMaster) )
  {
LABEL_24:
    sub_B52A5C(this, item);
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
  DataManager_o *CommandLimitCount; // x0
  __int64 v6; // x1
  struct BattleCommandData_o *commandCardData; // x8
  struct BattleCommandData_o *v8; // x23
  ServantLimitImageMaster_o *v9; // x21
  int32_t SvtId; // w0
  int32_t dispLimitCount; // w22
  int32_t v12; // w20
  struct UnityEngine_GameObject_o *commandCardPrefab; // x21
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  DataManager_o *v19; // x23
  System_Int32_array **gameObject; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  int32_t cardType; // w25
  int32_t v29; // w24
  int32_t v30; // w26
  BattleCommandData_o *v31; // x27
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct BattleCommandData_o *v38; // x25
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t v40; // w0
  int32_t v41; // w24
  int32_t v42; // w20
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct BattleCommandData_o *v44; // x9
  struct BattleCommandComponent_o **p_commandCardComponent; // x19
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t layer; // w19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B429A & 1) == 0 )
  {
    sub_B52984(&BattleCommandData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&NGUITools_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_15113/*"Unlit/Transparent Colored"*/);
    sub_B52984(&StringLiteral_4198/*"CommandCard"*/);
    byte_42B429A = 1;
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
        v8 = this->fields.commandCardData;
        CommandLimitCount = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( CommandLimitCount )
        {
          CommandLimitCount = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 CommandLimitCount,
                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( item )
          {
            v9 = (ServantLimitImageMaster_o *)CommandLimitCount;
            SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
            dispLimitCount = item->fields.dispLimitCount;
            v12 = SvtId;
            if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ImageLimitCount_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            }
            CommandLimitCount = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                   dispLimitCount,
                                                   0LL);
            if ( v9 )
            {
              CommandLimitCount = (DataManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     v9,
                                                     v12,
                                                     (int32_t)CommandLimitCount,
                                                     0LL);
              if ( v8 )
              {
                v8->fields._loadsvtLimit = (int)CommandLimitCount;
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
      sub_B52A5C(CommandLimitCount, v6);
    }
    commandCardPrefab = this->fields.commandCardPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    CommandLimitCount = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCardPrefab,
                                           (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !CommandLimitCount )
      goto LABEL_39;
    v14 = (UnityEngine_GameObject_o *)CommandLimitCount;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)CommandLimitCount, 0LL);
    CommandLimitCount = (DataManager_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
    if ( !CommandLimitCount )
      goto LABEL_39;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)CommandLimitCount, 0LL);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v14, (System_String_o *)StringLiteral_4198/*"CommandCard"*/, 0LL);
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
    v55.fields.x = x;
    v55.fields.y = y;
    v55.fields.z = z;
    UnityEngine_Transform__set_localScale(transform, v55, 0LL);
    UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
      v14,
      (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    CommandLimitCount = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v14,
                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !CommandLimitCount )
      goto LABEL_39;
    v19 = CommandLimitCount;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)CommandLimitCount, 110, 0LL);
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v19[2].fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)gameObject;
    sub_B52920(
      (BattleServantConfConponent_o *)&v19[2].fields.masterLoadThreads,
      gameObject,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    CommandLimitCount = (DataManager_o *)ServantStatusNpComponent__GetCommandLimitCount(this, item, v27);
    if ( !item )
      goto LABEL_39;
    cardType = this->fields.cardType;
    v29 = (int)CommandLimitCount;
    v30 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    v31 = (BattleCommandData_o *)sub_B52A54(BattleCommandData_TypeInfo);
    BattleCommandData___ctor_19012556(v31, cardType, v30, v29, 0, 0LL);
    this->fields.commandCardData = v31;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.commandCardData,
      (System_Int32_array **)v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    v38 = this->fields.commandCardData;
    CommandLimitCount = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !CommandLimitCount )
      goto LABEL_39;
    MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        CommandLimitCount,
                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v40 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    v41 = item->fields.dispLimitCount;
    v42 = v40;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    CommandLimitCount = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v41, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_39;
    CommandLimitCount = (DataManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           MasterData_WarQuestSelectionMaster,
                                           v42,
                                           (int32_t)CommandLimitCount,
                                           0LL);
    if ( !v38 )
      goto LABEL_39;
    v38->fields._loadsvtLimit = (int)CommandLimitCount;
    tdEntity = this->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_39;
    v44 = this->fields.commandCardData;
    if ( !v44 )
      goto LABEL_39;
    v44->fields.treasureDvc = tdEntity->fields.id;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v19, this->fields.commandCardData, 0LL, 0, 1, 0, 0LL);
    BattleCommandComponent__setShader((BattleCommandComponent_o *)v19, (System_String_o *)StringLiteral_15113/*"Unlit/Transparent Colored"*/, 0LL);
    BattleCommandComponent__updateView((BattleCommandComponent_o *)v19, 1, 0, 1, 0, this->fields.isCharaHide, 0LL);
    this->fields.commandCardComponent = (struct BattleCommandComponent_o *)v19;
    p_commandCardComponent = &this->fields.commandCardComponent;
    sub_B52920(
      (BattleServantConfConponent_o *)p_commandCardComponent,
      (System_Int32_array **)v19,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    CommandLimitCount = (DataManager_o *)*(p_commandCardComponent - 11);
    if ( !CommandLimitCount )
      goto LABEL_39;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)CommandLimitCount, 0LL);
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer(v14, layer, 0LL);
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
  int32_t v16; // w24
  UILabel_o *nameLabel; // x0
  struct UISprite_array *guageSpriteList; // x8
  __int64 v20; // x19
  int max_length; // w9
  __int64 v22; // x19
  __int64 v23; // x19
  TreasureDvcMaster_o *v24; // x19
  struct TreasureDvcEntity_o *v25; // x0
  struct TreasureDvcEntity_o **p_tdEntity; // x28
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x19
  __int64 v34; // x19
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t dispLimitCount; // w24
  ServantLimitAddMaster_o *v37; // x19
  int32_t LimitCountByImageLimitCostumeIn; // w24
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x25
  int32_t ServantImageLimitSealAfter; // w24
  UILabel_o *rubyLabel; // x19
  struct UILabel_o *v42; // x19
  System_String_o *name; // x1
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct TreasureDvcEntity_o *v45; // x8
  struct UILabel_o *npRankLabel; // x19
  System_String_o *rank; // x1
  struct TreasureDvcEntity_o *v48; // x8
  struct UILabel_o *npTypeLabel; // x19
  System_String_o *typeText; // x1
  struct TreasureDvcEntity_o *v51; // x8
  UILabel_o *npLevelLabel; // x24
  System_String_o *v53; // x25
  System_String_o *v54; // x0
  UILabel_o *maxGuageLabel; // x24
  System_String_o *v56; // x25
  Il2CppObject *v57; // x0
  UIWidget_o *explanationLabel; // x24
  int32_t *p_monitor; // x8
  __int64 v60; // x24
  __int64 v61; // x24
  TreasureDvcLvEntity_o *v62; // x0
  System_String_o *Detail; // x19
  ServantStatusNpComponent_c *v64; // x0
  UILabel_o *v65; // x24
  int32_t v66; // w28
  int32_t SvtId; // w0
  int32_t *p_cardId; // x8
  int32_t v69; // w9
  struct UILabel_o *v70; // x8
  int32_t mHeight; // w19
  int32_t monitor_high; // w8
  struct UILabel_o *v73; // x9
  int32_t v74; // w19
  int32_t v75; // w28
  int32_t v76; // w27
  UILabel_o *condLabel; // x19
  float MULTI_NP_POS_Y; // s0
  double v79; // d0
  int32_t v80; // w19
  __int64 v81; // x24
  __int64 v82; // x24
  ServantTreasureDeviceReleaseMaster_o *v83; // x24
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_o *v91; // x1
  int v92; // w19
  int v93; // w8
  struct UISprite_array *v94; // x8
  __int64 v95; // x21
  int v96; // w22
  int v97; // w9
  UISprite_o *v98; // x19
  System_String_o *v99; // x0
  __int64 v100; // x0
  int32_t v101; // [xsp+0h] [xbp-80h]
  int32_t v102; // [xsp+4h] [xbp-7Ch]
  System_String_o *value; // [xsp+10h] [xbp-70h]
  int v104; // [xsp+1Ch] [xbp-64h]
  int v106; // [xsp+24h] [xbp-5Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v16 = idx;
  if ( (byte_42B4299 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&ServantStatusNpComponent_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&StringLiteral_19685/*"img_npgage_"*/);
    sub_B52984(&StringLiteral_12083/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/);
    sub_B52984(&StringLiteral_886/*"/"*/);
    sub_B52984(&StringLiteral_19686/*"img_npgage_bg"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4299 = 1;
  }
  entity = 0LL;
  v106 = 0;
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
  v104 = v16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_16;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  guageSpriteList = this->fields.guageSpriteList;
  if ( !guageSpriteList )
    goto LABEL_16;
  v20 = 0LL;
  while ( 1 )
  {
    max_length = guageSpriteList->max_length;
    if ( (int)v20 >= max_length )
      break;
    if ( (unsigned int)v20 >= max_length )
    {
LABEL_166:
      v100 = sub_B52A88(nameLabel);
      sub_B52A28(v100, 0LL);
    }
    nameLabel = (UILabel_o *)guageSpriteList->m_Items[v20];
    if ( nameLabel )
    {
      UISprite__set_spriteName((UISprite_o *)nameLabel, (System_String_o *)StringLiteral_19686/*"img_npgage_bg"*/, 0LL);
      guageSpriteList = this->fields.guageSpriteList;
      ++v20;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_16;
  }
  if ( tdId < 1 )
    return;
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v23 = **(_QWORD **)(v22 + 192);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    sub_AEB684(v23);
  nameLabel = **(UILabel_o ***)(v23 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !item )
    goto LABEL_16;
  v24 = (TreasureDvcMaster_o *)nameLabel;
  nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( !v24 )
    goto LABEL_16;
  v25 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v24, (int32_t)nameLabel, tdId, 0LL);
  this->fields.tdEntity = v25;
  p_tdEntity = &this->fields.tdEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.tdEntity,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !this->fields.tdEntity )
    return;
  v33 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v34 = **(_QWORD **)(v33 + 192);
  if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
    sub_AEB684(v34);
  nameLabel = **(UILabel_o ***)(v34 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)nameLabel,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  dispLimitCount = item->fields.dispLimitCount;
  v37 = (ServantLimitAddMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  v102 = condLimitCount;
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(dispLimitCount, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 (int32_t)nameLabel,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( !v37 )
    goto LABEL_16;
  ServantLimitAddMaster__TryGetEntity(v37, &entity, (int32_t)nameLabel, ServantImageLimitSealAfter, 0LL);
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
    v42 = this->fields.nameLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDName(entity, 0LL);
    if ( !v42 )
      goto LABEL_16;
    name = (System_String_o *)nameLabel;
    nameLabel = v42;
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
    v45 = this->fields.tdEntity;
    if ( !v45 )
      goto LABEL_16;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_16;
    name = v45->fields.name;
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
    v48 = this->fields.tdEntity;
    if ( !v48 )
      goto LABEL_16;
    nameLabel = this->fields.npRankLabel;
    if ( !nameLabel )
      goto LABEL_16;
    rank = v48->fields.rank;
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
    v51 = this->fields.tdEntity;
    if ( !v51 )
      goto LABEL_16;
    nameLabel = this->fields.npTypeLabel;
    if ( !nameLabel )
      goto LABEL_16;
    typeText = v51->fields.typeText;
  }
  UILabel__set_text(nameLabel, typeText, 0LL);
  if ( !tdInfo )
    goto LABEL_16;
  npLevelLabel = this->fields.npLevelLabel;
  if ( tdInfo->fields.lv <= 0 )
  {
    *(_QWORD *)&idx = StringLiteral_1/*""*/;
    if ( !npLevelLabel )
      goto LABEL_16;
  }
  else
  {
    v53 = System_Int32__ToString((int)tdInfo + 20, 0LL);
    v54 = System_Int32__ToString((int)tdInfo + 24, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_44570600(v53, (System_String_o *)StringLiteral_886/*"/"*/, v54, 0LL);
    *(_QWORD *)&idx = nameLabel;
    if ( !npLevelLabel )
      goto LABEL_16;
  }
  UILabel__set_text(npLevelLabel, *(System_String_o **)&idx, 0LL);
  maxGuageLabel = this->fields.maxGuageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12083/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0LL);
  v106 = 100 * tdInfo->fields.guageCount;
  v57 = (Il2CppObject *)System_Int32__ToString((int32_t)&v106, 0LL);
  nameLabel = (UILabel_o *)System_String__Format(v56, v57, 0LL);
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
  v60 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v60 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v61 = **(_QWORD **)(v60 + 192);
  if ( (*(_BYTE *)(v61 + 306) & 1) == 0 )
    sub_AEB684(v61);
  nameLabel = **(UILabel_o ***)(v61 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !*p_tdEntity || !nameLabel )
    goto LABEL_16;
  v62 = TreasureDvcLvMaster__GetEntity(
          (TreasureDvcLvMaster_o *)nameLabel,
          (*p_tdEntity)->fields.id,
          tdInfo->fields.lv,
          0LL);
  if ( v62 )
    Detail = TreasureDvcLvEntity__getDetail(v62, 0LL);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v64 = ServantStatusNpComponent_TypeInfo;
  v65 = this->fields.explanationLabel;
  if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v64 = ServantStatusNpComponent_TypeInfo;
  }
  v66 = WrapControlText__textBBCodeAdjust(
          v65,
          Detail,
          v64->static_fields->DETAIL_FONT_SIZE,
          v64->static_fields->DETAIL_FONT_SIZE,
          v64->static_fields->DETAIL_MAX_HEIGHT,
          0LL);
  SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
  nameLabel = (UILabel_o *)ServantTreasureDvcMaster__getEntityFromIDID(SvtId, tdId, 0LL);
  p_cardId = &tdInfo->fields.cardId;
  if ( nameLabel )
    p_cardId = (int32_t *)&nameLabel->fields.mGo;
  v69 = *p_cardId;
  v70 = this->fields.explanationLabel;
  this->fields.cardType = v69;
  if ( !v70 )
    goto LABEL_16;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  mHeight = v70->fields.mHeight;
  if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  }
  v101 = v66;
  monitor_high = HIDWORD(nameLabel->fields.onPostFill->monitor);
  if ( mHeight <= monitor_high )
  {
    v75 = isCharaHide;
    v76 = 0;
  }
  else
  {
    v73 = this->fields.explanationLabel;
    if ( !v73 )
      goto LABEL_16;
    v74 = v73->fields.mHeight;
    v75 = isCharaHide;
    if ( (HIBYTE(nameLabel->fields.mLocalToPanel.fields.m32) & 4) != 0 && !LODWORD(nameLabel->fields.panel) )
    {
      j_il2cpp_runtime_class_init_0(nameLabel);
      monitor_high = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v76 = v74 - monitor_high;
  }
  nameLabel = (UILabel_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  if ( !nameLabel
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B52A5C(nameLabel, *(_QWORD *)&idx);
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
      v79 = -MULTI_NP_POS_Y;
    else
      v79 = MULTI_NP_POS_Y;
    v80 = UnityEngine_Mathf__Abs_41524992((int)v79, 0LL);
    if ( v104 < 1 )
      this->fields.commandLimitCountAdjust = v102 - 1;
    else
      this->fields.commandLimitCountFix = v102;
    v81 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v81 + 306) & 1) == 0 )
      sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v82 = **(_QWORD **)(v81 + 192);
    if ( (*(_BYTE *)(v82 + 306) & 1) == 0 )
      sub_AEB684(v82);
    nameLabel = **(UILabel_o ***)(v82 + 184);
    if ( !nameLabel )
      goto LABEL_16;
    v83 = (ServantTreasureDeviceReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)nameLabel,
                                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    nameLabel = (UILabel_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !v83 )
      goto LABEL_16;
    v76 += v80;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v83, (int32_t)nameLabel, 0LL);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.costumeIdHash,
      (System_Int32_array **)CorrespondsCostume,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
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
      (const MethodInfo_24D9C60 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
    v91 = (System_String_o *)StringLiteral_1/*""*/;
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
    v92 = HIDWORD(nameLabel->fields.onPostFill->monitor) * v101;
    UnityEngine_GameObject__SetActive(this->fields.maskBase, 1, 0LL);
    v93 = v92 >= 0 ? v92 : v92 + 1;
    GameObjectExtensions__SetLocalPositionY(
      this->fields.maskBase,
      ServantStatusNpComponent_TypeInfo->static_fields->MASK_BASE_POS_Y - (float)(v93 >> 1),
      0LL);
    nameLabel = (UILabel_o *)this->fields.maskSprite;
    if ( !nameLabel )
      goto LABEL_16;
    UIWidget__set_height(
      (UIWidget_o *)nameLabel,
      ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT + v92,
      0LL);
    nameLabel = this->fields.maskInfoLabel;
    if ( !nameLabel )
      goto LABEL_16;
    v91 = closedMessage;
  }
  UILabel__set_text(nameLabel, v91, 0LL);
  v94 = this->fields.guageSpriteList;
  this->fields.isCharaHide = v75 == 1;
  if ( !v94 )
    goto LABEL_16;
  v95 = 0LL;
  v96 = 100;
  while ( 1 )
  {
    v97 = v94->max_length;
    if ( (int)v95 >= v97 || (int)v95 >= tdInfo->fields.guageCount )
      break;
    if ( (unsigned int)v95 >= v97 )
      goto LABEL_166;
    v98 = v94->m_Items[v95];
    v106 = v96;
    v99 = System_Int32__ToString((int32_t)&v106, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_44568316((System_String_o *)StringLiteral_19685/*"img_npgage_"*/, v99, 0LL);
    if ( v98 )
    {
      UISprite__set_spriteName(v98, (System_String_o *)nameLabel, 0LL);
      v94 = this->fields.guageSpriteList;
      ++v95;
      v96 += 100;
      if ( v94 )
        continue;
    }
    goto LABEL_16;
  }
  this->fields._Adjust_k__BackingField = v76;
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