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
  if ( (byte_4B12283 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlotIcons_o *)sub_1BCA7E0(&AtlasManager_TypeInfo, classImageIds, method);
    byte_4B12283 = 1;
  }
  classIcons = v4->fields.classIcons;
  if ( classIcons )
  {
    if ( !classImageIds )
LABEL_26:
      sub_1BCAA3C(this, classImageIds);
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
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, classImageIds);
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
      sub_1BCAA44(this, classImageIds);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct ServantFaceIconComponent_array *servantFaceIcons; // x8
  __int64 v22; // x29
  unsigned __int64 v23; // x25
  int32_t *v24; // x26
  unsigned __int64 max_length; // x9
  int32_t v26; // w27
  struct UISprite_array *v27; // x8
  UserServantEntity_o *HeroineData; // x0
  struct UISprite_array *supportIcons; // x8
  struct UISprite_array *v30; // x8
  int32_t v31; // w3
  struct ServantFaceIconComponent_array *v32; // x8
  struct ServantFaceIconComponent_array *v33; // x8
  struct ServantFaceIconComponent_array *v34; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v36; // x8
  UnityEngine_GameObject_o *v37; // x0
  struct UISprite_array *classIcons; // x20
  int v39; // w8
  __int64 v40; // x21
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v12 = this;
  if ( (byte_4B12282 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, servantIds, limitCounts);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v17, v18);
    this = (RestrictionNotSatisfySlotIcons_o *)sub_1BCA7E0(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v19,
                                                 v20);
    byte_4B12282 = 1;
  }
  entity = 0LL;
  servantFaceIcons = v12->fields.servantFaceIcons;
  if ( servantFaceIcons )
  {
    if ( !servantIds )
      goto LABEL_82;
    v22 = *(_QWORD *)&servantIds->max_length;
    v23 = 0LL;
    v24 = &servantIds->m_Items[1];
    while ( 1 )
    {
      max_length = servantFaceIcons->max_length;
      if ( (__int64)v23 >= (int)max_length )
        break;
      if ( (__int64)v23 >= (int)v22 )
      {
        if ( v23 >= max_length )
          goto LABEL_83;
        this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v23];
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
        if ( v23 >= supportIcons->max_length )
          goto LABEL_83;
        this = (RestrictionNotSatisfySlotIcons_o *)supportIcons->m_Items[v23];
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
        if ( v23 >= servantIds->max_length || v23 >= max_length )
          goto LABEL_83;
        this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v23];
        if ( !this )
          goto LABEL_82;
        v26 = v24[v23];
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_82;
        if ( v26 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v27 = v12->fields.supportIcons;
          if ( !v27 )
            goto LABEL_82;
          if ( v23 >= v27->max_length )
            goto LABEL_83;
          this = (RestrictionNotSatisfySlotIcons_o *)v27->m_Items[v23];
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
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, servantIds);
            this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
            if ( v23 >= servantIds->max_length )
              goto LABEL_83;
            if ( !this )
              goto LABEL_82;
            this = (RestrictionNotSatisfySlotIcons_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                         &entity,
                                                         v24[v23],
                                                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_42;
            this = (RestrictionNotSatisfySlotIcons_o *)entity;
            if ( !entity )
              goto LABEL_82;
            this = (RestrictionNotSatisfySlotIcons_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (RestrictionNotSatisfySlotIcons_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_82;
              this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
              if ( v23 >= servantIds->max_length )
                goto LABEL_83;
              if ( !this )
                goto LABEL_82;
              HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)this, v24[v23], 0LL);
              this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(
                                                           questRestrictionInfo,
                                                           HeroineData,
                                                           0LL);
            }
            else
            {
LABEL_42:
              if ( v23 >= servantIds->max_length )
                goto LABEL_83;
              this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount(
                                                           questRestrictionInfo,
                                                           v24[v23],
                                                           0LL);
            }
            v31 = (int)this;
          }
          else
          {
            v31 = -1;
          }
          v32 = v12->fields.servantFaceIcons;
          if ( !v32 )
            goto LABEL_82;
          if ( v23 >= v32->max_length || v23 >= servantIds->max_length )
            goto LABEL_83;
          if ( !limitCounts )
            goto LABEL_82;
          if ( v23 >= limitCounts->max_length )
            goto LABEL_83;
          if ( !imageServantIds )
            goto LABEL_82;
          if ( v23 >= imageServantIds->max_length )
            goto LABEL_83;
          this = (RestrictionNotSatisfySlotIcons_o *)v32->m_Items[v23];
          if ( !this )
            goto LABEL_82;
          ServantFaceIconComponent__Set_38928428(
            (ServantFaceIconComponent_o *)this,
            v24[v23],
            limitCounts->m_Items[v23 + 1],
            v31,
            0,
            0LL,
            0LL,
            2,
            0,
            0,
            0LL,
            1,
            0,
            imageServantIds->m_Items[v23 + 1],
            0,
            0LL);
          if ( !rarityHideFlags )
            goto LABEL_82;
          if ( v23 >= rarityHideFlags->max_length )
            goto LABEL_83;
          if ( rarityHideFlags->m_Items[v23 + 4] )
          {
            v33 = v12->fields.servantFaceIcons;
            if ( !v33 )
              goto LABEL_82;
            if ( v23 >= v33->max_length )
              goto LABEL_83;
            this = (RestrictionNotSatisfySlotIcons_o *)v33->m_Items[v23];
            if ( !this )
              goto LABEL_82;
            ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, 0, 0LL);
          }
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v30 = v12->fields.supportIcons;
          if ( !v30 )
            goto LABEL_82;
          if ( v23 >= v30->max_length )
            goto LABEL_83;
          this = (RestrictionNotSatisfySlotIcons_o *)v30->m_Items[v23];
          if ( !this )
            goto LABEL_82;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
          if ( !this )
            goto LABEL_82;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        }
        if ( (_DWORD)v22 == 1 || (_DWORD)v22 == 3 && v23 == 2 )
        {
          v34 = v12->fields.servantFaceIcons;
          if ( !v34 )
            goto LABEL_82;
          if ( v23 >= v34->max_length )
            goto LABEL_83;
          this = (RestrictionNotSatisfySlotIcons_o *)v34->m_Items[v23];
          if ( !this )
            goto LABEL_82;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(gameObject, 0.0, 0LL);
          v36 = v12->fields.supportIcons;
          if ( !v36 )
            goto LABEL_82;
          if ( v23 >= v36->max_length )
            goto LABEL_83;
          this = (RestrictionNotSatisfySlotIcons_o *)v36->m_Items[v23];
          if ( !this )
            goto LABEL_82;
          v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(v37, 0.0, 0LL);
        }
      }
      servantFaceIcons = v12->fields.servantFaceIcons;
      ++v23;
      if ( !servantFaceIcons )
        goto LABEL_82;
    }
  }
  classIcons = v12->fields.classIcons;
  if ( classIcons )
  {
    v39 = classIcons->max_length;
    if ( v39 >= 1 )
    {
      v40 = 0LL;
      while ( (unsigned int)v40 < v39 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)classIcons->m_Items[v40];
        if ( !this )
          goto LABEL_82;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_82;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v39 = classIcons->max_length;
        if ( (int)++v40 >= v39 )
          goto LABEL_80;
      }
LABEL_83:
      sub_1BCAA44(this, servantIds);
    }
  }
LABEL_80:
  this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
  if ( !this )
LABEL_82:
    sub_1BCAA3C(this, servantIds);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}