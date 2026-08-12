void FriendshipGaugeEx___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct FriendshipGaugeEx_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct FriendshipGaugeEx_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  struct FriendshipGaugeEx_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5974537 & 1) == 0 )
  {
    sub_2213A60(&FriendshipGaugeEx_TypeInfo);
    sub_2213A60(&StringLiteral_5523/*"DownloadBondAtlas"*/);
    sub_2213A60(&StringLiteral_21324/*"img_bondsgage_11"*/);
    sub_2213A60(&StringLiteral_3321/*"Bond/DownloadBond"*/);
    byte_5974537 = 1;
  }
  v7 = StringLiteral_3321/*"Bond/DownloadBond"*/;
  static_fields = FriendshipGaugeEx_TypeInfo->static_fields;
  static_fields->MAX_COLUMN = 5;
  *(_QWORD *)&static_fields->POSITION_Y_DEFAULT = 0x412000003F19999ALL;
  static_fields->AtlasPath = (struct System_String_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->AtlasPath, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_5523/*"DownloadBondAtlas"*/;
  v10 = FriendshipGaugeEx_TypeInfo->static_fields;
  v10->ObjectName = (struct System_String_o *)StringLiteral_5523/*"DownloadBondAtlas"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->ObjectName, v9, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_21324/*"img_bondsgage_11"*/;
  v18 = FriendshipGaugeEx_TypeInfo->static_fields;
  v18->SpriteName = (struct System_String_o *)StringLiteral_21324/*"img_bondsgage_11"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->SpriteName, v17, v19, v20, v21, v22, v23, v24);
}


void FriendshipGaugeEx___ctor(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.prevRank = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


float FriendshipGaugeEx__CalculateFillAmount(
        FriendshipGaugeEx_o *this,
        int32_t *currentFriendship,
        int32_t *prevRankFriendship,
        int32_t *nextRankFriendship,
        const MethodInfo *method)
{
  float result; // s0
  int v6; // w9

  result = 1.0;
  if ( *currentFriendship < *nextRankFriendship )
  {
    v6 = *currentFriendship - *prevRankFriendship;
    if ( v6 < 1 )
      return 0.0;
    else
      return (float)v6 / (float)(*nextRankFriendship - *prevRankFriendship);
  }
  return result;
}


int32_t FriendshipGaugeEx__ChangeGauge(
        FriendshipGaugeEx_o *this,
        float val,
        bool *isMax,
        bool *isLevelUp,
        bool *isChange,
        int32_t *remainingFriendship,
        const MethodInfo *method)
{
  float v13; // s0
  __int64 v14; // x1
  int32_t v15; // w24
  void *Master_object; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  int32_t prevPoint; // w8

  if ( (byte_5974535 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FriendshipMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5974535 = 1;
  }
  v13 = BattleUtility__Lerp((float)this->fields.nowFriendship, (float)this->fields.nextFriendship, val, 0);
  v15 = BattleUtility__FloorToInt(v13, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_object
    || (Master_object = FriendshipMaster__GetFriendShipRankEntity(
                          (FriendshipMaster_o *)Master_object,
                          this->fields.friendshipId,
                          v15,
                          this->fields.nowFriendshipRank,
                          0)) == 0 )
  {
    sub_2213CDC(Master_object, v17);
  }
  *remainingFriendship = *((_DWORD *)Master_object + 6) - v15;
  *isMax = *((_DWORD *)Master_object + 5) == this->fields.exceedMaxFriendshipRank;
  *isLevelUp = *((_DWORD *)Master_object + 5) != this->fields.prevRank;
  prevPoint = this->fields.prevPoint;
  this->fields.prevRank = *((_DWORD *)Master_object + 5);
  *isChange = v15 != prevPoint;
  this->fields.prevPoint = v15;
  FriendshipGaugeEx__ChangeGaugeData(this, v15, v18);
  return v15 - this->fields.nowFriendship;
}


// local variable allocation has failed, the output may be wrong!
void FriendshipGaugeEx__ChangeGaugeData(FriendshipGaugeEx_o *this, int32_t friendship, const MethodInfo *method)
{
  int **Master_object; // x0
  __int64 v6; // x1
  FriendshipMaster_o *v7; // x21
  int v8; // w25
  struct UnityEngine_GameObject_array *iconRoots; // x8
  __int64 v10; // x24
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v12; // x26
  struct UISprite_array *icons; // x10
  struct UISprite_array *v14; // x8
  int **v15; // x22
  int32_t v16; // w9
  float v17; // s0
  struct UnityEngine_GameObject_array *v18; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  FriendshipGaugeEx_c *v21; // x8
  int32_t smallIconVisibleCount; // w26
  UnityEngine_GameObject_o *v23; // x22
  struct FriendshipGaugeEx_StaticFields *static_fields; // x9
  int v25; // w10
  float *p_POSITION_Y_DEFAULT; // x8

  if ( (byte_5974536 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FriendshipMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&FriendshipGaugeEx_TypeInfo);
    byte_5974536 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&friendship);
  Master_object = (int **)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_object
    || ((v7 = (FriendshipMaster_o *)Master_object,
         (Master_object = (int **)FriendshipMaster__GetEntity(
                                    (FriendshipMaster_o *)Master_object,
                                    this->fields.friendshipId,
                                    9,
                                    0)) == 0)
      ? (v8 = 0)
      : (v8 = *((_DWORD *)Master_object + 6)),
        (iconRoots = this->fields.iconRoots) == 0) )
  {
LABEL_43:
    sub_2213CDC(Master_object, v6);
  }
  v10 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(iconRoots->max_length);
    v12 = v10 - 4;
    if ( v10 - 4 >= (int)max_length_low )
      break;
    icons = this->fields.icons;
    if ( !icons )
      goto LABEL_43;
    if ( (__int64)v12 >= SLODWORD(icons->max_length) )
      break;
    if ( (int)v10 + 6 >= this->fields.exceedMaxFriendshipRank )
    {
      if ( v12 >= max_length_low )
        goto LABEL_45;
      Master_object = (int **)*((_QWORD *)&iconRoots->obj.klass + v10);
      if ( !Master_object )
        goto LABEL_43;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    }
    else
    {
      Master_object = (int **)FriendshipMaster__GetEntity(v7, this->fields.friendshipId, (int)v10 + 6, 0);
      v14 = this->fields.icons;
      if ( !v14 )
        goto LABEL_43;
      if ( v12 >= LODWORD(v14->max_length) )
        goto LABEL_45;
      v15 = Master_object;
      if ( !Master_object )
        goto LABEL_43;
      v16 = *((_DWORD *)Master_object + 6);
      v17 = 1.0;
      if ( v16 > friendship )
      {
        if ( friendship - v8 < 1 )
          v17 = 0.0;
        else
          v17 = (float)(friendship - v8) / (float)(v16 - v8);
      }
      Master_object = (int **)*((_QWORD *)&v14->obj.klass + v10);
      if ( !Master_object )
        goto LABEL_43;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Master_object, v17, 0);
      Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      v8 = *((_DWORD *)v15 + 6);
      if ( !*(&FriendshipGaugeEx_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo, v6);
        Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      }
      if ( (__int64)v12 < *Master_object[23] )
      {
        v18 = this->fields.iconRoots;
        if ( !v18 )
          goto LABEL_43;
        if ( v12 >= LODWORD(v18->max_length) )
LABEL_45:
          sub_2213CE4(Master_object);
        Master_object = (int **)*((_QWORD *)&v18->obj.klass + v10);
        if ( !Master_object )
          goto LABEL_43;
        gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0);
        v21 = FriendshipGaugeEx_TypeInfo;
        smallIconVisibleCount = this->fields.smallIconVisibleCount;
        v23 = gameObject;
        if ( !*(&FriendshipGaugeEx_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo, v20);
          v21 = FriendshipGaugeEx_TypeInfo;
        }
        static_fields = v21->static_fields;
        v25 = *(&v21->_2.cctor_finished + 1);
        if ( smallIconVisibleCount <= static_fields->MAX_COLUMN )
        {
          if ( !v25 )
          {
            j_il2cpp_runtime_class_init_0(v21, v20);
            static_fields = FriendshipGaugeEx_TypeInfo->static_fields;
          }
          p_POSITION_Y_DEFAULT = &static_fields->POSITION_Y_DEFAULT;
        }
        else
        {
          if ( !v25 )
          {
            j_il2cpp_runtime_class_init_0(v21, v20);
            static_fields = FriendshipGaugeEx_TypeInfo->static_fields;
          }
          p_POSITION_Y_DEFAULT = &static_fields->POSITION_Y_OTHER;
        }
        GameObjectExtensions__SetLocalPositionY(v23, *p_POSITION_Y_DEFAULT, 0);
      }
    }
    iconRoots = this->fields.iconRoots;
    ++v10;
    if ( !iconRoots )
      goto LABEL_43;
  }
}


void FriendshipGaugeEx__Hide(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


bool FriendshipGaugeEx__IsChange(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  return this->fields.nowFriendship != this->fields.nextFriendship;
}


// local variable allocation has failed, the output may be wrong!
void FriendshipGaugeEx__SetGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t inFriendshipId,
        int32_t inFriendship,
        int32_t inFriendshipRank,
        int32_t inMaxFriendShipRank,
        int32_t inExceedCount,
        const MethodInfo *method)
{
  this->fields.nowFriendship = inFriendship;
  this->fields.friendshipId = inFriendshipId;
  this->fields.exceedMaxFriendshipRank = inExceedCount + inMaxFriendShipRank;
  this->fields.nowFriendshipRank = inFriendshipRank;
  this->fields.smallIconVisibleCount = inExceedCount + inMaxFriendShipRank - 10;
  this->fields.prevRank = inFriendshipRank;
  this->fields.prevPoint = inFriendship;
  FriendshipGaugeEx__ChangeGaugeData(this, inFriendship, *(const MethodInfo **)&inFriendship);
}


void FriendshipGaugeEx__SetNextGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  this->fields.nextFriendship = friendship;
  this->fields.nextFriendshipRank = friendshipRank;
}


void FriendshipGaugeEx__Show(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void FriendshipGaugeEx__Start(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendshipGaugeEx_c *v4; // x0
  System_String_o *AtlasPath; // x20
  AssetLoader_LoadEndDataHandler_o *v6; // x21
  __int64 v7; // x1

  if ( (byte_5974534 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_FriendshipGaugeEx__Start_b__19_0__);
    sub_2213A60(&FriendshipGaugeEx_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&StringLiteral_5203/*"DISABLE_FRIENDSHIP_EXCEED"*/);
    byte_5974534 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_5203/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0) != 1 )
  {
    v4 = FriendshipGaugeEx_TypeInfo;
    if ( !*(&FriendshipGaugeEx_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo, v3);
      v4 = FriendshipGaugeEx_TypeInfo;
    }
    AtlasPath = v4->static_fields->AtlasPath;
    v6 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v6, (Il2CppObject *)this, Method_FriendshipGaugeEx__Start_b__19_0__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
    AssetManager__loadAssetStorage(AtlasPath, v6, 1, 0, 0);
  }
}


