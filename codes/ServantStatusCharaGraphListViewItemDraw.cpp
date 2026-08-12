void ServantStatusCharaGraphListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_596C2C7 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusCharaGraphListViewItemDraw_TypeInfo);
    byte_596C2C7 = 1;
  }
  ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH = 10;
}


void ServantStatusCharaGraphListViewItemDraw___ctor(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadein(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v7; // x1
  UICharaGraphTexture_o *v8; // x0

  if ( (byte_596C2C5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C2C5 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v8 = this->fields.charaGraph;
    if ( !v8 )
      sub_2213CDC(0, v7);
    UICharaGraphTexture__ExecuteSpriteFadein(v8, duration, 0);
  }
}


void ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        float duration,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v7; // x1
  UICharaGraphTexture_o *v8; // x0

  if ( (byte_596C2C4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C2C4 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v8 = this->fields.charaGraph;
    if ( !v8 )
      sub_2213CDC(0, v7);
    UICharaGraphTexture__ExecuteSpriteFadeout(v8, duration, 0);
  }
}


void ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v5; // x1
  UICharaGraphTexture_o *v6; // x0

  if ( (byte_596C2C3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C2C3 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    v6 = this->fields.charaGraph;
    if ( !v6 )
      sub_2213CDC(0, v5);
    UICharaGraphTexture__ExecuteSpriteFadeoutForce(v6, 0);
  }
}


void ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x21
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v7; // x1
  ServantEntity_o *ServantEntity; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x21
  __int64 v12; // x22
  UICharaGraphTexture_o *v13; // x20
  int32_t v14; // w0
  int32_t limitCountStage; // w8
  int32_t v16; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_596C2C6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C2C6 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
  mainInfo = (ServantStatusListViewItem_o *)UnityEngine_Object__op_Equality(charaGraph, 0, 0);
  if ( ((unsigned __int8)mainInfo & 1) == 0 )
  {
    if ( !item )
      goto LABEL_14;
    mainInfo = item->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_14;
    ServantEntity = ServantStatusListViewItem__GetServantEntity(mainInfo, 0, 0);
    if ( ServantEntity )
    {
      v11 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
      v12 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
      v13 = this->fields.charaGraph;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
      *(_QWORD *)&v17.fields.currentCryptoKey = v11;
      *(_QWORD *)&v17.fields.fakeValue = v12;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v17, 0);
      limitCountStage = item->fields.limitCountStage;
      v16 = v14;
      mainInfo = (ServantStatusListViewItem_o *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                                  limitCountStage,
                                                  0);
      if ( v13 )
      {
        UICharaGraphTexture__SetExCharaGraph(v13, v16, (int32_t)mainInfo, 0);
        return;
      }
LABEL_14:
      sub_2213CDC(mainInfo, v7);
    }
  }
}


