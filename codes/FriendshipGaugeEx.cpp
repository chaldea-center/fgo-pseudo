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

  if ( (byte_42171DF & 1) == 0 )
  {
    sub_B0D8A4(&FriendshipGaugeEx_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_5382/*"DownloadBondAtlas"*/, v8);
    sub_B0D8A4(&StringLiteral_19512/*"img_bondsgage_11"*/, v9);
    sub_B0D8A4(&StringLiteral_2847/*"Bond/DownloadBond"*/, v10);
    byte_42171DF = 1;
  }
  FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN = 5;
  FriendshipGaugeEx_TypeInfo->static_fields->POSITION_Y_DEFAULT = 0.6;
  v11 = FriendshipGaugeEx_TypeInfo;
  FriendshipGaugeEx_TypeInfo->static_fields->POSITION_Y_OTHER = 10.0;
  static_fields = v11->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2847/*"Bond/DownloadBond"*/;
  static_fields->AtlasPath = (struct System_String_o *)StringLiteral_2847/*"Bond/DownloadBond"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->AtlasPath, v13, v2, v3, v4, v5, v6, v7);
  v14 = FriendshipGaugeEx_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_5382/*"DownloadBondAtlas"*/;
  v14->ObjectName = (struct System_String_o *)StringLiteral_5382/*"DownloadBondAtlas"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v14->ObjectName, v15, v16, v17, v18, v19, v20, v21);
  v22 = FriendshipGaugeEx_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_19512/*"img_bondsgage_11"*/;
  v22->SpriteName = (struct System_String_o *)StringLiteral_19512/*"img_bondsgage_11"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v22->SpriteName, v23, v24, v25, v26, v27, v28, v29);
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
  const MethodInfo *v15; // x4
  int32_t v16; // w23
  int32_t FriendShipRank; // w0
  int32_t v18; // w3
  const MethodInfo *v19; // x4

  if ( (byte_42171DD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FriendshipMaster___, max);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_42171DD = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (FriendshipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        v14 = BattleUtility__Lerp((float)this->fields.nowFriendship, (float)this->fields.nextFriendship, val, 0LL),
        Instance = (WebViewManager_o *)BattleUtility__FloorToInt(v14, 0LL),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B0D97C(Instance);
  }
  v16 = (int)Instance;
  FriendShipRank = FriendshipMaster__getFriendShipRank(
                     MasterData_WarQuestSelectionMaster,
                     this->fields.friendshipId,
                     (int32_t)Instance,
                     this->fields.nowFriendshipRank,
                     v15);
  if ( FriendShipRank == this->fields.exceedMaxFriendshipRank )
    *max = 1;
  if ( FriendShipRank != this->fields.prevRank )
  {
    *isLevelUp = 1;
    this->fields.prevRank = FriendShipRank;
  }
  if ( v16 != this->fields.prevPoint )
  {
    *isChange = 1;
    this->fields.prevPoint = v16;
  }
  FriendshipGaugeEx__ChangeGaugeData(this, this->fields.friendshipId, v16, v18, v19);
  return v16 - this->fields.nowFriendship;
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
  int **Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v11; // x3
  FriendshipMaster_o *v12; // x22
  const MethodInfo *v13; // x3
  int v14; // w26
  struct UnityEngine_GameObject_array *iconRoots; // x8
  __int64 v16; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v18; // x27
  struct UISprite_array *icons; // x10
  int32_t v20; // w2
  int32_t v21; // w8
  int **v22; // x23
  struct UISprite_array *v23; // x10
  float v24; // s0
  struct UISprite_array *v25; // x8
  struct UISprite_array *v26; // x8
  signed __int64 v27; // x28
  int32_t exceedCount; // w23
  struct UnityEngine_GameObject_array *v29; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  FriendshipGaugeEx_c *v31; // x8
  bool v32; // cc
  UnityEngine_GameObject_o *v33; // x23
  float POSITION_Y_DEFAULT; // s0
  __int64 v35; // x0

  if ( (byte_42171DE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_FriendshipMaster___, *(_QWORD *)&friendshipId);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&FriendshipGaugeEx_TypeInfo, v9);
    byte_42171DE = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_WarQuestSelectionMaster
    || ((v12 = (FriendshipMaster_o *)Master_WarQuestSelectionMaster,
         (Master_WarQuestSelectionMaster = (int **)FriendshipMaster__GetEntity(
                                                     (FriendshipMaster_o *)Master_WarQuestSelectionMaster,
                                                     friendshipId,
                                                     this->fields.maxFriendshipRank - 1,
                                                     v11)) == 0LL)
      ? (v14 = 0)
      : (v14 = *((_DWORD *)Master_WarQuestSelectionMaster + 6)),
        (iconRoots = this->fields.iconRoots) == 0LL) )
  {
LABEL_55:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  v16 = 4LL;
  while ( 1 )
  {
    max_length = iconRoots->max_length;
    v18 = v16 - 4;
    if ( v16 - 4 >= (int)max_length )
      break;
    icons = this->fields.icons;
    if ( !icons )
      goto LABEL_55;
    if ( (__int64)v18 >= (int)icons->max_length )
      break;
    v20 = v16 + this->fields.maxFriendshipRank - 4;
    if ( v20 >= this->fields.exceedMaxFriendshipRank )
    {
      if ( v18 >= max_length )
        goto LABEL_57;
      Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&iconRoots->obj.klass + v16);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    }
    else
    {
      Master_WarQuestSelectionMaster = (int **)FriendshipMaster__GetEntity(v12, friendshipId, v20, v13);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_55;
      v21 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
      v22 = Master_WarQuestSelectionMaster;
      if ( v21 <= friendship )
      {
        v25 = this->fields.icons;
        if ( !v25 )
          goto LABEL_55;
        if ( v18 >= v25->max_length )
          goto LABEL_57;
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v25->obj.klass + v16);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        v24 = 1.0;
      }
      else if ( friendship - v14 <= 0 )
      {
        v26 = this->fields.icons;
        if ( !v26 )
          goto LABEL_55;
        if ( v18 >= v26->max_length )
        {
LABEL_57:
          v35 = sub_B0D9A8(Master_WarQuestSelectionMaster);
          sub_B0D948(v35, 0LL);
        }
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v26->obj.klass + v16);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        v24 = 0.0;
      }
      else
      {
        v23 = this->fields.icons;
        if ( !v23 )
          goto LABEL_55;
        if ( v18 >= v23->max_length )
          goto LABEL_57;
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v23->obj.klass + v16);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        v24 = (float)(friendship - v14) / (float)(v21 - v14);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Master_WarQuestSelectionMaster, v24, 0LL);
      Master_WarQuestSelectionMaster = (int **)FriendshipGaugeEx_TypeInfo;
      v14 = *((_DWORD *)v22 + 6);
      if ( (BYTE3(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
        Master_WarQuestSelectionMaster = (int **)FriendshipGaugeEx_TypeInfo;
      }
      v27 = *Master_WarQuestSelectionMaster[23];
      if ( (__int64)v18 < v27 )
      {
        exceedCount = this->fields.exceedCount;
        if ( (*((_BYTE *)Master_WarQuestSelectionMaster + 307) & 4) != 0
          && !*((_DWORD *)Master_WarQuestSelectionMaster + 56) )
        {
          j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
          LODWORD(v27) = FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN;
        }
        v29 = this->fields.iconRoots;
        if ( !v29 )
          goto LABEL_55;
        if ( v18 >= v29->max_length )
          goto LABEL_57;
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v29->obj.klass + v16);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        gameObject = UnityEngine_GameObject__get_gameObject(
                       (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                       0LL);
        v31 = FriendshipGaugeEx_TypeInfo;
        v32 = exceedCount <= (int)v27;
        v33 = gameObject;
        if ( v32 )
        {
          if ( (WORD1(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
            v31 = FriendshipGaugeEx_TypeInfo;
          }
          POSITION_Y_DEFAULT = v31->static_fields->POSITION_Y_DEFAULT;
        }
        else
        {
          if ( (WORD1(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
            v31 = FriendshipGaugeEx_TypeInfo;
          }
          POSITION_Y_DEFAULT = v31->static_fields->POSITION_Y_OTHER;
        }
        GameObjectExtensions__SetLocalPositionY(v33, POSITION_Y_DEFAULT, 0LL);
      }
    }
    iconRoots = this->fields.iconRoots;
    ++v16;
    if ( !iconRoots )
      goto LABEL_55;
  }
}


void __fastcall FriendshipGaugeEx__Hide(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
  FriendshipGaugeEx_c *v9; // x0
  System_String_o *AtlasPath; // x20
  AssetLoader_LoadEndDataHandler_o *v11; // x21

  if ( (byte_42171DC & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_FriendshipGaugeEx__Start_b__19_0__, v3);
    sub_B0D8A4(&FriendshipGaugeEx_TypeInfo, v4);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_4613/*"DISABLE_FRIENDSHIP_EXCEED"*/, v6);
    byte_42171DC = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_4613/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL) != 1 )
  {
    v9 = FriendshipGaugeEx_TypeInfo;
    if ( (BYTE3(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v9 = FriendshipGaugeEx_TypeInfo;
    }
    AtlasPath = v9->static_fields->AtlasPath;
    v11 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    AssetLoader_LoadEndDataHandler___ctor(v11, (Il2CppObject *)this, Method_FriendshipGaugeEx__Start_b__19_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(AtlasPath, v11, 1, 0LL);
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

  if ( (byte_42171E0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, asset);
    sub_B0D8A4(&FriendshipGaugeEx_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6);
    byte_42171E0 = 1;
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
                                                                   (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
    if ( !Object_WarBoardWaitTimeSetting
      || (Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         Object_WarBoardWaitTimeSetting,
                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bigIcon)
      || (UISprite__set_atlas(this->fields.bigIcon, (UIAtlas_o *)Object_WarBoardWaitTimeSetting, 0LL),
          (Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)this->fields.bigIcon) == 0LL) )
    {
      sub_B0D97C(Object_WarBoardWaitTimeSetting);
    }
    UISprite__set_spriteName(
      (UISprite_o *)Object_WarBoardWaitTimeSetting,
      FriendshipGaugeEx_TypeInfo->static_fields->SpriteName,
      0LL);
  }
}