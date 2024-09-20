void __fastcall FriendshipGaugeEx___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct FriendshipGaugeEx_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct FriendshipGaugeEx_StaticFields *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  struct FriendshipGaugeEx_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5E47C & 1) == 0 )
  {
    sub_1B885B0(&FriendshipGaugeEx_TypeInfo);
    sub_1B885B0(&StringLiteral_5365/*"DownloadBondAtlas"*/);
    sub_1B885B0(&StringLiteral_20271/*"img_bondsgage_11"*/);
    sub_1B885B0(&StringLiteral_3308/*"Bond/DownloadBond"*/);
    byte_4A5E47C = 1;
  }
  static_fields = FriendshipGaugeEx_TypeInfo->static_fields;
  static_fields->MAX_COLUMN = 5;
  *(_QWORD *)&static_fields->POSITION_Y_DEFAULT = 0x412000003F19999ALL;
  v4 = StringLiteral_3308/*"Bond/DownloadBond"*/;
  static_fields->AtlasPath = (struct System_String_o *)StringLiteral_3308/*"Bond/DownloadBond"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->AtlasPath, v4, v1, v2);
  v5 = StringLiteral_5365/*"DownloadBondAtlas"*/;
  v6 = FriendshipGaugeEx_TypeInfo->static_fields;
  v6->ObjectName = (struct System_String_o *)StringLiteral_5365/*"DownloadBondAtlas"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->ObjectName, v5, v7, v8);
  v9 = StringLiteral_20271/*"img_bondsgage_11"*/;
  v10 = FriendshipGaugeEx_TypeInfo->static_fields;
  v10->SpriteName = (struct System_String_o *)StringLiteral_20271/*"img_bondsgage_11"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->SpriteName, v9, v11, v12);
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
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x24
  float v14; // s0
  int32_t v15; // w23
  int32_t FriendShipRank; // w0
  int32_t v17; // w3
  const MethodInfo *v18; // x4

  if ( (byte_4A5E47A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E47A = 1;
  }
  *max = 0;
  *isLevelUp = 0;
  *isChange = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FriendshipMaster___),
        v14 = BattleUtility__Lerp((float)this->fields.nowFriendship, (float)this->fields.nextFriendship, val, 0LL),
        Instance = (Il2CppObject *)BattleUtility__FloorToInt(v14, 0LL),
        !MasterData_object) )
  {
    sub_1B8880C(Instance, v12);
  }
  v15 = (int)Instance;
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
  if ( v15 != this->fields.prevPoint )
  {
    *isChange = 1;
    this->fields.prevPoint = v15;
  }
  FriendshipGaugeEx__ChangeGaugeData(this, this->fields.friendshipId, v15, v17, v18);
  return v15 - this->fields.nowFriendship;
}


void __fastcall FriendshipGaugeEx__ChangeGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendshipId,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  int **Master_object; // x0
  __int64 v9; // x1
  FriendshipMaster_o *v10; // x22
  int v11; // w26
  struct UnityEngine_GameObject_array *iconRoots; // x8
  __int64 v13; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v15; // x27
  struct UISprite_array *icons; // x10
  int32_t v17; // w2
  int32_t v18; // w8
  int **v19; // x23
  struct UISprite_array *v20; // x10
  float v21; // s0
  struct UISprite_array *v22; // x8
  struct UISprite_array *v23; // x8
  signed __int64 v24; // x29
  int32_t exceedCount; // w28
  struct UnityEngine_GameObject_array *v26; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  FriendshipGaugeEx_c *v28; // x8
  UnityEngine_GameObject_o *v29; // x23
  struct FriendshipGaugeEx_StaticFields *static_fields; // x8
  float POSITION_Y_DEFAULT; // s0

  if ( (byte_4A5E47B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_FriendshipMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&FriendshipGaugeEx_TypeInfo);
    byte_4A5E47B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int **)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_object
    || ((v10 = (FriendshipMaster_o *)Master_object,
         (Master_object = (int **)FriendshipMaster__GetEntity(
                                    (FriendshipMaster_o *)Master_object,
                                    friendshipId,
                                    this->fields.maxFriendshipRank - 1,
                                    0LL)) == 0LL)
      ? (v11 = 0)
      : (v11 = *((_DWORD *)Master_object + 6)),
        (iconRoots = this->fields.iconRoots) == 0LL) )
  {
LABEL_48:
    sub_1B8880C(Master_object, v9);
  }
  v13 = 4LL;
  while ( 1 )
  {
    max_length = iconRoots->max_length;
    v15 = v13 - 4;
    if ( v13 - 4 >= (int)max_length )
      break;
    icons = this->fields.icons;
    if ( !icons )
      goto LABEL_48;
    if ( (__int64)v15 >= (int)icons->max_length )
      break;
    v17 = v13 + this->fields.maxFriendshipRank - 4;
    if ( v17 >= this->fields.exceedMaxFriendshipRank )
    {
      if ( v15 >= max_length )
        goto LABEL_50;
      Master_object = (int **)*((_QWORD *)&iconRoots->obj.klass + v13);
      if ( !Master_object )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    }
    else
    {
      Master_object = (int **)FriendshipMaster__GetEntity(v10, friendshipId, v17, 0LL);
      if ( !Master_object )
        goto LABEL_48;
      v18 = *((_DWORD *)Master_object + 6);
      v19 = Master_object;
      if ( v18 <= friendship )
      {
        v22 = this->fields.icons;
        if ( !v22 )
          goto LABEL_48;
        if ( v15 >= v22->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v22->obj.klass + v13);
        if ( !Master_object )
          goto LABEL_48;
        v21 = 1.0;
      }
      else if ( friendship - v11 <= 0 )
      {
        v23 = this->fields.icons;
        if ( !v23 )
          goto LABEL_48;
        if ( v15 >= v23->max_length )
LABEL_50:
          sub_1B88814(Master_object, v9);
        Master_object = (int **)*((_QWORD *)&v23->obj.klass + v13);
        if ( !Master_object )
          goto LABEL_48;
        v21 = 0.0;
      }
      else
      {
        v20 = this->fields.icons;
        if ( !v20 )
          goto LABEL_48;
        if ( v15 >= v20->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v20->obj.klass + v13);
        if ( !Master_object )
          goto LABEL_48;
        v21 = (float)(friendship - v11) / (float)(v18 - v11);
      }
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Master_object, v21, 0LL);
      Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      v11 = *((_DWORD *)v19 + 6);
      if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
        Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      }
      v24 = *Master_object[23];
      if ( (__int64)v15 < v24 )
      {
        exceedCount = this->fields.exceedCount;
        if ( !*((_DWORD *)Master_object + 56) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          LODWORD(v24) = FriendshipGaugeEx_TypeInfo->static_fields->MAX_COLUMN;
        }
        v26 = this->fields.iconRoots;
        if ( !v26 )
          goto LABEL_48;
        if ( v15 >= v26->max_length )
          goto LABEL_50;
        Master_object = (int **)*((_QWORD *)&v26->obj.klass + v13);
        if ( !Master_object )
          goto LABEL_48;
        gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0LL);
        v28 = FriendshipGaugeEx_TypeInfo;
        v29 = gameObject;
        if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
          v28 = FriendshipGaugeEx_TypeInfo;
        }
        static_fields = v28->static_fields;
        if ( exceedCount <= (int)v24 )
          POSITION_Y_DEFAULT = static_fields->POSITION_Y_DEFAULT;
        else
          POSITION_Y_DEFAULT = static_fields->POSITION_Y_OTHER;
        GameObjectExtensions__SetLocalPositionY(v29, POSITION_Y_DEFAULT, 0LL);
      }
    }
    iconRoots = this->fields.iconRoots;
    ++v13;
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
    sub_1B8880C(0LL, v3);
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
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGaugeEx__Start(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  FriendshipGaugeEx_c *v3; // x0
  System_String_o *AtlasPath; // x20
  AssetLoader_LoadEndDataHandler_o *v5; // x21

  if ( (byte_4A5E479 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_FriendshipGaugeEx__Start_b__19_0__);
    sub_1B885B0(&FriendshipGaugeEx_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&StringLiteral_5046/*"DISABLE_FRIENDSHIP_EXCEED"*/);
    byte_4A5E479 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_5046/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL) != 1 )
  {
    v3 = FriendshipGaugeEx_TypeInfo;
    if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v3 = FriendshipGaugeEx_TypeInfo;
    }
    AtlasPath = v3->static_fields->AtlasPath;
    v5 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v5, (Il2CppObject *)this, Method_FriendshipGaugeEx__Start_b__19_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(AtlasPath, v5, 1, 0LL);
  }
}


