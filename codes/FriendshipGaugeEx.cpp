void __fastcall FriendshipGaugeEx___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct FriendshipGaugeEx_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct FriendshipGaugeEx_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  struct FriendshipGaugeEx_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A22CD5 & 1) == 0 )
  {
    sub_1B715CC(&FriendshipGaugeEx_TypeInfo, v1);
    sub_1B715CC(&StringLiteral_5346/*"DownloadBondAtlas"*/, v4);
    sub_1B715CC(&StringLiteral_20219/*"img_bondsgage_11"*/, v5);
    sub_1B715CC(&StringLiteral_3291/*"Bond/DownloadBond"*/, v6);
    byte_4A22CD5 = 1;
  }
  static_fields = FriendshipGaugeEx_TypeInfo->static_fields;
  static_fields->MAX_COLUMN = 5;
  *(_QWORD *)&static_fields->POSITION_Y_DEFAULT = 0x412000003F19999ALL;
  v8 = StringLiteral_3291/*"Bond/DownloadBond"*/;
  static_fields->AtlasPath = (struct System_String_o *)StringLiteral_3291/*"Bond/DownloadBond"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->AtlasPath, v8, v2, v3);
  v9 = StringLiteral_5346/*"DownloadBondAtlas"*/;
  v10 = FriendshipGaugeEx_TypeInfo->static_fields;
  v10->ObjectName = (struct System_String_o *)StringLiteral_5346/*"DownloadBondAtlas"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v10->ObjectName, v9, v11, v12);
  v13 = StringLiteral_20219/*"img_bondsgage_11"*/;
  v14 = FriendshipGaugeEx_TypeInfo->static_fields;
  v14->SpriteName = (struct System_String_o *)StringLiteral_20219/*"img_bondsgage_11"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v14->SpriteName, v13, v15, v16);
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
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x24
  float v15; // s0
  int32_t v16; // w23
  int32_t FriendShipRank; // w0
  int32_t v18; // w3
  const MethodInfo *v19; // x4

  if ( (byte_4A22CD3 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_FriendshipMaster___, max);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A22CD3 = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        v15 = BattleUtility__Lerp((float)this->fields.nowFriendship, (float)this->fields.nextFriendship, val, 0LL),
        Instance = (Il2CppObject *)BattleUtility__FloorToInt(v15, 0LL),
        !MasterData_object) )
  {
    sub_1B71828(Instance, v13);
  }
  v16 = (int)Instance;
  FriendShipRank = FriendshipMaster__getFriendShipRank(
                     (FriendshipMaster_o *)MasterData_object,
                     this->fields.friendshipId,
                     (int32_t)Instance,
                     this->fields.nowFriendshipRank,
                     0LL);
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
  int **Master_object; // x0
  __int64 v11; // x1
  FriendshipMaster_o *v12; // x22
  int v13; // w26
  struct UnityEngine_GameObject_array *iconRoots; // x8
  __int64 v15; // x25
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
  signed __int64 v26; // x29
  int32_t exceedCount; // w28
  struct UnityEngine_GameObject_array *v28; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  FriendshipGaugeEx_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x23
  struct FriendshipGaugeEx_StaticFields *static_fields; // x8
  float POSITION_Y_DEFAULT; // s0

  if ( (byte_4A22CD4 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_FriendshipMaster___, *(_QWORD *)&friendshipId);
    sub_1B715CC(&DataManager_TypeInfo, v8);
    sub_1B715CC(&FriendshipGaugeEx_TypeInfo, v9);
    byte_4A22CD4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int **)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_object
    || ((v12 = (FriendshipMaster_o *)Master_object,
         (Master_object = (int **)FriendshipMaster__GetEntity(
                                    (FriendshipMaster_o *)Master_object,
                                    friendshipId,
                                    this->fields.maxFriendshipRank - 1,
                                    0LL)) == 0LL)
      ? (v13 = 0)
      : (v13 = *((_DWORD *)Master_object + 6)),
        (iconRoots = this->fields.iconRoots) == 0LL) )
  {
LABEL_48:
    sub_1B71828(Master_object, v11);
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
      goto LABEL_48;
    if ( (__int64)v17 >= (int)icons->max_length )
      break;
    v19 = v15 + this->fields.maxFriendshipRank - 4;
    if ( v19 >= this->fields.exceedMaxFriendshipRank )
    {
      if ( v17 >= max_length )
        goto LABEL_50;
      Master_object = (int **)*((_QWORD *)&iconRoots->obj.klass + v15);
      if ( !Master_object )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    }
    else
    {
      Master_object = (int **)FriendshipMaster__GetEntity(v12, friendshipId, v19, 0LL);
      if ( !Master_object )
        goto LABEL_48;
      v20 = *((_DWORD *)Master_object + 6);
      v21 = Master_object;
      if ( v20 <= friendship )
      {
        v24 = this->fields.icons;
        if ( !v24 )
          goto LABEL_48;
        if ( v17 >= v24->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v24->obj.klass + v15);
        if ( !Master_object )
          goto LABEL_48;
        v23 = 1.0;
      }
      else if ( friendship - v13 <= 0 )
      {
        v25 = this->fields.icons;
        if ( !v25 )
          goto LABEL_48;
        if ( v17 >= v25->max_length )
LABEL_50:
          sub_1B71830(Master_object, v11);
        Master_object = (int **)*((_QWORD *)&v25->obj.klass + v15);
        if ( !Master_object )
          goto LABEL_48;
        v23 = 0.0;
      }
      else
      {
        v22 = this->fields.icons;
        if ( !v22 )
          goto LABEL_48;
        if ( v17 >= v22->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v22->obj.klass + v15);
        if ( !Master_object )
          goto LABEL_48;
        v23 = (float)(friendship - v13) / (float)(v20 - v13);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Master_object, v23, 0LL);
      Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      v13 = *((_DWORD *)v21 + 6);
      if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
        Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      }
      v26 = *Master_object[23];
      if ( (__int64)v17 < v26 )
      {
        exceedCount = this->fields.exceedCount;
        if ( !*((_DWORD *)Master_object + 56) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          LODWORD(v26) = FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN;
        }
        v28 = this->fields.iconRoots;
        if ( !v28 )
          goto LABEL_48;
        if ( v17 >= v28->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v28->obj.klass + v15);
        if ( !Master_object )
          goto LABEL_48;
        gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0LL);
        v30 = FriendshipGaugeEx_TypeInfo;
        v31 = gameObject;
        if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
          v30 = FriendshipGaugeEx_TypeInfo;
        }
        static_fields = v30->static_fields;
        if ( exceedCount <= (int)v26 )
          POSITION_Y_DEFAULT = static_fields->POSITION_Y_DEFAULT;
        else
          POSITION_Y_DEFAULT = static_fields->POSITION_Y_OTHER;
        GameObjectExtensions__SetLocalPositionY(v31, POSITION_Y_DEFAULT, 0LL);
      }
    }
    iconRoots = this->fields.iconRoots;
    ++v15;
    if ( !iconRoots )
      goto LABEL_48;
  }
}


void __fastcall FriendshipGaugeEx__Hide(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B71828(0LL, v3);
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
    sub_1B71828(0LL, v3);
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

  if ( (byte_4A22CD2 & 1) == 0 )
  {
    sub_1B715CC(&AssetManager_TypeInfo, method);
    sub_1B715CC(&Method_FriendshipGaugeEx__Start_b__19_0__, v3);
    sub_1B715CC(&FriendshipGaugeEx_TypeInfo, v4);
    sub_1B715CC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B715CC(&StringLiteral_5027/*"DISABLE_FRIENDSHIP_EXCEED"*/, v6);
    byte_4A22CD2 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_5027/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL) != 1 )
  {
    v7 = FriendshipGaugeEx_TypeInfo;
    if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v7 = FriendshipGaugeEx_TypeInfo;
    }
    AtlasPath = v7->static_fields->AtlasPath;
    v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1B71818(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_FriendshipGaugeEx__Start_b__19_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
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
  UnityEngine_GameObject_o *Object_object__48486748; // x0
  __int64 v9; // x1

  if ( (byte_4A22CD6 & 1) == 0 )
  {
    sub_1B715CC(&Method_AssetData_GetObject_GameObject____75846976, asset);
    sub_1B715CC(&FriendshipGaugeEx_TypeInfo, v5);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6);
    byte_4A22CD6 = 1;
  }
  if ( asset )
  {
    v7 = FriendshipGaugeEx_TypeInfo;
    if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v7 = FriendshipGaugeEx_TypeInfo;
    }
    Object_object__48486748 = (UnityEngine_GameObject_o *)AssetData__GetObject_object__48486748(
                                                            asset,
                                                            v7->static_fields->ObjectName,
                                                            (const MethodInfo_2E3D95C *)Method_AssetData_GetObject_GameObject____75846976);
    if ( !Object_object__48486748
      || (Object_object__48486748 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  Object_object__48486748,
                                                                  (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bigIcon)
      || (UISprite__set_atlas(this->fields.bigIcon, (UIAtlas_o *)Object_object__48486748, 0LL),
          (Object_object__48486748 = (UnityEngine_GameObject_o *)this->fields.bigIcon) == 0LL) )
    {
      sub_1B71828(Object_object__48486748, v9);
    }
    UISprite__set_spriteName(
      (UISprite_o *)Object_object__48486748,
      FriendshipGaugeEx_TypeInfo->static_fields->SpriteName,
      0LL);
  }
}