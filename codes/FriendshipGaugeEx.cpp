void __fastcall FriendshipGaugeEx___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  FriendshipGaugeEx_c *v7; // x8
  struct FriendshipGaugeEx_StaticFields *static_fields; // x0
  System_Int32_array **v9; // x1
  struct FriendshipGaugeEx_StaticFields *v10; // x0
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct FriendshipGaugeEx_StaticFields *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_43540AD & 1) == 0 )
  {
    sub_B70694(&FriendshipGaugeEx_TypeInfo);
    sub_B70694(&StringLiteral_5453/*"DownloadBondAtlas"*/);
    sub_B70694(&StringLiteral_19754/*"img_bondsgage_11"*/);
    sub_B70694(&StringLiteral_2900/*"Bond/DownloadBond"*/);
    byte_43540AD = 1;
  }
  FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN = 5;
  FriendshipGaugeEx_TypeInfo->static_fields->POSITION_Y_DEFAULT = 0.6;
  v7 = FriendshipGaugeEx_TypeInfo;
  FriendshipGaugeEx_TypeInfo->static_fields->POSITION_Y_OTHER = 10.0;
  static_fields = v7->static_fields;
  v9 = (System_Int32_array **)StringLiteral_2900/*"Bond/DownloadBond"*/;
  static_fields->AtlasPath = (struct System_String_o *)StringLiteral_2900/*"Bond/DownloadBond"*/;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->AtlasPath, v9, v1, v2, v3, v4, v5, v6);
  v10 = FriendshipGaugeEx_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_5453/*"DownloadBondAtlas"*/;
  v10->ObjectName = (struct System_String_o *)StringLiteral_5453/*"DownloadBondAtlas"*/;
  sub_B70630((BattleServantConfConponent_o *)&v10->ObjectName, v11, v12, v13, v14, v15, v16, v17);
  v18 = FriendshipGaugeEx_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_19754/*"img_bondsgage_11"*/;
  v18->SpriteName = (struct System_String_o *)StringLiteral_19754/*"img_bondsgage_11"*/;
  sub_B70630((BattleServantConfConponent_o *)&v18->SpriteName, v19, v20, v21, v22, v23, v24, v25);
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
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  FriendshipMaster_o *MasterData_WarQuestSelectionMaster; // x24
  float v14; // s0
  const MethodInfo *v15; // x4
  int32_t v16; // w23
  int32_t FriendShipRank; // w0
  int32_t v18; // w3
  const MethodInfo *v19; // x4

  if ( (byte_43540AB & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43540AB = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (FriendshipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        v14 = BattleUtility__Lerp((float)this->fields.nowFriendship, (float)this->fields.nextFriendship, val, 0LL),
        Instance = (WebViewManager_o *)BattleUtility__FloorToInt(v14, 0LL),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B7076C(Instance, v12);
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


void __fastcall FriendshipGaugeEx__ChangeGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendshipId,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  int **Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  FriendshipMaster_o *v11; // x22
  const MethodInfo *v12; // x3
  int v13; // w26
  struct UnityEngine_GameObject_array *iconRoots; // x8
  __int64 v15; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v17; // x27
  struct UISprite_array *icons; // x10
  int32_t v19; // w2
  int32_t v20; // w8
  int **v21; // x23
  struct UISprite_array *v22; // x10
  float v23; // s0
  struct UISprite_array *v24; // x8
  struct UISprite_array *v25; // x8
  signed __int64 v26; // x28
  int32_t exceedCount; // w23
  struct UnityEngine_GameObject_array *v28; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  FriendshipGaugeEx_c *v30; // x8
  bool v31; // cc
  UnityEngine_GameObject_o *v32; // x23
  float POSITION_Y_DEFAULT; // s0
  __int64 v34; // x0

  if ( (byte_43540AC & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_FriendshipMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&FriendshipGaugeEx_TypeInfo);
    byte_43540AC = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_WarQuestSelectionMaster
    || ((v11 = (FriendshipMaster_o *)Master_WarQuestSelectionMaster,
         (Master_WarQuestSelectionMaster = (int **)FriendshipMaster__GetEntity(
                                                     (FriendshipMaster_o *)Master_WarQuestSelectionMaster,
                                                     friendshipId,
                                                     this->fields.maxFriendshipRank - 1,
                                                     v10)) == 0LL)
      ? (v13 = 0)
      : (v13 = *((_DWORD *)Master_WarQuestSelectionMaster + 6)),
        (iconRoots = this->fields.iconRoots) == 0LL) )
  {
LABEL_55:
    sub_B7076C(Master_WarQuestSelectionMaster, v9);
  }
  v15 = 4LL;
  while ( 1 )
  {
    max_length = iconRoots->max_length;
    v17 = v15 - 4;
    if ( v15 - 4 >= (int)max_length )
      break;
    icons = this->fields.icons;
    if ( !icons )
      goto LABEL_55;
    if ( (__int64)v17 >= (int)icons->max_length )
      break;
    v19 = v15 + this->fields.maxFriendshipRank - 4;
    if ( v19 >= this->fields.exceedMaxFriendshipRank )
    {
      if ( v17 >= max_length )
        goto LABEL_57;
      Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&iconRoots->obj.klass + v15);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    }
    else
    {
      Master_WarQuestSelectionMaster = (int **)FriendshipMaster__GetEntity(v11, friendshipId, v19, v12);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_55;
      v20 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
      v21 = Master_WarQuestSelectionMaster;
      if ( v20 <= friendship )
      {
        v24 = this->fields.icons;
        if ( !v24 )
          goto LABEL_55;
        if ( v17 >= v24->max_length )
          goto LABEL_57;
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v24->obj.klass + v15);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        v23 = 1.0;
      }
      else if ( friendship - v13 <= 0 )
      {
        v25 = this->fields.icons;
        if ( !v25 )
          goto LABEL_55;
        if ( v17 >= v25->max_length )
        {
LABEL_57:
          v34 = sub_B70798(Master_WarQuestSelectionMaster);
          sub_B70738(v34, 0LL);
        }
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v25->obj.klass + v15);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        v23 = 0.0;
      }
      else
      {
        v22 = this->fields.icons;
        if ( !v22 )
          goto LABEL_55;
        if ( v17 >= v22->max_length )
          goto LABEL_57;
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v22->obj.klass + v15);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        v23 = (float)(friendship - v13) / (float)(v20 - v13);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Master_WarQuestSelectionMaster, v23, 0LL);
      Master_WarQuestSelectionMaster = (int **)FriendshipGaugeEx_TypeInfo;
      v13 = *((_DWORD *)v21 + 6);
      if ( (BYTE3(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
        Master_WarQuestSelectionMaster = (int **)FriendshipGaugeEx_TypeInfo;
      }
      v26 = *Master_WarQuestSelectionMaster[23];
      if ( (__int64)v17 < v26 )
      {
        exceedCount = this->fields.exceedCount;
        if ( (*((_BYTE *)Master_WarQuestSelectionMaster + 307) & 4) != 0
          && !*((_DWORD *)Master_WarQuestSelectionMaster + 56) )
        {
          j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
          LODWORD(v26) = FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN;
        }
        v28 = this->fields.iconRoots;
        if ( !v28 )
          goto LABEL_55;
        if ( v17 >= v28->max_length )
          goto LABEL_57;
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v28->obj.klass + v15);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        gameObject = UnityEngine_GameObject__get_gameObject(
                       (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                       0LL);
        v30 = FriendshipGaugeEx_TypeInfo;
        v31 = exceedCount <= (int)v26;
        v32 = gameObject;
        if ( v31 )
        {
          if ( (WORD1(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
            v30 = FriendshipGaugeEx_TypeInfo;
          }
          POSITION_Y_DEFAULT = v30->static_fields->POSITION_Y_DEFAULT;
        }
        else
        {
          if ( (WORD1(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
            v30 = FriendshipGaugeEx_TypeInfo;
          }
          POSITION_Y_DEFAULT = v30->static_fields->POSITION_Y_OTHER;
        }
        GameObjectExtensions__SetLocalPositionY(v32, POSITION_Y_DEFAULT, 0LL);
      }
    }
    iconRoots = this->fields.iconRoots;
    ++v15;
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
    sub_B7076C(0LL, v3);
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
    sub_B7076C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGaugeEx__Start(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  FriendshipGaugeEx_c *v3; // x0
  System_String_o *AtlasPath; // x20
  AssetLoader_LoadEndDataHandler_o *v5; // x21

  if ( (byte_43540AA & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_FriendshipGaugeEx__Start_b__19_0__);
    sub_B70694(&FriendshipGaugeEx_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&StringLiteral_4681/*"DISABLE_FRIENDSHIP_EXCEED"*/);
    byte_43540AA = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_4681/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL) != 1 )
  {
    v3 = FriendshipGaugeEx_TypeInfo;
    if ( (BYTE3(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v3 = FriendshipGaugeEx_TypeInfo;
    }
    AtlasPath = v3->static_fields->AtlasPath;
    v5 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v5, (Il2CppObject *)this, Method_FriendshipGaugeEx__Start_b__19_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(AtlasPath, v5, 1, 0LL);
  }
}


void __fastcall FriendshipGaugeEx___Start_b__19_0(
        FriendshipGaugeEx_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  FriendshipGaugeEx_c *v5; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  __int64 v7; // x1

  if ( (byte_43540AE & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&FriendshipGaugeEx_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_43540AE = 1;
  }
  if ( asset )
  {
    v5 = FriendshipGaugeEx_TypeInfo;
    if ( (BYTE3(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v5 = FriendshipGaugeEx_TypeInfo;
    }
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   asset,
                                                                   v5->static_fields->ObjectName,
                                                                   (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
    if ( !Object_WarBoardWaitTimeSetting
      || (Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         Object_WarBoardWaitTimeSetting,
                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bigIcon)
      || (UISprite__set_atlas(this->fields.bigIcon, (UIAtlas_o *)Object_WarBoardWaitTimeSetting, 0LL),
          (Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)this->fields.bigIcon) == 0LL) )
    {
      sub_B7076C(Object_WarBoardWaitTimeSetting, v7);
    }
    UISprite__set_spriteName(
      (UISprite_o *)Object_WarBoardWaitTimeSetting,
      FriendshipGaugeEx_TypeInfo->static_fields->SpriteName,
      0LL);
  }
}