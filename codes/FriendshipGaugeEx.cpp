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

  if ( (byte_418A4B8 & 1) == 0 )
  {
    sub_B2C35C(&FriendshipGaugeEx_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_5366/*"DownloadBondAtlas"*/, v8);
    sub_B2C35C(&StringLiteral_19450/*"img_bondsgage_11"*/, v9);
    sub_B2C35C(&StringLiteral_2836/*"Bond/DownloadBond"*/, v10);
    byte_418A4B8 = 1;
  }
  FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN = 5;
  FriendshipGaugeEx_TypeInfo->static_fields->POSITION_Y_DEFAULT = 0.6;
  v11 = FriendshipGaugeEx_TypeInfo;
  FriendshipGaugeEx_TypeInfo->static_fields->POSITION_Y_OTHER = 10.0;
  static_fields = v11->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2836/*"Bond/DownloadBond"*/;
  static_fields->AtlasPath = (struct System_String_o *)StringLiteral_2836/*"Bond/DownloadBond"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->AtlasPath, v13, v2, v3, v4, v5, v6, v7);
  v14 = FriendshipGaugeEx_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_5366/*"DownloadBondAtlas"*/;
  v14->ObjectName = (struct System_String_o *)StringLiteral_5366/*"DownloadBondAtlas"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14->ObjectName, v15, v16, v17, v18, v19, v20, v21);
  v22 = FriendshipGaugeEx_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_19450/*"img_bondsgage_11"*/;
  v22->SpriteName = (struct System_String_o *)StringLiteral_19450/*"img_bondsgage_11"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v22->SpriteName, v23, v24, v25, v26, v27, v28, v29);
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
  __int64 v13; // x1
  FriendshipMaster_o *MasterData_WarQuestSelectionMaster; // x24
  float v15; // s0
  const MethodInfo *v16; // x4
  int32_t v17; // w23
  int32_t FriendShipRank; // w0
  int32_t v19; // w3
  const MethodInfo *v20; // x4

  if ( (byte_418A4B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FriendshipMaster___, max);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_418A4B6 = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (FriendshipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FriendshipMaster___),
        v15 = BattleUtility__Lerp((float)this->fields.nowFriendship, (float)this->fields.nextFriendship, val, 0LL),
        Instance = (WebViewManager_o *)BattleUtility__FloorToInt(v15, 0LL),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B2C434(Instance, v13);
  }
  v17 = (int)Instance;
  FriendShipRank = FriendshipMaster__getFriendShipRank(
                     MasterData_WarQuestSelectionMaster,
                     this->fields.friendshipId,
                     (int32_t)Instance,
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
  int **Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  FriendshipMaster_o *v13; // x22
  const MethodInfo *v14; // x3
  int v15; // w26
  struct UnityEngine_GameObject_array *iconRoots; // x8
  __int64 v17; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v19; // x27
  struct UISprite_array *icons; // x10
  int32_t v21; // w2
  int32_t v22; // w8
  int **v23; // x23
  struct UISprite_array *v24; // x10
  float v25; // s0
  struct UISprite_array *v26; // x8
  struct UISprite_array *v27; // x8
  signed __int64 v28; // x28
  int32_t exceedCount; // w23
  struct UnityEngine_GameObject_array *v30; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  FriendshipGaugeEx_c *v32; // x8
  bool v33; // cc
  UnityEngine_GameObject_o *v34; // x23
  float POSITION_Y_DEFAULT; // s0
  __int64 v36; // x0

  if ( (byte_418A4B7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_FriendshipMaster___, *(_QWORD *)&friendshipId);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&FriendshipGaugeEx_TypeInfo, v9);
    byte_418A4B7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_WarQuestSelectionMaster
    || ((v13 = (FriendshipMaster_o *)Master_WarQuestSelectionMaster,
         (Master_WarQuestSelectionMaster = (int **)FriendshipMaster__GetEntity(
                                                     (FriendshipMaster_o *)Master_WarQuestSelectionMaster,
                                                     friendshipId,
                                                     this->fields.maxFriendshipRank - 1,
                                                     v12)) == 0LL)
      ? (v15 = 0)
      : (v15 = *((_DWORD *)Master_WarQuestSelectionMaster + 6)),
        (iconRoots = this->fields.iconRoots) == 0LL) )
  {
LABEL_55:
    sub_B2C434(Master_WarQuestSelectionMaster, v11);
  }
  v17 = 4LL;
  while ( 1 )
  {
    max_length = iconRoots->max_length;
    v19 = v17 - 4;
    if ( v17 - 4 >= (int)max_length )
      break;
    icons = this->fields.icons;
    if ( !icons )
      goto LABEL_55;
    if ( (__int64)v19 >= (int)icons->max_length )
      break;
    v21 = v17 + this->fields.maxFriendshipRank - 4;
    if ( v21 >= this->fields.exceedMaxFriendshipRank )
    {
      if ( v19 >= max_length )
        goto LABEL_57;
      Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&iconRoots->obj.klass + v17);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    }
    else
    {
      Master_WarQuestSelectionMaster = (int **)FriendshipMaster__GetEntity(v13, friendshipId, v21, v14);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_55;
      v22 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
      v23 = Master_WarQuestSelectionMaster;
      if ( v22 <= friendship )
      {
        v26 = this->fields.icons;
        if ( !v26 )
          goto LABEL_55;
        if ( v19 >= v26->max_length )
          goto LABEL_57;
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v26->obj.klass + v17);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        v25 = 1.0;
      }
      else if ( friendship - v15 <= 0 )
      {
        v27 = this->fields.icons;
        if ( !v27 )
          goto LABEL_55;
        if ( v19 >= v27->max_length )
        {
LABEL_57:
          v36 = sub_B2C460(Master_WarQuestSelectionMaster);
          sub_B2C400(v36, 0LL);
        }
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v27->obj.klass + v17);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        v25 = 0.0;
      }
      else
      {
        v24 = this->fields.icons;
        if ( !v24 )
          goto LABEL_55;
        if ( v19 >= v24->max_length )
          goto LABEL_57;
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v24->obj.klass + v17);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        v25 = (float)(friendship - v15) / (float)(v22 - v15);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Master_WarQuestSelectionMaster, v25, 0LL);
      Master_WarQuestSelectionMaster = (int **)FriendshipGaugeEx_TypeInfo;
      v15 = *((_DWORD *)v23 + 6);
      if ( (BYTE3(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
        Master_WarQuestSelectionMaster = (int **)FriendshipGaugeEx_TypeInfo;
      }
      v28 = *Master_WarQuestSelectionMaster[23];
      if ( (__int64)v19 < v28 )
      {
        exceedCount = this->fields.exceedCount;
        if ( (*((_BYTE *)Master_WarQuestSelectionMaster + 307) & 4) != 0
          && !*((_DWORD *)Master_WarQuestSelectionMaster + 56) )
        {
          j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
          LODWORD(v28) = FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN;
        }
        v30 = this->fields.iconRoots;
        if ( !v30 )
          goto LABEL_55;
        if ( v19 >= v30->max_length )
          goto LABEL_57;
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v30->obj.klass + v17);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        gameObject = UnityEngine_GameObject__get_gameObject(
                       (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                       0LL);
        v32 = FriendshipGaugeEx_TypeInfo;
        v33 = exceedCount <= (int)v28;
        v34 = gameObject;
        if ( v33 )
        {
          if ( (WORD1(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
            v32 = FriendshipGaugeEx_TypeInfo;
          }
          POSITION_Y_DEFAULT = v32->static_fields->POSITION_Y_DEFAULT;
        }
        else
        {
          if ( (WORD1(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
            v32 = FriendshipGaugeEx_TypeInfo;
          }
          POSITION_Y_DEFAULT = v32->static_fields->POSITION_Y_OTHER;
        }
        GameObjectExtensions__SetLocalPositionY(v34, POSITION_Y_DEFAULT, 0LL);
      }
    }
    iconRoots = this->fields.iconRoots;
    ++v17;
    if ( !iconRoots )
      goto LABEL_55;
  }
}


void __fastcall FriendshipGaugeEx__Hide(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
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
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGaugeEx__Start(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  FriendshipGaugeEx_c *v7; // x0
  System_String_o *AtlasPath; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21

  if ( (byte_418A4B5 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_FriendshipGaugeEx__Start_b__19_0__, v3);
    sub_B2C35C(&FriendshipGaugeEx_TypeInfo, v4);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_4597/*"DISABLE_FRIENDSHIP_EXCEED"*/, v6);
    byte_418A4B5 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_4597/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL) != 1 )
  {
    v7 = FriendshipGaugeEx_TypeInfo;
    if ( (BYTE3(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v7 = FriendshipGaugeEx_TypeInfo;
    }
    AtlasPath = v7->static_fields->AtlasPath;
    v9 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_FriendshipGaugeEx__Start_b__19_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(AtlasPath, v9, 1, 0LL);
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
  __int64 v9; // x1

  if ( (byte_418A4B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, asset);
    sub_B2C35C(&FriendshipGaugeEx_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6);
    byte_418A4B9 = 1;
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
                                                                   (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    if ( !Object_WarBoardWaitTimeSetting
      || (Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         Object_WarBoardWaitTimeSetting,
                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bigIcon)
      || (UISprite__set_atlas(this->fields.bigIcon, (UIAtlas_o *)Object_WarBoardWaitTimeSetting, 0LL),
          (Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)this->fields.bigIcon) == 0LL) )
    {
      sub_B2C434(Object_WarBoardWaitTimeSetting, v9);
    }
    UISprite__set_spriteName(
      (UISprite_o *)Object_WarBoardWaitTimeSetting,
      FriendshipGaugeEx_TypeInfo->static_fields->SpriteName,
      0LL);
  }
}