void ServantStatusCharaGraphListViewItemDraw__SetItem(
        ServantStatusCharaGraphListViewItemDraw_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewItem_o *v5; // x22
  ServantStatusCharaGraphListViewItemDraw_o *v6; // x19
  ServantStatusListViewItem_o *mainInfo; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  ServantEntity_o *ServantEntity; // x23
  ServantStatusCharaGraphListViewItemDraw_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x24
  int v13; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x25
  __int64 v17; // x26
  __int64 v18; // x27
  UnityEngine_GameObject_o *charaGraphBase; // x24
  UICharaGraphTexture_o *TextureLocal; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x2
  UICharaGraphTexture_o *v28; // x24
  UnityEngine_Object_o *gameObject; // x24
  Il2CppObject *v30; // x25
  const MethodInfo *v31; // x1
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x22
  __int64 v37; // x2
  ServantStatusCharaGraphListViewItem_o **v38; // x8
  UserCommandCodeEntity_o *v39; // x21
  UnityEngine_GameObject_o *v40; // x22
  ServantStatusCharaGraphListViewItemDraw_c *v41; // x0
  UICharaGraphTexture_o *TexturePrefab_47626244; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x23
  __int64 v50; // x24
  ServantStatusCharaGraphListViewItemDraw_o *v51; // x20
  int32_t v52; // w23
  int32_t v53; // w24
  int32_t ExceedCount; // w25
  int32_t Level; // w26
  const MethodInfo *v56; // x1
  int32_t v57; // w0
  ServantOverwriteStatus_o *overwriteStatus; // x22
  int32_t v59; // w27
  int32_t AdjustAtk; // w28
  __int64 v61; // x23
  __int64 v62; // x24
  ServantStatusCharaGraphListViewItemDraw_o *v63; // x20
  int32_t v64; // w23
  int32_t LimitCount; // w24
  int32_t Atk; // w25
  UserCommandCodeCollectionEntity_o *v67; // x21
  UnityEngine_GameObject_o *v68; // x22
  ServantStatusCharaGraphListViewItemDraw_c *v69; // x0
  CommandCodeEntity_o *v70; // x21
  UnityEngine_GameObject_o *v71; // x22
  ServantStatusCharaGraphListViewItemDraw_c *v72; // x0
  UnityEngine_Object_o *baseButton; // x20
  int32_t LimitCountStageSealAfterIndexZero; // [xsp+2Ch] [xbp-74h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  v5 = item;
  v6 = this;
  if ( (byte_596C2C2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantStatusCharaGraphListViewItemDraw_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    this = (ServantStatusCharaGraphListViewItemDraw_o *)sub_2213A60(&StringLiteral_15337/*"UICharaGraphTexture({0}-I{1})"*/);
    byte_596C2C2 = 1;
  }
  if ( !v5 || !mode )
    return;
  mainInfo = v5->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_64;
  ServantEntity = ServantStatusListViewItem__GetServantEntity(v5->fields.mainInfo, 0, 0);
  p_charaGraph = (ServantStatusCharaGraphListViewItemDraw_o **)&v6->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)v6->fields.charaGraph;
  v13 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( ServantEntity )
  {
    if ( !v13 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
      v17 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
      v18 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
      charaGraphBase = v6->fields.charaGraphBase;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
      *(_QWORD *)&v76.fields.currentCryptoKey = v17;
      *(_QWORD *)&v76.fields.fakeValue = v18;
      this = (ServantStatusCharaGraphListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                            v76,
                                                            0);
      if ( !Instance )
        goto LABEL_64;
      TextureLocal = CharaGraphManager__CreateTextureLocal(
                       (CharaGraphManager_o *)Instance,
                       charaGraphBase,
                       (int32_t)this,
                       0);
      *p_charaGraph = (ServantStatusCharaGraphListViewItemDraw_o *)TextureLocal;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v6->fields.charaGraph,
        (int32_t)TextureLocal,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v28 = (UICharaGraphTexture_o *)*p_charaGraph;
      this = (ServantStatusCharaGraphListViewItemDraw_o *)ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( !*(&ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo, item, v27);
      if ( !v28 )
        goto LABEL_64;
      UICharaGraphTexture__SetDepth(
        v28,
        ServantStatusCharaGraphListViewItemDraw_TypeInfo->static_fields->DEFAULT_DEPTH,
        0);
    }
    this = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_64;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    id = ServantEntity->fields.id;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &id);
    LimitCountStageSealAfterIndexZero = ServantStatusCharaGraphListViewItem__get_LimitCountStageSealAfterIndexZero(
                                          v5,
                                          v31);
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &LimitCountStageSealAfterIndexZero);
    this = (ServantStatusCharaGraphListViewItemDraw_o *)System_String__Format_75697880(
                                                          (System_String_o *)StringLiteral_15337/*"UICharaGraphTexture({0}-I{1})"*/,
                                                          v30,
                                                          v32,
                                                          0);
    if ( !gameObject )
      goto LABEL_64;
    UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
    if ( ServantEntity__get_IsServantEquip(ServantEntity, 0) )
    {
      equipTargetInfo = mainInfo->fields.equipTargetInfo;
      if ( equipTargetInfo )
        ImagePartsGroupIdxs_k__BackingField = equipTargetInfo->fields._ImagePartsGroupIdxs_k__BackingField;
      else
        ImagePartsGroupIdxs_k__BackingField = 0;
      v62 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
      v61 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
      v63 = *p_charaGraph;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34);
      *(_QWORD *)&v78.fields.currentCryptoKey = v62;
      *(_QWORD *)&v78.fields.fakeValue = v61;
      v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v78, 0);
      LimitCount = ServantStatusListViewItem__get_LimitCount(mainInfo, 0);
      Atk = ServantStatusListViewItem__get_Atk(mainInfo, 0);
      this = (ServantStatusCharaGraphListViewItemDraw_o *)ServantStatusListViewItem__get_Hp(mainInfo, 0);
      if ( !v63 )
        goto LABEL_64;
      UICharaGraphTexture__SetEquip(
        (UICharaGraphTexture_o *)v63,
        v64,
        LimitCount,
        Atk,
        (int32_t)this,
        ImagePartsGroupIdxs_k__BackingField,
        mainInfo->fields.isNpcFollowerServantEquip,
        0);
    }
    else
    {
      v50 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
      v49 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
      v51 = *p_charaGraph;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34);
      *(_QWORD *)&v77.fields.currentCryptoKey = v50;
      *(_QWORD *)&v77.fields.fakeValue = v49;
      v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v77, 0);
      v53 = ServantStatusListViewItem__get_LimitCount(mainInfo, 0);
      ExceedCount = ServantStatusListViewItem__get_ExceedCount(mainInfo, 0);
      Level = ServantStatusListViewItem__get_Level(mainInfo, 0);
      v57 = ServantStatusCharaGraphListViewItem__get_LimitCountStageSealAfterIndexZero(v5, v56);
      overwriteStatus = mainInfo->fields.overwriteStatus;
      v59 = v57;
      AdjustAtk = ServantStatusListViewItem__get_AdjustAtk(mainInfo, 0);
      this = (ServantStatusCharaGraphListViewItemDraw_o *)ServantStatusListViewItem__get_AdjustHp(mainInfo, 0);
      if ( !v51 )
        goto LABEL_64;
      UICharaGraphTexture__SetCharacter_50939036(
        (UICharaGraphTexture_o *)v51,
        v52,
        v53,
        ExceedCount,
        Level,
        v59,
        overwriteStatus,
        AdjustAtk,
        (int32_t)this,
        mainInfo->fields._IsGrandServant_k__BackingField,
        mainInfo->fields._GrandInfo_k__BackingField,
        0);
    }
    goto LABEL_55;
  }
  if ( !v13 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  this = (ServantStatusCharaGraphListViewItemDraw_o *)UnityEngine_Object__op_Equality(charaGraph, 0, 0);
  v38 = (ServantStatusCharaGraphListViewItem_o **)v5->fields.mainInfo;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v38 )
      goto LABEL_64;
    v39 = (UserCommandCodeEntity_o *)v38[13];
    if ( v39 )
    {
      v40 = v6->fields.charaGraphBase;
      v41 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      if ( !*(&ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo, item, v37);
        v41 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
      }
      TexturePrefab_47626244 = CharaGraphManager__CreateTexturePrefab_47626244(
                                 v40,
                                 v39,
                                 v41->static_fields->DEFAULT_DEPTH,
                                 0,
                                 0);
    }
    else
    {
      v67 = (UserCommandCodeCollectionEntity_o *)v38[14];
      if ( v67 )
      {
        v68 = v6->fields.charaGraphBase;
        v69 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( !*(&ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo, item, v37);
          v69 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_47626244 = CharaGraphManager__CreateTexturePrefab_47626708(
                                   v68,
                                   v67,
                                   v69->static_fields->DEFAULT_DEPTH,
                                   0,
                                   0);
      }
      else
      {
        v70 = (CommandCodeEntity_o *)v38[23];
        if ( !v70 )
          goto LABEL_55;
        v71 = v6->fields.charaGraphBase;
        v72 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        if ( !*(&ServantStatusCharaGraphListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewItemDraw_TypeInfo, item, v37);
          v72 = ServantStatusCharaGraphListViewItemDraw_TypeInfo;
        }
        TexturePrefab_47626244 = CharaGraphManager__CreateTexturePrefab_47627172(
                                   v71,
                                   v70,
                                   v72->static_fields->DEFAULT_DEPTH,
                                   0,
                                   0);
      }
    }
    *p_charaGraph = (ServantStatusCharaGraphListViewItemDraw_o *)TexturePrefab_47626244;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v6->fields.charaGraph,
      (int32_t)TexturePrefab_47626244,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  else
  {
    if ( !v38 )
      goto LABEL_64;
    item = v38[13];
    if ( item )
    {
      this = *p_charaGraph;
      if ( !*p_charaGraph )
        goto LABEL_64;
      UICharaGraphTexture__SetCommand((UICharaGraphTexture_o *)this, (UserCommandCodeEntity_o *)item, 0, 0);
    }
    else
    {
      item = v38[14];
      if ( item )
      {
        this = *p_charaGraph;
        if ( !*p_charaGraph )
          goto LABEL_64;
        UICharaGraphTexture__SetCommand_50939632(
          (UICharaGraphTexture_o *)this,
          (UserCommandCodeCollectionEntity_o *)item,
          0,
          0);
      }
      else
      {
        item = v38[23];
        if ( item )
        {
          this = *p_charaGraph;
          if ( !*p_charaGraph )
            goto LABEL_64;
          UICharaGraphTexture__SetCommand_50939780((UICharaGraphTexture_o *)this, (CommandCodeEntity_o *)item, 0, 0);
        }
      }
    }
  }
LABEL_55:
  baseButton = (UnityEngine_Object_o *)v6->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v37);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    this = (ServantStatusCharaGraphListViewItemDraw_o *)v6->fields.baseButton;
    if ( this )
    {
      ((void (__fastcall *)(ServantStatusCharaGraphListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        0,
        1,
        this->klass[1]._1.implementedInterfaces);
      return;
    }
LABEL_64:
    sub_2213CDC(this, item);
  }
}