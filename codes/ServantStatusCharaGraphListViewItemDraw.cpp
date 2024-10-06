void __fastcall ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A6B9B3 & 1) == 0 )
  {
    sub_1B90010(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v1);
    byte_4A6B9B3 = 1;
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
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v6; // x1
  UICharaGraphTexture_o *v7; // x0

  if ( (byte_4A6B9B1 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6B9B1 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v7 = this->fields.charaGraph;
    if ( !v7 )
      sub_1B9026C(0LL, v6);
    UICharaGraphTexture__ExecuteSpriteFadein(v7, duration, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v6; // x1
  UICharaGraphTexture_o *v7; // x0

  if ( (byte_4A6B9B0 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6B9B0 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v7 = this->fields.charaGraph;
    if ( !v7 )
      sub_1B9026C(0LL, v6);
    UICharaGraphTexture__ExecuteSpriteFadeout(v7, duration, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UICharaGraphTexture_o *v5; // x0

  if ( (byte_4A6B9AF & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6B9AF = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    v5 = this->fields.charaGraph;
    if ( !v5 )
      sub_1B9026C(0LL, v4);
    UICharaGraphTexture__ExecuteSpriteFadeoutForce(v5, 0LL);
  }
}


int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetCharaGraphBaseKind(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UICharaGraphTexture_o *v7; // x8

  if ( (byte_4A6B9AC & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6B9AC = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  if ( v4 )
    return -1;
  v7 = this->fields.charaGraph;
  if ( !v7 )
    sub_1B9026C(v4, v5);
  return v7->fields.baseKind;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4A6B9AE & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A6B9AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1B9026C(Instance, v8);
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
  UnityEngine_Object_o *charaGraph; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  UICharaGraphTexture_o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v15; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A6B9B2 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, item);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4A6B9B2 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL);
  if ( (v7 & 1) == 0 )
  {
    if ( !item )
      goto LABEL_20;
    mainInfo = item->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_20;
    userSvtEntity = mainInfo->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v11 = this->fields.charaGraph;
      v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
      {
        servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          return;
        v11 = this->fields.charaGraph;
        v13 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          goto LABEL_15;
LABEL_14:
        j_il2cpp_runtime_class_init_0(v15);
LABEL_15:
        *(_QWORD *)&v17.fields.currentCryptoKey = v13;
        *(_QWORD *)&v17.fields.fakeValue = v12;
        v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v17, 0LL);
        if ( v11 )
        {
          UICharaGraphTexture__SetExCharaGraph(v11, v7, item->fields.imageLimitCount, 0LL);
          return;
        }
LABEL_20:
        sub_1B9026C(v7, v8);
      }
      v11 = this->fields.charaGraph;
      v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      goto LABEL_15;
    goto LABEL_14;
  }
}


void __fastcall ServantStatusCharaGraphListViewItemDraw__SetItem(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x22
  UICharaGraphTexture_o *ImageLimitSealAfter; // x0
  UserCommandCodeCollectionEntity_o *v12; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserCommandCodeEntity_o *userCommandCodeEntity; // x22
  UnityEngine_GameObject_o *charaGraphBase; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v16; // x0
  UICharaGraphTexture_o *TexturePrefab_37962832; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x22
  UnityEngine_GameObject_o *v21; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v22; // x0
  CommandCodeEntity_o *commandCodeEntity; // x22
  UnityEngine_GameObject_o *v24; // x21
  ServantStatusCharaGraphListViewItemDraw_c *v25; // x0
  struct UserServantEntity_o *userSvtEntity; // x9
  __int64 v27; // x22
  __int64 v28; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v29; // x0
  const MethodInfo *v30; // x3
  struct ServantStatusListViewItem_o *v31; // x8
  int32_t v32; // w21
  UnityEngine_GameObject_o *v33; // x22
  UserServantEntity_o *v34; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v35; // x0
  struct UserServantEntity_o *v36; // x9
  __int64 v37; // x22
  __int64 v38; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v39; // x0
  const MethodInfo *v40; // x3
  struct ServantStatusListViewItem_o *v41; // x8
  int32_t v42; // w2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  __int64 v44; // x22
  __int64 v45; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v46; // x0
  const MethodInfo *v47; // x3
  struct ServantStatusListViewItem_o *v48; // x8
  int32_t v49; // w21
  UnityEngine_GameObject_o *v50; // x22
  UserServantCollectionEntity_o *v51; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v52; // x0
  struct UserServantCollectionEntity_o *v53; // x9
  __int64 v54; // x22
  __int64 v55; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v56; // x0
  const MethodInfo *v57; // x3
  struct ServantStatusListViewItem_o *v58; // x8
  int32_t v59; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  __int64 v61; // x22
  __int64 v62; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v63; // x0
  const MethodInfo *v64; // x3
  struct ServantStatusListViewItem_o *v65; // x8
  int32_t v66; // w21
  UnityEngine_GameObject_o *v67; // x22
  ServantLeaderInfo_o *v68; // x23
  ServantStatusCharaGraphListViewItemDraw_c *v69; // x0
  struct ServantLeaderInfo_o *v70; // x9
  __int64 v71; // x22
  __int64 v72; // x23
  ServantStatusCharaGraphListViewItemDraw_o *v73; // x0
  const MethodInfo *v74; // x3
  struct ServantStatusListViewItem_o *v75; // x8
  int32_t v76; // w2
  EquipTargetInfo_o *equipTargetInfo; // x22
  UnityEngine_GameObject_o *v78; // x24
  int32_t imageLimitCount; // w23
  UnityEngine_Object_o *baseButton; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_4A6B9AD & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, item);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B90010(&ServantStatusCharaGraphListViewItemDraw_TypeInfo, v8);
    byte_4A6B9AD = 1;
  }
  if ( !item || !mode )
    return;
  p_charaGraph = &this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v16 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
        v16 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      }
      TexturePrefab_37962832 = CharaGraphManager__CreateTexturePrefab_37962832(
                                 charaGraphBase,
                                 userCommandCodeEntity,
                                 v16->static_fields->DEFAULT_DEPTH,
                                 0LL,
                                 0LL);
    }
    else
    {
      userCommandCodeCollectionEntity = mainInfo->fields.userCommandCodeCollectionEntity;
      if ( userCommandCodeCollectionEntity )
      {
        v21 = this->fields.charaGraphBase;
        v22 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
          v22 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_37962832 = CharaGraphManager__CreateTexturePrefab_37963296(
                                   v21,
                                   userCommandCodeCollectionEntity,
                                   v22->static_fields->DEFAULT_DEPTH,
                                   0LL,
                                   0LL);
      }
      else
      {
        commandCodeEntity = mainInfo->fields.commandCodeEntity;
        if ( commandCodeEntity )
        {
          v24 = this->fields.charaGraphBase;
          v25 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
            v25 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
          }
          TexturePrefab_37962832 = CharaGraphManager__CreateTexturePrefab_37963760(
                                     v24,
                                     commandCodeEntity,
                                     v25->static_fields->DEFAULT_DEPTH,
                                     0LL,
                                     0LL);
        }
        else
        {
          userSvtEntity = mainInfo->fields.userSvtEntity;
          if ( userSvtEntity )
          {
            v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
            v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v81.fields.currentCryptoKey = v28;
            *(_QWORD *)&v81.fields.fakeValue = v27;
            v29 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                                 v81,
                                                                 0LL);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v29,
                                                             (int32_t)v29,
                                                             item->fields.imageLimitCount,
                                                             v30);
            v31 = item->fields.mainInfo;
            if ( !v31 )
              goto LABEL_83;
            v32 = (int)ImageLimitSealAfter;
            v33 = this->fields.charaGraphBase;
            v34 = v31->fields.userSvtEntity;
            v35 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
              v35 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
            }
            TexturePrefab_37962832 = CharaGraphManager__CreateTexturePrefab_37958548(
                                       v33,
                                       v34,
                                       v32,
                                       v35->static_fields->DEFAULT_DEPTH,
                                       0LL,
                                       0,
                                       0LL);
          }
          else
          {
            userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
            if ( userSvtCollectionEntity )
            {
              v45 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
              v44 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v83.fields.currentCryptoKey = v45;
              *(_QWORD *)&v83.fields.fakeValue = v44;
              v46 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                                   v83,
                                                                   0LL);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v46,
                                                               (int32_t)v46,
                                                               item->fields.imageLimitCount,
                                                               v47);
              v48 = item->fields.mainInfo;
              if ( !v48 )
                goto LABEL_83;
              v49 = (int)ImageLimitSealAfter;
              v50 = this->fields.charaGraphBase;
              v51 = v48->fields.userSvtCollectionEntity;
              v52 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                v52 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
              }
              TexturePrefab_37962832 = CharaGraphManager__CreateTexturePrefab_37959744(
                                         v50,
                                         v51,
                                         v49,
                                         v52->static_fields->DEFAULT_DEPTH,
                                         0LL,
                                         0LL);
            }
            else
            {
              servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
              if ( servantLeaderInfo )
              {
                v62 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v61 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v85.fields.currentCryptoKey = v62;
                *(_QWORD *)&v85.fields.fakeValue = v61;
                v63 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                                     v85,
                                                                     0LL);
                ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                                 v63,
                                                                 (int32_t)v63,
                                                                 item->fields.imageLimitCount,
                                                                 v64);
                v65 = item->fields.mainInfo;
                if ( !v65 )
                  goto LABEL_83;
                v66 = (int)ImageLimitSealAfter;
                v67 = this->fields.charaGraphBase;
                v68 = v65->fields.servantLeaderInfo;
                v69 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  v69 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
                }
                TexturePrefab_37962832 = CharaGraphManager__CreateTexturePrefab_37960916(
                                           v67,
                                           v68,
                                           v66,
                                           v69->static_fields->DEFAULT_DEPTH,
                                           0LL,
                                           0LL);
              }
              else
              {
                equipTargetInfo = mainInfo->fields.equipTargetInfo;
                if ( !equipTargetInfo )
                  goto LABEL_74;
                v78 = this->fields.charaGraphBase;
                imageLimitCount = item->fields.imageLimitCount;
                if ( !ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo);
                  mainInfo = item->fields.mainInfo;
                  if ( !mainInfo )
                    goto LABEL_83;
                }
                TexturePrefab_37962832 = CharaGraphManager__CreateTexturePrefab_37962104(
                                           v78,
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
    *p_charaGraph = TexturePrefab_37962832;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&this->fields.charaGraph,
      (int32_t)TexturePrefab_37962832,
      v18,
      v19);
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
    v12 = mainInfo->fields.userCommandCodeCollectionEntity;
    if ( v12 )
    {
      ImageLimitSealAfter = *p_charaGraph;
      if ( !*p_charaGraph )
        goto LABEL_83;
      UICharaGraphTexture__SetCommand_40892004(ImageLimitSealAfter, v12, 0LL, 0LL);
    }
    else
    {
      v12 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.commandCodeEntity;
      if ( v12 )
      {
        ImageLimitSealAfter = *p_charaGraph;
        if ( !*p_charaGraph )
          goto LABEL_83;
        UICharaGraphTexture__SetCommand_40892148(ImageLimitSealAfter, (CommandCodeEntity_o *)v12, 0LL, 0LL);
      }
      else
      {
        v36 = mainInfo->fields.userSvtEntity;
        if ( v36 )
        {
          v38 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
          v37 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v82.fields.currentCryptoKey = v38;
          *(_QWORD *)&v82.fields.fakeValue = v37;
          v39 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                               v82,
                                                               0LL);
          ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                           v39,
                                                           (int32_t)v39,
                                                           item->fields.imageLimitCount,
                                                           v40);
          v41 = item->fields.mainInfo;
          if ( !v41 )
            goto LABEL_83;
          v42 = (int)ImageLimitSealAfter;
          ImageLimitSealAfter = *p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_83;
          UICharaGraphTexture__SetCharacter_40890232(ImageLimitSealAfter, v41->fields.userSvtEntity, v42, 0LL, 0, 0LL);
        }
        else
        {
          v53 = mainInfo->fields.userSvtCollectionEntity;
          if ( v53 )
          {
            v55 = *(_QWORD *)&v53->fields.svtId.fields.currentCryptoKey;
            v54 = *(_QWORD *)&v53->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v84.fields.currentCryptoKey = v55;
            *(_QWORD *)&v84.fields.fakeValue = v54;
            v56 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                                 v84,
                                                                 0LL);
            ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                             v56,
                                                             (int32_t)v56,
                                                             item->fields.imageLimitCount,
                                                             v57);
            v58 = item->fields.mainInfo;
            if ( !v58 )
              goto LABEL_83;
            v59 = (int)ImageLimitSealAfter;
            ImageLimitSealAfter = *p_charaGraph;
            if ( !*p_charaGraph )
              goto LABEL_83;
            UICharaGraphTexture__SetCharacter_40890744(
              ImageLimitSealAfter,
              v58->fields.userSvtCollectionEntity,
              v59,
              0LL,
              0LL);
          }
          else
          {
            v70 = mainInfo->fields.servantLeaderInfo;
            if ( v70 )
            {
              v72 = *(_QWORD *)&v70->fields.svtId.fields.currentCryptoKey;
              v71 = *(_QWORD *)&v70->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v86.fields.currentCryptoKey = v72;
              *(_QWORD *)&v86.fields.fakeValue = v71;
              v73 = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                                   v86,
                                                                   0LL);
              ImageLimitSealAfter = (UICharaGraphTexture_o *)ServantStatusCharaGraphListViewItemDraw__GetImageLimitSealAfter(
                                                               v73,
                                                               (int32_t)v73,
                                                               item->fields.imageLimitCount,
                                                               v74);
              v75 = item->fields.mainInfo;
              if ( !v75 )
                goto LABEL_83;
              v76 = (int)ImageLimitSealAfter;
              ImageLimitSealAfter = *p_charaGraph;
              if ( !*p_charaGraph )
                goto LABEL_83;
              UICharaGraphTexture__SetCharacter_40891204(
                ImageLimitSealAfter,
                v75->fields.servantLeaderInfo,
                v76,
                0LL,
                0LL);
            }
            else
            {
              v12 = (UserCommandCodeCollectionEntity_o *)mainInfo->fields.equipTargetInfo;
              if ( v12 )
              {
                ImageLimitSealAfter = *p_charaGraph;
                if ( !*p_charaGraph )
                  goto LABEL_83;
                UICharaGraphTexture__SetCharacter_40891624(
                  ImageLimitSealAfter,
                  (EquipTargetInfo_o *)v12,
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1B9026C(ImageLimitSealAfter, v12);
  }
}