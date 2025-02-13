void __fastcall RestrictionNotSatisfySlotIcons___ctor(RestrictionNotSatisfySlotIcons_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall RestrictionNotSatisfySlotIcons__Awake(RestrictionNotSatisfySlotIcons_o *this, const MethodInfo *method)
{
  ;
}


UIWidget_o *__fastcall RestrictionNotSatisfySlotIcons__GetUIWidget(
        RestrictionNotSatisfySlotIcons_o *this,
        const MethodInfo *method)
{
  return this->fields.iconsWidget;
}


void __fastcall RestrictionNotSatisfySlotIcons__SetClassIcons(
        RestrictionNotSatisfySlotIcons_o *this,
        System_Int32_array *classImageIds,
        const MethodInfo *method)
{
  RestrictionNotSatisfySlotIcons_o *v4; // x19
  struct UISprite_array *classIcons; // x8
  signed int max_length; // w24
  __int64 v7; // x23
  int v8; // w9
  struct UISprite_array *v9; // x8
  UISprite_o *v10; // x21
  int32_t v11; // w22
  struct UISprite_array *v12; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct ServantFaceIconComponent_array *servantFaceIcons; // x20
  int v15; // w8
  __int64 v16; // x21
  struct UISprite_array *supportIcons; // x19
  int v18; // w8
  __int64 v19; // x20

  v4 = this;
  if ( (byte_4BD8531 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlotIcons_o *)sub_1C21E38(&AtlasManager_TypeInfo);
    byte_4BD8531 = 1;
  }
  classIcons = v4->fields.classIcons;
  if ( classIcons )
  {
    if ( !classImageIds )
LABEL_26:
      sub_1C22094(this, classImageIds);
    max_length = classImageIds->max_length;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = classIcons->max_length;
      if ( (int)v7 >= v8 )
        break;
      if ( (unsigned int)v7 >= v8 )
        goto LABEL_42;
      this = (RestrictionNotSatisfySlotIcons_o *)classIcons->m_Items[v7];
      if ( !this )
        goto LABEL_26;
      this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_26;
      if ( (int)v7 >= max_length )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v9 = v4->fields.classIcons;
        if ( !v9 )
          goto LABEL_26;
        if ( (unsigned int)v7 >= v9->max_length || (unsigned int)v7 >= classImageIds->max_length )
          goto LABEL_42;
        v10 = v9->m_Items[v7];
        v11 = classImageIds->m_Items[v7 + 1];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (RestrictionNotSatisfySlotIcons_o *)AtlasManager__SetClassIcon(v10, v11, 3, 0LL);
      }
      if ( max_length == 1 || max_length == 3 && (_DWORD)v7 == 2 )
      {
        v12 = v4->fields.classIcons;
        if ( !v12 )
          goto LABEL_26;
        if ( (unsigned int)v7 >= v12->max_length )
          goto LABEL_42;
        this = (RestrictionNotSatisfySlotIcons_o *)v12->m_Items[v7];
        if ( !this )
          goto LABEL_26;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(gameObject, 0.0, 0LL);
      }
      classIcons = v4->fields.classIcons;
      ++v7;
      if ( !classIcons )
        goto LABEL_26;
    }
  }
  servantFaceIcons = v4->fields.servantFaceIcons;
  if ( servantFaceIcons )
  {
    v15 = servantFaceIcons->max_length;
    if ( v15 >= 1 )
    {
      v16 = 0LL;
      while ( (unsigned int)v16 < v15 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v16];
        if ( !this )
          goto LABEL_26;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_26;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v15 = servantFaceIcons->max_length;
        if ( (int)++v16 >= v15 )
          goto LABEL_34;
      }
LABEL_42:
      sub_1C2209C(this, classImageIds);
    }
  }
LABEL_34:
  supportIcons = v4->fields.supportIcons;
  if ( supportIcons )
  {
    v18 = supportIcons->max_length;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      while ( (unsigned int)v19 < v18 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)supportIcons->m_Items[v19];
        if ( !this )
          goto LABEL_26;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_26;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v18 = supportIcons->max_length;
        if ( (int)++v19 >= v18 )
          return;
      }
      goto LABEL_42;
    }
  }
}


