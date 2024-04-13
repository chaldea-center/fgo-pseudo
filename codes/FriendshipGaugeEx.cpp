void __fastcall FriendshipGaugeEx___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  FriendshipGaugeEx_c *v17; // x8
  struct FriendshipGaugeEx_StaticFields *static_fields; // x0
  System_Int32_array **v19; // x1
  struct FriendshipGaugeEx_StaticFields *v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct FriendshipGaugeEx_StaticFields *v28; // x0
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42EB509 & 1) == 0 )
  {
    sub_B5D5C4(&FriendshipGaugeEx_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_5442/*"DownloadBondAtlas"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19695/*"img_bondsgage_11"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2891/*"Bond/DownloadBond"*/, v14, v15, v16);
    byte_42EB509 = 1;
  }
  FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN = 5;
  FriendshipGaugeEx_TypeInfo->static_fields->POSITION_Y_DEFAULT = 0.6;
  v17 = FriendshipGaugeEx_TypeInfo;
  FriendshipGaugeEx_TypeInfo->static_fields->POSITION_Y_OTHER = 10.0;
  static_fields = v17->static_fields;
  v19 = (System_Int32_array **)StringLiteral_2891/*"Bond/DownloadBond"*/;
  static_fields->AtlasPath = (struct System_String_o *)StringLiteral_2891/*"Bond/DownloadBond"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->AtlasPath, v19, v2, v3, v4, v5, v6, v7);
  v20 = FriendshipGaugeEx_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_5442/*"DownloadBondAtlas"*/;
  v20->ObjectName = (struct System_String_o *)StringLiteral_5442/*"DownloadBondAtlas"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v20->ObjectName, v21, v22, v23, v24, v25, v26, v27);
  v28 = FriendshipGaugeEx_TypeInfo->static_fields;
  v29 = (System_Int32_array **)StringLiteral_19695/*"img_bondsgage_11"*/;
  v28->SpriteName = (struct System_String_o *)StringLiteral_19695/*"img_bondsgage_11"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v28->SpriteName, v29, v30, v31, v32, v33, v34, v35);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  FriendshipMaster_o *MasterData_WarQuestSelectionMaster; // x24
  float v17; // s0
  const MethodInfo *v18; // x4
  int32_t v19; // w23
  int32_t FriendShipRank; // w0
  int32_t v21; // w3
  const MethodInfo *v22; // x4

  if ( (byte_42EB507 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FriendshipMaster___, (_DWORD)max, (_DWORD)isLevelUp, isChange);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB507 = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (FriendshipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FriendshipMaster___),
        v17 = BattleUtility__Lerp((float)this->fields.nowFriendship, (float)this->fields.nextFriendship, val, 0LL),
        Instance = (WebViewManager_o *)BattleUtility__FloorToInt(v17, 0LL),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B5D69C(Instance, v15);
  }
  v19 = (int)Instance;
  FriendShipRank = FriendshipMaster__getFriendShipRank(
                     MasterData_WarQuestSelectionMaster,
                     this->fields.friendshipId,
                     (int32_t)Instance,
                     this->fields.nowFriendshipRank,
                     v18);
  if ( FriendShipRank == this->fields.exceedMaxFriendshipRank )
    *max = 1;
  if ( FriendShipRank != this->fields.prevRank )
  {
    *isLevelUp = 1;
    this->fields.prevRank = FriendShipRank;
  }
  if ( v19 != this->fields.prevPoint )
  {
    *isChange = 1;
    this->fields.prevPoint = v19;
  }
  FriendshipGaugeEx__ChangeGaugeData(this, this->fields.friendshipId, v19, v21, v22);
  return v19 - this->fields.nowFriendship;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGaugeEx__ChangeGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendshipId,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int **Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  FriendshipMaster_o *v17; // x22
  const MethodInfo *v18; // x3
  int v19; // w26
  struct UnityEngine_GameObject_array *iconRoots; // x8
  __int64 v21; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v23; // x27
  struct UISprite_array *icons; // x10
  int32_t v25; // w2
  int32_t v26; // w8
  int **v27; // x23
  struct UISprite_array *v28; // x10
  float v29; // s0
  struct UISprite_array *v30; // x8
  struct UISprite_array *v31; // x8
  signed __int64 v32; // x28
  int32_t exceedCount; // w23
  struct UnityEngine_GameObject_array *v34; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  FriendshipGaugeEx_c *v36; // x8
  bool v37; // cc
  UnityEngine_GameObject_o *v38; // x23
  float POSITION_Y_DEFAULT; // s0
  __int64 v40; // x0

  if ( (byte_42EB508 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_FriendshipMaster___, friendshipId, friendship, *(_QWORD *)&friendshipRank);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&FriendshipGaugeEx_TypeInfo, v11, v12, v13);
    byte_42EB508 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_WarQuestSelectionMaster
    || ((v17 = (FriendshipMaster_o *)Master_WarQuestSelectionMaster,
         (Master_WarQuestSelectionMaster = (int **)FriendshipMaster__GetEntity(
                                                     (FriendshipMaster_o *)Master_WarQuestSelectionMaster,
                                                     friendshipId,
                                                     this->fields.maxFriendshipRank - 1,
                                                     v16)) == 0LL)
      ? (v19 = 0)
      : (v19 = *((_DWORD *)Master_WarQuestSelectionMaster + 6)),
        (iconRoots = this->fields.iconRoots) == 0LL) )
  {
LABEL_55:
    sub_B5D69C(Master_WarQuestSelectionMaster, v15);
  }
  v21 = 4LL;
  while ( 1 )
  {
    max_length = iconRoots->max_length;
    v23 = v21 - 4;
    if ( v21 - 4 >= (int)max_length )
      break;
    icons = this->fields.icons;
    if ( !icons )
      goto LABEL_55;
    if ( (__int64)v23 >= (int)icons->max_length )
      break;
    v25 = v21 + this->fields.maxFriendshipRank - 4;
    if ( v25 >= this->fields.exceedMaxFriendshipRank )
    {
      if ( v23 >= max_length )
        goto LABEL_57;
      Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&iconRoots->obj.klass + v21);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    }
    else
    {
      Master_WarQuestSelectionMaster = (int **)FriendshipMaster__GetEntity(v17, friendshipId, v25, v18);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_55;
      v26 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
      v27 = Master_WarQuestSelectionMaster;
      if ( v26 <= friendship )
      {
        v30 = this->fields.icons;
        if ( !v30 )
          goto LABEL_55;
        if ( v23 >= v30->max_length )
          goto LABEL_57;
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v30->obj.klass + v21);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        v29 = 1.0;
      }
      else if ( friendship - v19 <= 0 )
      {
        v31 = this->fields.icons;
        if ( !v31 )
          goto LABEL_55;
        if ( v23 >= v31->max_length )
        {
LABEL_57:
          v40 = sub_B5D6C8(Master_WarQuestSelectionMaster);
          sub_B5D668(v40, 0LL);
        }
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v31->obj.klass + v21);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        v29 = 0.0;
      }
      else
      {
        v28 = this->fields.icons;
        if ( !v28 )
          goto LABEL_55;
        if ( v23 >= v28->max_length )
          goto LABEL_57;
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v28->obj.klass + v21);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        v29 = (float)(friendship - v19) / (float)(v26 - v19);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Master_WarQuestSelectionMaster, v29, 0LL);
      Master_WarQuestSelectionMaster = (int **)FriendshipGaugeEx_TypeInfo;
      v19 = *((_DWORD *)v27 + 6);
      if ( (BYTE3(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
        Master_WarQuestSelectionMaster = (int **)FriendshipGaugeEx_TypeInfo;
      }
      v32 = *Master_WarQuestSelectionMaster[23];
      if ( (__int64)v23 < v32 )
      {
        exceedCount = this->fields.exceedCount;
        if ( (*((_BYTE *)Master_WarQuestSelectionMaster + 307) & 4) != 0
          && !*((_DWORD *)Master_WarQuestSelectionMaster + 56) )
        {
          j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
          LODWORD(v32) = FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN;
        }
        v34 = this->fields.iconRoots;
        if ( !v34 )
          goto LABEL_55;
        if ( v23 >= v34->max_length )
          goto LABEL_57;
        Master_WarQuestSelectionMaster = (int **)*((_QWORD *)&v34->obj.klass + v21);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_55;
        gameObject = UnityEngine_GameObject__get_gameObject(
                       (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                       0LL);
        v36 = FriendshipGaugeEx_TypeInfo;
        v37 = exceedCount <= (int)v32;
        v38 = gameObject;
        if ( v37 )
        {
          if ( (WORD1(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
            v36 = FriendshipGaugeEx_TypeInfo;
          }
          POSITION_Y_DEFAULT = v36->static_fields->POSITION_Y_DEFAULT;
        }
        else
        {
          if ( (WORD1(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
            v36 = FriendshipGaugeEx_TypeInfo;
          }
          POSITION_Y_DEFAULT = v36->static_fields->POSITION_Y_OTHER;
        }
        GameObjectExtensions__SetLocalPositionY(v38, POSITION_Y_DEFAULT, 0LL);
      }
    }
    iconRoots = this->fields.iconRoots;
    ++v21;
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
    sub_B5D69C(0LL, v3);
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
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGaugeEx__Start(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  FriendshipGaugeEx_c *v17; // x0
  System_String_o *AtlasPath; // x20
  AssetLoader_LoadEndDataHandler_o *v19; // x21

  if ( (byte_42EB506 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendshipGaugeEx__Start_b__19_0__, v5, v6, v7);
    sub_B5D5C4(&FriendshipGaugeEx_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_4671/*"DISABLE_FRIENDSHIP_EXCEED"*/, v14, v15, v16);
    byte_42EB506 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_4671/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL) != 1 )
  {
    v17 = FriendshipGaugeEx_TypeInfo;
    if ( (BYTE3(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v17 = FriendshipGaugeEx_TypeInfo;
    }
    AtlasPath = v17->static_fields->AtlasPath;
    v19 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v19, (Il2CppObject *)this, Method_FriendshipGaugeEx__Start_b__19_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(AtlasPath, v19, 1, 0LL);
  }
}


void __fastcall FriendshipGaugeEx___Start_b__19_0(
        FriendshipGaugeEx_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  FriendshipGaugeEx_c *v12; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  __int64 v14; // x1

  if ( (byte_42EB50A & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)asset, (_DWORD)method, v3);
    sub_B5D5C4(&FriendshipGaugeEx_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v9, v10, v11);
    byte_42EB50A = 1;
  }
  if ( asset )
  {
    v12 = FriendshipGaugeEx_TypeInfo;
    if ( (BYTE3(FriendshipGaugeEx_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v12 = FriendshipGaugeEx_TypeInfo;
    }
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   asset,
                                                                   v12->static_fields->ObjectName,
                                                                   (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( !Object_WarBoardWaitTimeSetting
      || (Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         Object_WarBoardWaitTimeSetting,
                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bigIcon)
      || (UISprite__set_atlas(this->fields.bigIcon, (UIAtlas_o *)Object_WarBoardWaitTimeSetting, 0LL),
          (Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)this->fields.bigIcon) == 0LL) )
    {
      sub_B5D69C(Object_WarBoardWaitTimeSetting, v14);
    }
    UISprite__set_spriteName(
      (UISprite_o *)Object_WarBoardWaitTimeSetting,
      FriendshipGaugeEx_TypeInfo->static_fields->SpriteName,
      0LL);
  }
}