void __fastcall ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B121A3 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v1, v2);
    byte_4B121A3 = 1;
  }
  ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH = 10;
}


void __fastcall ServantStatusCharaGraphListViewItemDraw___ctor(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadein(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v7; // x1
  UICharaGraphTexture_o *v8; // x0

  if ( (byte_4B121A1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B121A1 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v8 = this->fields.charaGraph;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    UICharaGraphTexture__ExecuteSpriteFadein(v8, duration, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v7; // x1
  UICharaGraphTexture_o *v8; // x0

  if ( (byte_4B121A0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B121A0 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v8 = this->fields.charaGraph;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    UICharaGraphTexture__ExecuteSpriteFadeout(v8, duration, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v5; // x1
  UICharaGraphTexture_o *v6; // x0

  if ( (byte_4B1219F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1219F = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v6 = this->fields.charaGraph;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UICharaGraphTexture__ExecuteSpriteFadeoutForce(v6, 0LL);
  }
}


int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetCharaGraphBaseKind(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *charaGraph; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct UICharaGraphTexture_o *v8; // x8

  if ( (byte_4B1219C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1219C = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  if ( v5 )
    return -1;
  v8 = this->fields.charaGraph;
  if ( !v8 )
    sub_1BCAA3C(v5, v6);
  return v8->fields.baseKind;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B1219E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1219E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return ServantLimitImageMaster__GetServantImageLimitSealAfter(
           (ServantLimitImageMaster_o *)Instance,
           svtId,
           limitCount,
           0LL);
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *charaGraph; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  UICharaGraphTexture_o *v12; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v16; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B121A2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    byte_4B121A2 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  v8 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  if ( (v8 & 1) == 0 )
  {
    if ( !item )
      goto LABEL_20;
    mainInfo = item->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_20;
    userSvtEntity = mainInfo->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v12 = this->fields.charaGraph;
      v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
      {
        servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          return;
        v12 = this->fields.charaGraph;
        v14 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v13 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          goto LABEL_15;
LABEL_14:
        j_il2cpp_runtime_class_init_0(v16, v9);
LABEL_15:
        *(_QWORD *)&v18.fields.currentCryptoKey = v14;
        *(_QWORD *)&v18.fields.fakeValue = v13;
        v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
        if ( v12 )
        {
          UICharaGraphTexture__SetExCharaGraph(v12, v8, item->fields.imageLimitCount, 0LL);
          return;
        }
LABEL_20:
        sub_1BCAA3C(v8, v9);
      }
      v12 = this->fields.charaGraph;
      v14 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      goto LABEL_15;
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewItemDraw__SetItem(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  UICharaGraphTexture_o *ImageLimitSealAfter; // x0
  UserCommandCodeCollectionEntity_o *v14; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserCommandCodeEntity_o *userCommandCodeEntity; // x22
  UnityEngine_GameObject_o *charaGraphBase; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v18; // x0
  UICharaGraphTexture_o *TexturePrefab_38625912; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x22
  UnityEngine_GameObject_o *v27; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v28; // x0
  CommandCodeEntity_o *commandCodeEntity; // x22
  UnityEngine_GameObject_o *v30; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v31; // x0
  struct UserServantEntity_o *userSvtEntity; // x9
  __int64 v33; // x22
  __int64 v34; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v35; // x0
  const MethodInfo *v36; // x3
  struct ServantStatusListViewItem_o *v37; // x8
  int32_t v38; // w21
  UnityEngine_GameObject_o *v39; // x22
  UserServantEntity_o *v40; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v41; // x0
  struct UserServantEntity_o *v42; // x9
  __int64 v43; // x22
  __int64 v44; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v45; // x0
  const MethodInfo *v46; // x3
  struct ServantStatusListViewItem_o *v47; // x8
  int32_t v48; // w2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  __int64 v50; // x22
  __int64 v51; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v52; // x0
  const MethodInfo *v53; // x3
  struct ServantStatusListViewItem_o *v54; // x8
  int32_t v55; // w21
  UnityEngine_GameObject_o *v56; // x22
  UserServantCollectionEntity_o *v57; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v58; // x0
  struct UserServantCollectionEntity_o *v59; // x9
  __int64 v60; // x22
  __int64 v61; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v62; // x0
  const MethodInfo *v63; // x3
  struct ServantStatusListViewItem_o *v64; // x8
  int32_t v65; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  __int64 v67; // x22
  __int64 v68; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v69; // x0
  const MethodInfo *v70; // x3
  struct ServantStatusListViewItem_o *v71; // x8
  int32_t v72; // w21
  UnityEngine_GameObject_o *v73; // x22
  ServantLeaderInfo_o *v74; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v75; // x0
  struct ServantLeaderInfo_o *v76; // x9
  __int64 v77; // x22
  __int64 v78; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v79; // x0
  const MethodInfo *v80; // x3
  struct ServantStatusListViewItem_o *v81; // x8
  int32_t v82; // w2
  EquipTargetInfo_o *equipTargetInfo; // x22
  UnityEngine_GameObject_o *v84; // x24
  int32_t imageLimitCount; // w23
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_4B1219D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v9, v10);
    byte_4B1219D = 1;
  }
  if ( !item || !mode )
    return;
  p_charaGraph = &this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  ImageLimitSealAfter = (UICharaGraphTexture_o *)UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  mainInfo = item->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_83;
  userCommandCodeEntity = mainInfo->fields.userCommandCodeEntity;
  if ( ((unsigned __int8)ImageLimitSealAfter & 1) != 0 )
  {
    if ( userCommandCodeEntity )
    {
      charaGraphBase = this->fields.charaGraphBase;
      v18 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo, v14);
        v18 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      }
      TexturePrefab_38625912 = CharaGraphManager__CreateTexturePrefab_38625912(
                                 charaGraphBase,
                                 userCommandCodeEntity,
                                 v18->static_fields->DEFAULT_DEPTH,
                                 0LL,
                                 0LL);
    }
    else
    {
      userCommandCodeCollectionEntity = mainInfo->fields.userCommandCodeCollectionEntity;
      if ( userCommandCodeCollectionEntity )
      {
        v27 = this->fields.charaGraphBase;
        v28 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo, v14);
          v28 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_38625912 = CharaGraphManager__CreateTexturePrefab_38626376(
                                   v27,
                                   userCommandCodeCollectionEntity,
                                   v28->static_fields->DEFAULT_DEPTH,
                                   0LL,
                                   0LL);
      }
      else
      {
        commandCodeEntity = mainInfo->fields.commandCodeEntity;
        if ( commandCodeEntity )
        {
          v30 = this->fields.charaGraphBase;
          v31 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo, v14);
            v31 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          }
          TexturePrefab_38625912 = CharaGraphManager__CreateTexturePrefab_38626840(
                                     v30,
                                     commandCodeEntity,
                                     v31->static_fields->DEFAULT_DEPTH,
                                     0LL,
                                     0LL);
        }
        else
        {
          userSvtEntity = mainInfo->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v34 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
            v33 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
            *(_QWORD *)&v87.fields.currentCryptoKey = v34;
            *(_QWORD *)&v87.fields.fakeValue = v33;
            v35 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                 v87,
                                                                 0LL);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v35,
                                                             (int32_t)v35,
                                                             item->fields.imageLimitCount,
                                                             v36);
            v37 = item->fields.mainInfo;
            if ( !v37 )
              goto LABEL_83;
            v38 = (int)ImageLimitSealAfter;
            v39 = this->fields.charaGraphBase;
            v40 = v37->fields.userSvtEntity;
            v41 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo, v14);
              v41 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            }
            TexturePrefab_38625912 = CharaGraphManager__CreateTexturePrefab_38621628(
                                       v39,
                                       v40,
                                       v38,
                                       v41->static_fields->DEFAULT_DEPTH,
                                       0LL,
                                       0,
                                       0LL);
          }
          else
          {
            userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
            if ( userSvtCollectionEntity )
            {
              v51 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
              v50 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
              *(_QWORD *)&v89.fields.currentCryptoKey = v51;
              *(_QWORD *)&v89.fields.fakeValue = v50;
              v52 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                   v89,
                                                                   0LL);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v52,
                                                               (int32_t)v52,
                                                               item->fields.imageLimitCount,
                                                               v53);
              v54 = item->fields.mainInfo;
              if ( !v54 )
                goto LABEL_83;
              v55 = (int)ImageLimitSealAfter;
              v56 = this->fields.charaGraphBase;
              v57 = v54->fields.userSvtCollectionEntity;
              v58 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo, v14);
                v58 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              }
              TexturePrefab_38625912 = CharaGraphManager__CreateTexturePrefab_38622824(
                                         v56,
                                         v57,
                                         v55,
                                         v58->static_fields->DEFAULT_DEPTH,
                                         0LL,
                                         0LL);
            }
            else
            {
              servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
              if ( servantLeaderInfo )
              {
                v68 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v67 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
                *(_QWORD *)&v91.fields.currentCryptoKey = v68;
                *(_QWORD *)&v91.fields.fakeValue = v67;
                v69 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                     v91,
                                                                     0LL);
                ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                 v69,
                                                                 (int32_t)v69,
                                                                 item->fields.imageLimitCount,
                                                                 v70);
                v71 = item->fields.mainInfo;
                if ( !v71 )
                  goto LABEL_83;
                v72 = (int)ImageLimitSealAfter;
                v73 = this->fields.charaGraphBase;
                v74 = v71->fields.servantLeaderInfo;
                v75 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo, v14);
                  v75 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                }
                TexturePrefab_38625912 = CharaGraphManager__CreateTexturePrefab_38623996(
                                           v73,
                                           v74,
                                           v72,
                                           v75->static_fields->DEFAULT_DEPTH,
                                           0LL,
                                           0LL);
              }
              else
              {
                equipTargetInfo = mainInfo->fields.equipTargetInfo;
                if ( !equipTargetInfo )
                  goto LABEL_74;
                v84 = this->fields.charaGraphBase;
                imageLimitCount = item->fields.imageLimitCount;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo, v14);
                  mainInfo = item->fields.mainInfo;
                  if ( !mainInfo )
                    goto LABEL_83;
                }
                TexturePrefab_38625912 = CharaGraphManager__CreateTexturePrefab_38625184(
                                           v84,
                                           equipTargetInfo,
                                           imageLimitCount,
                                           ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
                                           mainInfo->fields.isNpcFollowerServantEquip,
                                           0LL,
                                           0LL);
              }
            }
          }
        }
      }
    }
    *p_charaGraph = TexturePrefab_38625912;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.charaGraph,
      (int64_t)TexturePrefab_38625912,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  else if ( userCommandCodeEntity )
  {
    ImageLimitSealAfter = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_83;
    UICharaGraphTexture__SetCommand(ImageLimitSealAfter, mainInfo->fields.userCommandCodeEntity, 0LL, 0LL);
  }
  else
  {
    v14 = mainInfo->fields.userCommandCodeCollectionEntity;
    if ( v14 )
    {
      ImageLimitSealAfter = *p_charaGraph;
      if ( !*p_charaGraph )
        goto LABEL_83;
      UICharaGraphTexture__SetCommand_41559620(ImageLimitSealAfter, v14, 0LL, 0LL);
    }
    else
    {
      v14 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.commandCodeEntity;
      if ( v14 )
      {
        ImageLimitSealAfter = *p_charaGraph;
        if ( !*p_charaGraph )
          goto LABEL_83;
        UICharaGraphTexture__SetCommand_41559764(ImageLimitSealAfter, (CommandCodeEntity_o *)v14, 0LL, 0LL);
      }
      else
      {
        v42 = mainInfo->fields.userSvtEntity;
        if ( v42 )
        {
          v44 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
          v43 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, 0LL);
          *(_QWORD *)&v88.fields.currentCryptoKey = v44;
          *(_QWORD *)&v88.fields.fakeValue = v43;
          v45 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                               v88,
                                                               0LL);
          ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                           v45,
                                                           (int32_t)v45,
                                                           item->fields.imageLimitCount,
                                                           v46);
          v47 = item->fields.mainInfo;
          if ( !v47 )
            goto LABEL_83;
          v48 = (int)ImageLimitSealAfter;
          ImageLimitSealAfter = *p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_83;
          UICharaGraphTexture__SetCharacter_41557848(ImageLimitSealAfter, v47->fields.userSvtEntity, v48, 0LL, 0, 0LL);
        }
        else
        {
          v59 = mainInfo->fields.userSvtCollectionEntity;
          if ( v59 )
          {
            v61 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
            v60 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, 0LL);
            *(_QWORD *)&v90.fields.currentCryptoKey = v61;
            *(_QWORD *)&v90.fields.fakeValue = v60;
            v62 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                 v90,
                                                                 0LL);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v62,
                                                             (int32_t)v62,
                                                             item->fields.imageLimitCount,
                                                             v63);
            v64 = item->fields.mainInfo;
            if ( !v64 )
              goto LABEL_83;
            v65 = (int)ImageLimitSealAfter;
            ImageLimitSealAfter = *p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_83;
            UICharaGraphTexture__SetCharacter_41558360(
              ImageLimitSealAfter,
              v64->fields.userSvtCollectionEntity,
              v65,
              0LL,
              0LL);
          }
          else
          {
            v76 = mainInfo->fields.servantLeaderInfo;
            if ( v76 )
            {
              v78 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
              v77 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, 0LL);
              *(_QWORD *)&v92.fields.currentCryptoKey = v78;
              *(_QWORD *)&v92.fields.fakeValue = v77;
              v79 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                   v92,
                                                                   0LL);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v79,
                                                               (int32_t)v79,
                                                               item->fields.imageLimitCount,
                                                               v80);
              v81 = item->fields.mainInfo;
              if ( !v81 )
                goto LABEL_83;
              v82 = (int)ImageLimitSealAfter;
              ImageLimitSealAfter = *p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_83;
              UICharaGraphTexture__SetCharacter_41558820(
                ImageLimitSealAfter,
                v81->fields.servantLeaderInfo,
                v82,
                0LL,
                0LL);
            }
            else
            {
              v14 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.equipTargetInfo;
              if ( v14 )
              {
                ImageLimitSealAfter = *p_charaGraph;
                if ( !*p_charaGraph )
                  goto LABEL_83;
                UICharaGraphTexture__SetCharacter_41559240(
                  ImageLimitSealAfter,
                  (EquipTargetInfo_o *)v14,
                  item->fields.imageLimitCount,
                  mainInfo->fields.isNpcFollowerServantEquip,
                  0LL,
                  0LL);
              }
            }
          }
        }
      }
    }
  }
LABEL_74:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    ImageLimitSealAfter = (UICharaGraphTexture_o *)this->fields.baseButton;
    if ( ImageLimitSealAfter )
    {
      ((void (__fastcall *)(UICharaGraphTexture_o *, _QWORD, __int64, Il2CppMethodPointer))ImageLimitSealAfter->klass->vtable._14_OnEnable.method)(
        ImageLimitSealAfter,
        0LL,
        1LL,
        ImageLimitSealAfter->klass->vtable._15_OnInit.methodPtr);
      return;
    }
LABEL_83:
    sub_1BCAA3C(ImageLimitSealAfter, v14);
  }
}