void __fastcall RestrictionNotSatisfySlotIcons__SetServantIcons(
        RestrictionNotSatisfySlotIcons_o *this,
        System_Int32_array *servantIds,
        System_Int32_array *limitCounts,
        System_Int32_array *imageServantIds,
        System_Boolean_array *rarityHideFlags,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  RestrictionNotSatisfySlotIcons_o *v12; // x19
  struct ServantFaceIconComponent_array *servantFaceIcons; // x8
  __int64 v14; // x29
  unsigned __int64 v15; // x25
  int32_t *v16; // x26
  unsigned __int64 max_length; // x9
  int32_t v18; // w27
  struct UISprite_array *v19; // x8
  UserServantEntity_o *HeroineData; // x0
  struct UISprite_array *supportIcons; // x8
  struct UISprite_array *v22; // x8
  int32_t v23; // w3
  struct ServantFaceIconComponent_array *v24; // x8
  struct ServantFaceIconComponent_array *v25; // x8
  struct ServantFaceIconComponent_array *v26; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v28; // x8
  UnityEngine_GameObject_o *v29; // x0
  struct UISprite_array *classIcons; // x20
  int v31; // w8
  __int64 v32; // x21
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  v12 = this;
  if ( (byte_4BD8530 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    this = (RestrictionNotSatisfySlotIcons_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8530 = 1;
  }
  entity = 0LL;
  servantFaceIcons = v12->fields.servantFaceIcons;
  if ( servantFaceIcons )
  {
    if ( !servantIds )
      goto LABEL_82;
    v14 = *(_QWORD *)&servantIds->max_length;
    v15 = 0LL;
    v16 = &servantIds->m_Items[1];
    while ( 1 )
    {
      max_length = servantFaceIcons->max_length;
      if ( (__int64)v15 >= (int)max_length )
        break;
      if ( (__int64)v15 >= (int)v14 )
      {
        if ( v15 >= max_length )
          goto LABEL_83;
        this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v15];
        if ( !this )
          goto LABEL_82;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_82;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        supportIcons = v12->fields.supportIcons;
        if ( !supportIcons )
          goto LABEL_82;
        if ( v15 >= supportIcons->max_length )
          goto LABEL_83;
        this = (RestrictionNotSatisfySlotIcons_o *)supportIcons->m_Items[v15];
        if ( !this )
          goto LABEL_82;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_82;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      else
      {
        if ( v15 >= servantIds->max_length || v15 >= max_length )
          goto LABEL_83;
        this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v15];
        if ( !this )
          goto LABEL_82;
        v18 = v16[v15];
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_82;
        if ( v18 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v19 = v12->fields.supportIcons;
          if ( !v19 )
            goto LABEL_82;
          if ( v15 >= v19->max_length )
            goto LABEL_83;
          this = (RestrictionNotSatisfySlotIcons_o *)v19->m_Items[v15];
          if ( !this )
            goto LABEL_82;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
          if ( !this )
            goto LABEL_82;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          if ( questRestrictionInfo )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
            if ( v15 >= servantIds->max_length )
              goto LABEL_83;
            if ( !this )
              goto LABEL_82;
            this = (RestrictionNotSatisfySlotIcons_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                         &entity,
                                                         v16[v15],
                                                         (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_42;
            this = (RestrictionNotSatisfySlotIcons_o *)entity;
            if ( !entity )
              goto LABEL_82;
            this = (RestrictionNotSatisfySlotIcons_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (RestrictionNotSatisfySlotIcons_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_82;
              this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
              if ( v15 >= servantIds->max_length )
                goto LABEL_83;
              if ( !this )
                goto LABEL_82;
              HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)this, v16[v15], 0LL);
              this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41734096(
                                                           questRestrictionInfo,
                                                           HeroineData,
                                                           0LL);
            }
            else
            {
LABEL_42:
              if ( v15 >= servantIds->max_length )
                goto LABEL_83;
              this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount(
                                                           questRestrictionInfo,
                                                           v16[v15],
                                                           0LL);
            }
            v23 = (int)this;
          }
          else
          {
            v23 = -1;
          }
          v24 = v12->fields.servantFaceIcons;
          if ( !v24 )
            goto LABEL_82;
          if ( v15 >= v24->max_length || v15 >= servantIds->max_length )
            goto LABEL_83;
          if ( !limitCounts )
            goto LABEL_82;
          if ( v15 >= limitCounts->max_length )
            goto LABEL_83;
          if ( !imageServantIds )
            goto LABEL_82;
          if ( v15 >= imageServantIds->max_length )
            goto LABEL_83;
          this = (RestrictionNotSatisfySlotIcons_o *)v24->m_Items[v15];
          if ( !this )
            goto LABEL_82;
          ServantFaceIconComponent__Set_39461076(
            (ServantFaceIconComponent_o *)this,
            v16[v15],
            limitCounts->m_Items[v15 + 1],
            v23,
            0,
            0LL,
            0LL,
            2,
            0,
            0,
            0LL,
            1,
            0,
            imageServantIds->m_Items[v15 + 1],
            0,
            0LL,
            0LL);
          if ( !rarityHideFlags )
            goto LABEL_82;
          if ( v15 >= rarityHideFlags->max_length )
            goto LABEL_83;
          if ( rarityHideFlags->m_Items[v15 + 4] )
          {
            v25 = v12->fields.servantFaceIcons;
            if ( !v25 )
              goto LABEL_82;
            if ( v15 >= v25->max_length )
              goto LABEL_83;
            this = (RestrictionNotSatisfySlotIcons_o *)v25->m_Items[v15];
            if ( !this )
              goto LABEL_82;
            ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, 0, 0LL);
          }
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v22 = v12->fields.supportIcons;
          if ( !v22 )
            goto LABEL_82;
          if ( v15 >= v22->max_length )
            goto LABEL_83;
          this = (RestrictionNotSatisfySlotIcons_o *)v22->m_Items[v15];
          if ( !this )
            goto LABEL_82;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
          if ( !this )
            goto LABEL_82;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        }
        if ( (_DWORD)v14 == 1 || (_DWORD)v14 == 3 && v15 == 2 )
        {
          v26 = v12->fields.servantFaceIcons;
          if ( !v26 )
            goto LABEL_82;
          if ( v15 >= v26->max_length )
            goto LABEL_83;
          this = (RestrictionNotSatisfySlotIcons_o *)v26->m_Items[v15];
          if ( !this )
            goto LABEL_82;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(gameObject, 0.0, 0LL);
          v28 = v12->fields.supportIcons;
          if ( !v28 )
            goto LABEL_82;
          if ( v15 >= v28->max_length )
            goto LABEL_83;
          this = (RestrictionNotSatisfySlotIcons_o *)v28->m_Items[v15];
          if ( !this )
            goto LABEL_82;
          v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(v29, 0.0, 0LL);
        }
      }
      servantFaceIcons = v12->fields.servantFaceIcons;
      ++v15;
      if ( !servantFaceIcons )
        goto LABEL_82;
    }
  }
  classIcons = v12->fields.classIcons;
  if ( classIcons )
  {
    v31 = classIcons->max_length;
    if ( v31 >= 1 )
    {
      v32 = 0LL;
      while ( (unsigned int)v32 < v31 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)classIcons->m_Items[v32];
        if ( !this )
          goto LABEL_82;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_82;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v31 = classIcons->max_length;
        if ( (int)++v32 >= v31 )
          goto LABEL_80;
      }
LABEL_83:
      sub_1C2209C(this, servantIds);
    }
  }
LABEL_80:
  this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
  if ( !this )
LABEL_82:
    sub_1C22094(this, servantIds);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}