void __fastcall FriendshipGaugeEx___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  FriendshipGaugeEx_c *v11; // x8
  struct FriendshipGaugeEx_StaticFields *static_fields; // x0
  System_Int32_array **v13; // x1
  struct FriendshipGaugeEx_StaticFields *v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct FriendshipGaugeEx_StaticFields *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_40FB2C4 & 1) == 0 )
  {
    sub_B16FFC(&FriendshipGaugeEx_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_5347, v8);
    sub_B16FFC(&StringLiteral_19376, v9);
    sub_B16FFC(&StringLiteral_2824, v10);
    byte_40FB2C4 = 1;
  }
  FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN = 5;
  FriendshipGaugeEx_TypeInfo->static_fields->POSITION_Y_DEFAULT = 0.6;
  v11 = FriendshipGaugeEx_TypeInfo;
  FriendshipGaugeEx_TypeInfo->static_fields->POSITION_Y_OTHER = 10.0;
  static_fields = v11->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2824;
  static_fields->AtlasPath = (struct System_String_o *)StringLiteral_2824;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->AtlasPath, v13, v2, v3, v4, v5, v6, v7);
  v14 = FriendshipGaugeEx_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_5347;
  v14->ObjectName = (struct System_String_o *)StringLiteral_5347;
  sub_B16F98((BattleServantConfConponent_o *)&v14->ObjectName, v15, v16, v17, v18, v19, v20, v21);
  v22 = FriendshipGaugeEx_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_19376;
  v22->SpriteName = (struct System_String_o *)StringLiteral_19376;
  sub_B16F98((BattleServantConfConponent_o *)&v22->SpriteName, v23, v24, v25, v26, v27, v28, v29);
}