void FriendshipGaugeEx___Start_b__19_0(FriendshipGaugeEx_o *this, AssetData_o *asset, const MethodInfo *method)
{
  FriendshipGaugeEx_c *v5; // x0
  UnityEngine_GameObject_o *Object_object__58532980; // x0
  __int64 v7; // x1

  if ( (byte_5974538 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&FriendshipGaugeEx_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_5974538 = 1;
  }
  if ( asset )
  {
    v5 = FriendshipGaugeEx_TypeInfo;
    if ( !*(&FriendshipGaugeEx_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo, asset);
      v5 = FriendshipGaugeEx_TypeInfo;
    }
    Object_object__58532980 = (UnityEngine_GameObject_o *)AssetData__GetObject_object__58532980(
                                                            asset,
                                                            v5->static_fields->ObjectName,
                                                            (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !Object_object__58532980
      || (Object_object__58532980 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  Object_object__58532980,
                                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bigIcon)
      || (UISprite__set_atlas(this->fields.bigIcon, (UIAtlas_o *)Object_object__58532980, 0),
          (Object_object__58532980 = (UnityEngine_GameObject_o *)this->fields.bigIcon) == 0) )
    {
      sub_2213CDC(Object_object__58532980, v7);
    }
    UISprite__set_spriteName(
      (UISprite_o *)Object_object__58532980,
      FriendshipGaugeEx_TypeInfo->static_fields->SpriteName,
      0);
  }
}