void __fastcall FriendshipGaugeEx___Start_b__19_0(
        FriendshipGaugeEx_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  FriendshipGaugeEx_c *v5; // x0
  UnityEngine_GameObject_o *Object_object__48635516; // x0
  __int64 v7; // x1

  if ( (byte_4A5E47D & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&FriendshipGaugeEx_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_4A5E47D = 1;
  }
  if ( asset )
  {
    v5 = FriendshipGaugeEx_TypeInfo;
    if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v5 = FriendshipGaugeEx_TypeInfo;
    }
    Object_object__48635516 = (UnityEngine_GameObject_o *)AssetData__GetObject_object__48635516(
                                                            asset,
                                                            v5->static_fields->ObjectName,
                                                            (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !Object_object__48635516
      || (Object_object__48635516 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  Object_object__48635516,
                                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bigIcon)
      || (UISprite__set_atlas(this->fields.bigIcon, (UIAtlas_o *)Object_object__48635516, 0LL),
          (Object_object__48635516 = (UnityEngine_GameObject_o *)this->fields.bigIcon) == 0LL) )
    {
      sub_1B8880C(Object_object__48635516, v7);
    }
    UISprite__set_spriteName(
      (UISprite_o *)Object_object__48635516,
      FriendshipGaugeEx_TypeInfo->static_fields->SpriteName,
      0LL);
  }
}