void __fastcall FriendshipGaugeEx___ctor(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.prevRank = -1LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall FriendshipGaugeEx__ChangeGauge(
        FriendshipGaugeEx_o *this,
        float val,
        bool *max,
        bool *isLevelUp,
        bool *isChange,
        const MethodInfo *method)
{
  __int64 v11; // x1
  WebViewManager_o *Instance; // x0
  FriendshipMaster_o *MasterData_WarQuestSelectionMaster; // x24
  float v14; // s0
  int32_t v15; // w0
  const MethodInfo *v16; // x4
  int32_t v17; // w23
  int32_t FriendShipRank; // w0
  int32_t v19; // w3
  const MethodInfo *v20; // x4

  if ( (byte_40FB2C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FriendshipMaster___, max);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FB2C2 = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (FriendshipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        v14 = BattleUtility__Lerp((float)this->fields.nowFriendship, (float)this->fields.nextFriendship, val, 0LL),
        v15 = BattleUtility__FloorToInt(v14, 0LL),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B170D4();
  }
  v17 = v15;
  FriendShipRank = FriendshipMaster__getFriendShipRank(
                     MasterData_WarQuestSelectionMaster,
                     this->fields.friendshipId,
                     v15,
                     this->fields.nowFriendshipRank,
                     v16);
  if ( FriendShipRank == this->fields.exceedMaxFriendshipRank )
    *max = 1;
  if ( FriendShipRank != this->fields.prevRank )
  {
    *isLevelUp = 1;
    this->fields.prevRank = FriendShipRank;
  }
  if ( v17 != this->fields.prevPoint )
  {
    *isChange = 1;
    this->fields.prevPoint = v17;
  }
  FriendshipGaugeEx__ChangeGaugeData(this, this->fields.friendshipId, v17, v19, v20);
  return v17 - this->fields.nowFriendship;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGaugeEx__ChangeGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendshipId,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  FriendshipMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v11; // x3
  FriendshipMaster_o *v12; // x22
  _DWORD *Entity; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  int v16; // w26
  struct UnityEngine_GameObject_array *iconRoots; // x8
  __int64 v18; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v20; // x27
  struct UISprite_array *icons; // x10
  __int64 v22; // x10
  __int64 v23; // x2
  int32_t v24; // w8
  _DWORD *v25; // x23
  struct UISprite_array *v26; // x10
  UIBasicSprite_o *v27; // x0
  float v28; // s0
  UnityEngine_GameObject_o *v29; // x0
  struct UISprite_array *v30; // x8
  struct UISprite_array *v31; // x8
  signed __int64 v32; // x28
  int32_t exceedCount; // w23
  struct UnityEngine_GameObject_array *v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v37; // x1
  FriendshipGaugeEx_c *v38; // x8
  bool v39; // cc
  UnityEngine_GameObject_o *v40; // x23
  float POSITION_Y_DEFAULT; // s0

  if ( (byte_40FB2C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_FriendshipMaster___, *(_QWORD *)&friendshipId);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&FriendshipGaugeEx_TypeInfo, v9);
    byte_40FB2C3 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (FriendshipMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_WarQuestSelectionMaster
    || ((v12 = Master_WarQuestSelectionMaster,
         (Entity = FriendshipMaster__GetEntity(
                     Master_WarQuestSelectionMaster,
                     friendshipId,
                     this->fields.maxFriendshipRank - 1,
                     v11)) == 0LL)
      ? (v16 = 0)
      : (v16 = Entity[6]),
        (iconRoots = this->fields.iconRoots) == 0LL) )
  {
LABEL_55:
    sub_B170D4();
  }
  v18 = 4LL;
  while ( 1 )
  {
    max_length = iconRoots->max_length;
    v20 = v18 - 4;
    if ( v18 - 4 >= (int)max_length )
      break;
    icons = this->fields.icons;
    if ( !icons )
      goto LABEL_55;
    if ( (__int64)v20 >= (int)icons->max_length )
      break;
    v22 = v18 + (unsigned int)this->fields.maxFriendshipRank;
    v23 = v22 - 4;
    if ( (int)v22 - 4 >= this->fields.exceedMaxFriendshipRank )
    {
      if ( v20 >= max_length )
        goto LABEL_57;
      v29 = (UnityEngine_GameObject_o *)*((_QWORD *)&iconRoots->obj.klass + v18);
      if ( !v29 )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive(v29, 0, 0LL);
    }
    else
    {
      Entity = FriendshipMaster__GetEntity(v12, friendshipId, v23, v15);
      if ( !Entity )
        goto LABEL_55;
      v24 = Entity[6];
      v25 = Entity;
      if ( v24 <= friendship )
      {
        v30 = this->fields.icons;
        if ( !v30 )
          goto LABEL_55;
        if ( v20 >= v30->max_length )
          goto LABEL_57;
        v27 = (UIBasicSprite_o *)*((_QWORD *)&v30->obj.klass + v18);
        if ( !v27 )
          goto LABEL_55;
        v28 = 1.0;
      }
      else if ( friendship - v16 <= 0 )
      {
        v31 = this->fields.icons;
        if ( !v31 )
          goto LABEL_55;
        if ( v20 >= v31->max_length )
        {
LABEL_57:
          sub_B17100(Entity, v14, v23);
          sub_B170A0();
        }
        v27 = (UIBasicSprite_o *)*((_QWORD *)&v31->obj.klass + v18);
        if ( !v27 )
          goto LABEL_55;
        v28 = 0.0;
      }
      else
      {
        v26 = this->fields.icons;
        if ( !v26 )
          goto LABEL_55;
        if ( v20 >= v26->max_length )
          goto LABEL_57;
        v27 = (UIBasicSprite_o *)*((_QWORD *)&v26->obj.klass + v18);
        if ( !v27 )
          goto LABEL_55;
        v28 = (float)(friendship - v16) / (float)(v24 - v16);
      }
      UIBasicSprite__set_fillAmount(v27, v28, 0LL);
      Entity = FriendshipGaugeEx_TypeInfo;
      v16 = v25[6];
      if ( (BYTE3(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
        Entity = FriendshipGaugeEx_TypeInfo;
      }
      v32 = **((int **)Entity + 23);
      if ( (__int64)v20 < v32 )
      {
        exceedCount = this->fields.exceedCount;
        if ( (*((_BYTE *)Entity + 307) & 4) != 0 && !Entity[56] )
        {
          j_il2cpp_runtime_class_init_0(Entity);
          LODWORD(v32) = FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN;
        }
        v34 = this->fields.iconRoots;
        if ( !v34 )
          goto LABEL_55;
        if ( v20 >= v34->max_length )
          goto LABEL_57;
        v35 = (UnityEngine_GameObject_o *)*((_QWORD *)&v34->obj.klass + v18);
        if ( !v35 )
          goto LABEL_55;
        gameObject = UnityEngine_GameObject__get_gameObject(v35, 0LL);
        v38 = FriendshipGaugeEx_TypeInfo;
        v39 = exceedCount <= (int)v32;
        v40 = gameObject;
        if ( v39 )
        {
          if ( (WORD1(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
            v38 = FriendshipGaugeEx_TypeInfo;
          }
          POSITION_Y_DEFAULT = v38->static_fields->POSITION_Y_DEFAULT;
        }
        else
        {
          if ( (WORD1(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
            v38 = FriendshipGaugeEx_TypeInfo;
          }
          POSITION_Y_DEFAULT = v38->static_fields->POSITION_Y_OTHER;
        }
        GameObjectExtensions__SetLocalPositionY(v40, POSITION_Y_DEFAULT, v37);
      }
    }
    iconRoots = this->fields.iconRoots;
    ++v18;
    if ( !iconRoots )
      goto LABEL_55;
  }
}


void __fastcall FriendshipGaugeEx__Hide(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


bool __fastcall FriendshipGaugeEx__IsChange(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  return this->fields.nowFriendship != this->fields.nextFriendship;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGaugeEx__SetGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendshipId,
        int32_t friendship,
        int32_t friendshipRank,
        int32_t inMaxFriendShipRank,
        int32_t exceedCount,
        const MethodInfo *method)
{
  this->fields.nowFriendship = friendship;
  this->fields.nowFriendshipRank = friendshipRank;
  this->fields.friendshipId = friendshipId;
  this->fields.maxFriendshipRank = inMaxFriendShipRank;
  this->fields.exceedCount = exceedCount;
  this->fields.exceedMaxFriendshipRank = exceedCount + inMaxFriendShipRank;
  this->fields.prevRank = friendshipRank;
  this->fields.prevPoint = friendship;
  FriendshipGaugeEx__ChangeGaugeData(
    this,
    friendshipId,
    friendship,
    friendshipRank,
    *(const MethodInfo **)&inMaxFriendShipRank);
}


void __fastcall FriendshipGaugeEx__SetNextGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  this->fields.nextFriendship = friendship;
  this->fields.nextFriendshipRank = friendshipRank;
}


void __fastcall FriendshipGaugeEx__Show(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGaugeEx__Start(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  FriendshipGaugeEx_c *v11; // x0
  System_String_o *AtlasPath; // x20
  AssetLoader_LoadEndDataHandler_o *v13; // x21

  if ( (byte_40FB2C1 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_FriendshipGaugeEx__Start_b__19_0__, v3);
    sub_B16FFC(&FriendshipGaugeEx_TypeInfo, v4);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_4582, v6);
    byte_40FB2C1 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_4582, 0LL) != 1 )
  {
    v11 = FriendshipGaugeEx_TypeInfo;
    if ( (BYTE3(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v11 = FriendshipGaugeEx_TypeInfo;
    }
    AtlasPath = v11->static_fields->AtlasPath;
    v13 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8, v9, v10);
    AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)this, Method_FriendshipGaugeEx__Start_b__19_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(AtlasPath, v13, 1, 0LL);
  }
}


void __fastcall FriendshipGaugeEx___Start_b__19_0(
        FriendshipGaugeEx_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FriendshipGaugeEx_c *v7; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UISprite_o *bigIcon; // x0

  if ( (byte_40FB2C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, asset);
    sub_B16FFC(&FriendshipGaugeEx_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6);
    byte_40FB2C5 = 1;
  }
  if ( asset )
  {
    v7 = FriendshipGaugeEx_TypeInfo;
    if ( (BYTE3(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v7 = FriendshipGaugeEx_TypeInfo;
    }
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   asset,
                                                                   v7->static_fields->ObjectName,
                                                                   (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( !Object_WarBoardWaitTimeSetting
      || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bigIcon)
      || (UISprite__set_atlas(this->fields.bigIcon, (UIAtlas_o *)Component_srcLineSprite, 0LL),
          (bigIcon = this->fields.bigIcon) == 0LL) )
    {
      sub_B170D4();
    }
    UISprite__set_spriteName(bigIcon, FriendshipGaugeEx_TypeInfo->static_fields->SpriteName, 0LL);
  }
}