void __fastcall ServantStatusNpComponent___cctor(const MethodInfo *method)
{
  ServantStatusNpComponent_c *v1; // x8

  if ( (byte_43543C6 & 1) == 0 )
  {
    sub_B70694(&ServantStatusNpComponent_TypeInfo);
    byte_43543C6 = 1;
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

  if ( (byte_43543C5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_43543C5 = 1;
  }
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
  this->fields.costumeIdHash = v3;
  sub_B70630(
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
  if ( (byte_43543C4 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    this = (ServantStatusNpComponent_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43543C4 = 1;
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
            (const MethodInfo_2EAE4F8 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
           (const MethodInfo_2EAE4F8 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      commandLimitCountAdjust = v4->fields.commandLimitCountAdjust;
    }
  }
  this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)this,
                                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetSvtId(item, 1, 0LL),
        !MasterData_WarQuestSelectionMaster) )
  {
LABEL_24:
    sub_B7076C(this, item);
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
  ServantStatusNpComponent_o *v4; // x19
  int32_t SvtId; // w20
  const MethodInfo *v6; // x2
  int32_t CommandLimitCount; // w23
  struct BattleCommandData_o *commandCardData; // x8
  int32_t v9; // w21
  struct BattleCommandData_o *v10; // x23
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *commandCardPrefab; // x20
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  ServantStatusNpComponent_o *v18; // x23
  System_Int32_array **gameObject; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t v26; // w24
  const MethodInfo *v27; // x2
  int32_t v28; // w25
  int32_t DispLimitCount; // w0
  int32_t cardType; // w26
  int32_t v31; // w21
  BattleCommandData_o *v32; // x27
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct BattleCommandData_o *v39; // x25
  ServantLimitImageMaster_o *v40; // x22
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct BattleCommandData_o *v42; // x9
  BattleServantConfConponent_o *p_commandCardComponent; // x19
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int32_t layer; // w19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_43543C3 & 1) == 0 )
  {
    sub_B70694(&BattleCommandData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&NGUITools_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_15201/*"Unlit/Transparent Colored"*/);
    this = (ServantStatusNpComponent_o *)sub_B70694(&StringLiteral_4240/*"CommandCard"*/);
    byte_43543C3 = 1;
  }
  if ( v4->fields.tdEntity )
  {
    if ( v4->fields.commandCardData )
    {
      if ( item )
      {
        SvtId = ServantStatusListViewItem__GetSvtId(item, 1, 0LL);
        CommandLimitCount = ServantStatusNpComponent__GetCommandLimitCount(v4, item, v6);
        this = (ServantStatusNpComponent_o *)ServantStatusListViewItem__GetDispLimitCount(item, 1, 0LL);
        commandCardData = v4->fields.commandCardData;
        if ( commandCardData )
        {
          commandCardData->fields.svtlimit = CommandLimitCount;
          v9 = (int)this;
          v10 = v4->fields.commandCardData;
          this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)this,
                                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
            if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ImageLimitCount_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            }
            this = (ServantStatusNpComponent_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v9, 0LL);
            if ( MasterData_WarQuestSelectionMaster )
            {
              this = (ServantStatusNpComponent_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     MasterData_WarQuestSelectionMaster,
                                                     SvtId,
                                                     (int32_t)this,
                                                     0LL);
              if ( v10 )
              {
                v10->fields._loadsvtLimit = (int)this;
                this = (ServantStatusNpComponent_o *)v4->fields.commandCardComponent;
                if ( this )
                {
                  BattleCommandComponent__setData(
                    (BattleCommandComponent_o *)this,
                    v4->fields.commandCardData,
                    0LL,
                    0,
                    1,
                    0,
                    1,
                    0LL);
                  this = (ServantStatusNpComponent_o *)v4->fields.commandCardComponent;
                  if ( this )
                  {
                    BattleCommandComponent__updateView(
                      (BattleCommandComponent_o *)this,
                      1,
                      0,
                      1,
                      0,
                      v4->fields.isCharaHide,
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
      sub_B7076C(this, item);
    }
    commandCardPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v4->fields.commandCardPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ServantStatusNpComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           commandCardPrefab,
                                           (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_39;
    v13 = (UnityEngine_GameObject_o *)this;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
    if ( !this )
      goto LABEL_39;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v13, (System_String_o *)StringLiteral_4240/*"CommandCard"*/, 0LL);
    this = (ServantStatusNpComponent_o *)v4->fields.commandCardBase;
    if ( !this )
      goto LABEL_39;
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !transform )
      goto LABEL_39;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
    zero = UnityEngine_Vector3__get_zero(0LL);
    UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
    identity = UnityEngine_Quaternion__get_identity(0LL);
    UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
    v53.fields.x = x;
    v53.fields.y = y;
    v53.fields.z = z;
    UnityEngine_Transform__set_localScale(transform, v53, 0LL);
    UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
      v13,
      (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    this = (ServantStatusNpComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v13,
                                           (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    if ( !this )
      goto LABEL_39;
    v18 = this;
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0LL);
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
    v18[1].fields.explanationLabel = (struct UILabel_o *)gameObject;
    sub_B70630(
      (BattleServantConfConponent_o *)&v18[1].fields.explanationLabel,
      gameObject,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    if ( !item )
      goto LABEL_39;
    v26 = ServantStatusListViewItem__GetSvtId(item, 1, 0LL);
    v28 = ServantStatusNpComponent__GetCommandLimitCount(v4, item, v27);
    DispLimitCount = ServantStatusListViewItem__GetDispLimitCount(item, 1, 0LL);
    cardType = v4->fields.cardType;
    v31 = DispLimitCount;
    v32 = (BattleCommandData_o *)sub_B70764(BattleCommandData_TypeInfo);
    BattleCommandData___ctor_18919852(v32, cardType, v26, v28, 0, 0LL);
    v4->fields.commandCardData = v32;
    sub_B70630(
      (BattleServantConfConponent_o *)&v4->fields.commandCardData,
      (System_Int32_array **)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v39 = v4->fields.commandCardData;
    this = (ServantStatusNpComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_39;
    v40 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    this = (ServantStatusNpComponent_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v31, 0LL);
    if ( !v40 )
      goto LABEL_39;
    this = (ServantStatusNpComponent_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           v40,
                                           v26,
                                           (int32_t)this,
                                           0LL);
    if ( !v39 )
      goto LABEL_39;
    v39->fields._loadsvtLimit = (int)this;
    tdEntity = v4->fields.tdEntity;
    if ( !tdEntity )
      goto LABEL_39;
    v42 = v4->fields.commandCardData;
    if ( !v42 )
      goto LABEL_39;
    v42->fields.treasureDvc = tdEntity->fields.id;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v18, v4->fields.commandCardData, 0LL, 0, 1, 0, 1, 0LL);
    BattleCommandComponent__setShader((BattleCommandComponent_o *)v18, (System_String_o *)StringLiteral_15201/*"Unlit/Transparent Colored"*/, 0LL);
    BattleCommandComponent__updateView((BattleCommandComponent_o *)v18, 1, 0, 1, 0, v4->fields.isCharaHide, 0LL);
    v4->fields.commandCardComponent = (struct BattleCommandComponent_o *)v18;
    p_commandCardComponent = (BattleServantConfConponent_o *)&v4->fields.commandCardComponent;
    sub_B70630(p_commandCardComponent, (System_Int32_array **)v18, v44, v45, v46, v47, v48, v49);
    this = (ServantStatusNpComponent_o *)p_commandCardComponent[-1].fields.AppendSkillObj;
    if ( !this )
      goto LABEL_39;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer(v13, layer, 0LL);
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
  int32_t v16; // w23
  UILabel_o *nameLabel; // x0
  struct UISprite_array *guageSpriteList; // x8
  __int64 v20; // x23
  int max_length; // w9
  ServantEntity_o *ServantEntity; // x27
  __int64 v23; // x23
  __int64 v24; // x23
  TreasureDvcMaster_o *v25; // x23
  __int64 v26; // x24
  __int64 v27; // x25
  struct TreasureDvcEntity_o *v28; // x0
  struct TreasureDvcEntity_o **p_tdEntity; // x28
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x23
  __int64 v37; // x23
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t DispLimitCount; // w22
  int32_t LimitCountByImageLimitCostumeIn; // w22
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v42; // x25
  __int64 v43; // x26
  ServantLimitImageMaster_o *v44; // x24
  int32_t ServantImageLimitSealAfter; // w22
  int32_t v46; // w25
  UILabel_o *rubyLabel; // x22
  struct UILabel_o *v48; // x22
  System_String_o *name; // x1
  struct TreasureDvcEntity_o *tdEntity; // x8
  struct TreasureDvcEntity_o *v51; // x8
  struct UILabel_o *npRankLabel; // x22
  System_String_o *rank; // x1
  struct TreasureDvcEntity_o *v54; // x8
  struct UILabel_o *npTypeLabel; // x22
  System_String_o *typeText; // x1
  struct TreasureDvcEntity_o *v57; // x8
  UILabel_o *npLevelLabel; // x23
  System_String_o *v59; // x24
  System_String_o *v60; // x0
  UILabel_o *maxGuageLabel; // x23
  System_String_o *v62; // x24
  Il2CppObject *v63; // x0
  UIWidget_o *explanationLabel; // x23
  int32_t *p_monitor; // x8
  __int64 v66; // x23
  __int64 v67; // x23
  TreasureDvcLvEntity_o *v68; // x0
  System_String_o *Detail; // x22
  ServantStatusNpComponent_c *v70; // x0
  UILabel_o *v71; // x23
  int32_t v72; // w0
  __int64 v73; // x23
  __int64 v74; // x24
  int32_t v75; // w22
  int32_t v76; // w0
  const MethodInfo *v77; // x2
  int32_t *p_cardId; // x8
  int32_t v79; // w9
  struct UILabel_o *v80; // x8
  int32_t mHeight; // w23
  int32_t monitor_high; // w8
  struct UILabel_o *v83; // x9
  int32_t v84; // w23
  int32_t v85; // w28
  UILabel_o *condLabel; // x23
  float MULTI_NP_POS_Y; // s0
  double v88; // d0
  int32_t v89; // w23
  __int64 v90; // x24
  __int64 v91; // x24
  WarQuestSelectionMaster_o *v92; // x0
  __int64 v93; // x25
  __int64 v94; // x26
  ServantTreasureDeviceReleaseMaster_o *v95; // x24
  const MethodInfo *v96; // x2
  struct System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_String_o *v104; // x1
  int v105; // w21
  int v106; // w8
  struct UISprite_array *v107; // x8
  __int64 v108; // x22
  int v109; // w23
  int v110; // w9
  UISprite_o *v111; // x21
  System_String_o *v112; // x0
  __int64 v113; // x0
  int32_t v114; // [xsp+0h] [xbp-80h]
  int32_t v115; // [xsp+4h] [xbp-7Ch]
  System_String_o *value; // [xsp+10h] [xbp-70h]
  int v117; // [xsp+18h] [xbp-68h]
  int v119; // [xsp+24h] [xbp-5Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16

  v16 = idx;
  if ( (byte_43543C2 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&ServantStatusNpComponent_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&StringLiteral_19844/*"img_npgage_"*/);
    sub_B70694(&StringLiteral_12161/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/);
    sub_B70694(&StringLiteral_890/*"/"*/);
    sub_B70694(&StringLiteral_19845/*"img_npgage_bg"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43543C2 = 1;
  }
  entity = 0LL;
  v119 = 0;
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
  v117 = v16;
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
LABEL_176:
      v113 = sub_B70798(nameLabel);
      sub_B70738(v113, 0LL);
    }
    nameLabel = (UILabel_o *)guageSpriteList->m_Items[v20];
    if ( nameLabel )
    {
      UISprite__set_spriteName((UISprite_o *)nameLabel, (System_String_o *)StringLiteral_19845/*"img_npgage_bg"*/, 0LL);
      guageSpriteList = this->fields.guageSpriteList;
      ++v20;
      if ( guageSpriteList )
        continue;
    }
    goto LABEL_16;
  }
  v115 = condLimitCount;
  if ( tdId < 1 )
    return;
  if ( !item )
    goto LABEL_16;
  ServantEntity = ServantStatusListViewItem__GetServantEntity(item, 1, 0LL);
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v24 = **(_QWORD **)(v23 + 192);
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_B08394(v24);
  nameLabel = **(UILabel_o ***)(v24 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !ServantEntity )
    goto LABEL_16;
  v25 = (TreasureDvcMaster_o *)nameLabel;
  v27 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v26 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v121.fields.currentCryptoKey = v27;
  *(_QWORD *)&v121.fields.fakeValue = v26;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v121, 0LL);
  if ( !v25 )
    goto LABEL_16;
  v28 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v25, (int32_t)nameLabel, tdId, 0LL);
  this->fields.tdEntity = v28;
  p_tdEntity = &this->fields.tdEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.tdEntity,
    (System_Int32_array **)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( !this->fields.tdEntity )
    return;
  v36 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v37 = **(_QWORD **)(v36 + 192);
  if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
    sub_B08394(v37);
  nameLabel = **(UILabel_o ***)(v37 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)nameLabel,
                                                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  DispLimitCount = ServantStatusListViewItem__GetDispLimitCount(item, 1, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  v114 = tdId;
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v43 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v42 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v44 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v122.fields.currentCryptoKey = v43;
  *(_QWORD *)&v122.fields.fakeValue = v42;
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v122, 0LL);
  if ( !v44 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v44,
                                 (int32_t)nameLabel,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                             ServantEntity->fields.id,
                             0LL);
  v46 = v114;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_16;
  ServantLimitAddMaster__TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    (int32_t)nameLabel,
    ServantImageLimitSealAfter,
    0LL);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0LL);
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
    v48 = this->fields.nameLabel;
    nameLabel = (UILabel_o *)ServantLimitAddEntity__GetOverwriteTDName(entity, 0LL);
    if ( !v48 )
      goto LABEL_16;
    name = (System_String_o *)nameLabel;
    nameLabel = v48;
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
    v51 = this->fields.tdEntity;
    if ( !v51 )
      goto LABEL_16;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_16;
    name = v51->fields.name;
  }
  UILabel__set_text(nameLabel, name, 0LL);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0LL);
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
    v54 = this->fields.tdEntity;
    if ( !v54 )
      goto LABEL_16;
    nameLabel = this->fields.npRankLabel;
    if ( !nameLabel )
      goto LABEL_16;
    rank = v54->fields.rank;
  }
  UILabel__set_text(nameLabel, rank, 0LL);
  nameLabel = (UILabel_o *)ServantEntity__IsNameTrue(ServantEntity, 0LL);
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
    v57 = this->fields.tdEntity;
    if ( !v57 )
      goto LABEL_16;
    nameLabel = this->fields.npTypeLabel;
    if ( !nameLabel )
      goto LABEL_16;
    typeText = v57->fields.typeText;
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
    v59 = System_Int32__ToString((int)tdInfo + 20, 0LL);
    v60 = System_Int32__ToString((int)tdInfo + 24, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_44760452(v59, (System_String_o *)StringLiteral_890/*"/"*/, v60, 0LL);
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
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12161/*"SERVANT_STATUS_NP_GUAGE_MESSAGE"*/, 0LL);
  v119 = 100 * tdInfo->fields.guageCount;
  v63 = (Il2CppObject *)System_Int32__ToString((int32_t)&v119, 0LL);
  nameLabel = (UILabel_o *)System_String__Format(v62, v63, 0LL);
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
  v66 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v66 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v67 = **(_QWORD **)(v66 + 192);
  if ( (*(_BYTE *)(v67 + 306) & 1) == 0 )
    sub_B08394(v67);
  nameLabel = **(UILabel_o ***)(v67 + 184);
  if ( !nameLabel )
    goto LABEL_16;
  nameLabel = (UILabel_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)nameLabel,
                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !*p_tdEntity || !nameLabel )
    goto LABEL_16;
  v68 = TreasureDvcLvMaster__GetEntity(
          (TreasureDvcLvMaster_o *)nameLabel,
          (*p_tdEntity)->fields.id,
          tdInfo->fields.lv,
          0LL);
  if ( v68 )
    Detail = TreasureDvcLvEntity__getDetail(v68, 0LL);
  else
    Detail = (System_String_o *)StringLiteral_1/*""*/;
  v70 = ServantStatusNpComponent_TypeInfo;
  v71 = this->fields.explanationLabel;
  if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    v70 = ServantStatusNpComponent_TypeInfo;
  }
  v72 = WrapControlText__textBBCodeAdjust(
          v71,
          Detail,
          v70->static_fields->DETAIL_FONT_SIZE,
          v70->static_fields->DETAIL_FONT_SIZE,
          v70->static_fields->DETAIL_MAX_HEIGHT,
          0LL);
  v74 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
  v73 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
  v75 = v72;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v123.fields.currentCryptoKey = v74;
  *(_QWORD *)&v123.fields.fakeValue = v73;
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v123, 0LL);
  nameLabel = (UILabel_o *)ServantTreasureDvcMaster__getEntityFromIDID(v76, v114, v77);
  p_cardId = &tdInfo->fields.cardId;
  if ( nameLabel )
    p_cardId = (int32_t *)&nameLabel->fields.mGo;
  v79 = *p_cardId;
  v80 = this->fields.explanationLabel;
  this->fields.cardType = v79;
  if ( !v80 )
    goto LABEL_16;
  mHeight = v80->fields.mHeight;
  nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  if ( (BYTE3(ServantStatusNpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusNpComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusNpComponent_TypeInfo);
    nameLabel = (UILabel_o *)ServantStatusNpComponent_TypeInfo;
  }
  monitor_high = HIDWORD(nameLabel->fields.onPostFill->monitor);
  if ( mHeight <= monitor_high )
  {
    v85 = 0;
  }
  else
  {
    v83 = this->fields.explanationLabel;
    if ( !v83 )
      goto LABEL_16;
    v84 = v83->fields.mHeight;
    if ( (HIBYTE(nameLabel->fields.mLocalToPanel.fields.m32) & 4) != 0 && !LODWORD(nameLabel->fields.panel) )
    {
      j_il2cpp_runtime_class_init_0(nameLabel);
      monitor_high = ServantStatusNpComponent_TypeInfo->static_fields->DETAIL_LINE_HEIGHT;
    }
    v85 = v84 - monitor_high;
  }
  nameLabel = (UILabel_o *)this->fields.condSprite;
  *(_QWORD *)&this->fields.commandLimitCountFix = -1LL;
  if ( !nameLabel
    || (nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B7076C(nameLabel, *(_QWORD *)&idx);
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
      v88 = -MULTI_NP_POS_Y;
    else
      v88 = MULTI_NP_POS_Y;
    v89 = UnityEngine_Mathf__Abs_41127592((int)v88, 0LL);
    if ( v117 < 1 )
      this->fields.commandLimitCountAdjust = v115 - 1;
    else
      this->fields.commandLimitCountFix = v115;
    v90 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v90 + 306) & 1) == 0 )
      sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v91 = **(_QWORD **)(v90 + 192);
    if ( (*(_BYTE *)(v91 + 306) & 1) == 0 )
      sub_B08394(v91);
    nameLabel = **(UILabel_o ***)(v91 + 184);
    if ( !nameLabel )
      goto LABEL_16;
    v92 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)nameLabel,
            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    v94 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v93 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    v95 = (ServantTreasureDeviceReleaseMaster_o *)v92;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v124.fields.currentCryptoKey = v94;
    *(_QWORD *)&v124.fields.fakeValue = v93;
    nameLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v124, 0LL);
    if ( !v95 )
      goto LABEL_16;
    v85 += v89;
    CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v95, (int32_t)nameLabel, v96);
    this->fields.costumeIdHash = CorrespondsCostume;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.costumeIdHash,
      (System_Int32_array **)CorrespondsCostume,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
    v46 = v114;
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
      (const MethodInfo_2EAE48C *)Method_System_Collections_Generic_HashSet_int__Clear__);
  }
  if ( tdInfo->fields.id == v46 )
  {
    nameLabel = (UILabel_o *)this->fields.maskBase;
    if ( !nameLabel )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
    nameLabel = this->fields.maskInfoLabel;
    if ( !nameLabel )
      goto LABEL_16;
    v104 = (System_String_o *)StringLiteral_1/*""*/;
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
    v105 = HIDWORD(nameLabel->fields.onPostFill->monitor) * v75;
    UnityEngine_GameObject__SetActive(this->fields.maskBase, 1, 0LL);
    v106 = v105 >= 0 ? v105 : v105 + 1;
    GameObjectExtensions__SetLocalPositionY(
      this->fields.maskBase,
      ServantStatusNpComponent_TypeInfo->static_fields->MASK_BASE_POS_Y - (float)(v106 >> 1),
      0LL);
    nameLabel = (UILabel_o *)this->fields.maskSprite;
    if ( !nameLabel )
      goto LABEL_16;
    UIWidget__set_height(
      (UIWidget_o *)nameLabel,
      ServantStatusNpComponent_TypeInfo->static_fields->MASK_DEFAULT_HEIGHT + v105,
      0LL);
    nameLabel = this->fields.maskInfoLabel;
    if ( !nameLabel )
      goto LABEL_16;
    v104 = closedMessage;
  }
  UILabel__set_text(nameLabel, v104, 0LL);
  v107 = this->fields.guageSpriteList;
  this->fields.isCharaHide = isCharaHide == 1;
  if ( !v107 )
    goto LABEL_16;
  v108 = 0LL;
  v109 = 100;
  while ( 1 )
  {
    v110 = v107->max_length;
    if ( (int)v108 >= v110 || (int)v108 >= tdInfo->fields.guageCount )
      break;
    if ( (unsigned int)v108 >= v110 )
      goto LABEL_176;
    v111 = v107->m_Items[v108];
    v119 = v109;
    v112 = System_Int32__ToString((int32_t)&v119, 0LL);
    nameLabel = (UILabel_o *)System_String__Concat_44758168((System_String_o *)StringLiteral_19844/*"img_npgage_"*/, v112, 0LL);
    if ( v111 )
    {
      UISprite__set_spriteName(v111, (System_String_o *)nameLabel, 0LL);
      v107 = this->fields.guageSpriteList;
      ++v108;
      v109 += 100;
      if ( v107 )
        continue;
    }
    goto LABEL_16;
  }
  this->fields._Adjust_k__BackingField = v85;
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