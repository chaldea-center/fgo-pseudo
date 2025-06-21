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
  if ( (byte_4B18272 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlotIcons_o *)sub_1BCAFF8(&AtlasManager_TypeInfo, classImageIds);
    byte_4B18272 = 1;
  }
  classIcons = v4->fields.classIcons;
  if ( classIcons )
  {
    if ( !classImageIds )
LABEL_26:
      sub_1BCB254(this, classImageIds);
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
        this = (RestrictionNotSatisfySlotIcons_o *)AtlasManager__SetClassIcon(v10, v11, 3, 0, 0, 0LL);
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
      sub_1BCB25C(this, classImageIds, method);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct ServantFaceIconComponent_array *servantFaceIcons; // x8
  __int64 v18; // x29
  unsigned __int64 v19; // x25
  int32_t *v20; // x26
  unsigned __int64 max_length; // x9
  int32_t v22; // w27
  struct UISprite_array *v23; // x8
  int32_t v24; // w3
  struct UISprite_array *supportIcons; // x8
  struct UISprite_array *v26; // x8
  UserServantEntity_o *HeroineData; // x0
  struct ServantFaceIconComponent_array *v28; // x8
  struct ServantFaceIconComponent_array *v29; // x8
  struct ServantFaceIconComponent_array *v30; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v32; // x8
  UnityEngine_GameObject_o *v33; // x0
  struct UISprite_array *classIcons; // x20
  int v35; // w8
  __int64 v36; // x21
  Il2CppObject *v37; // [xsp+70h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  v12 = this;
  if ( (byte_4B18271 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, servantIds);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v13);
    sub_1BCAFF8(&DataManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    this = (RestrictionNotSatisfySlotIcons_o *)sub_1BCAFF8(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v16);
    byte_4B18271 = 1;
  }
  v37 = 0LL;
  entity = 0LL;
  servantFaceIcons = v12->fields.servantFaceIcons;
  if ( servantFaceIcons )
  {
    if ( servantIds )
    {
      v18 = *(_QWORD *)&servantIds->max_length;
      v19 = 0LL;
      v20 = &servantIds->m_Items[1];
      do
      {
        max_length = servantFaceIcons->max_length;
        if ( (__int64)v19 >= (int)max_length )
          goto LABEL_80;
        if ( (__int64)v19 >= (int)v18 )
        {
          if ( v19 >= max_length )
            goto LABEL_90;
          this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v19];
          if ( !this )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
          if ( !this )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          supportIcons = v12->fields.supportIcons;
          if ( !supportIcons )
            break;
          if ( v19 >= supportIcons->max_length )
            goto LABEL_90;
          this = (RestrictionNotSatisfySlotIcons_o *)supportIcons->m_Items[v19];
          if ( !this )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
          if ( !this )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          goto LABEL_78;
        }
        if ( v19 >= servantIds->max_length || v19 >= max_length )
          goto LABEL_90;
        this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v19];
        if ( !this )
          break;
        v22 = v20[v19];
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          break;
        if ( !v22 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v26 = v12->fields.supportIcons;
          if ( !v26 )
            break;
          if ( v19 >= v26->max_length )
            goto LABEL_90;
          this = (RestrictionNotSatisfySlotIcons_o *)v26->m_Items[v19];
          if ( !this )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
          if ( !this )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          goto LABEL_68;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v23 = v12->fields.supportIcons;
        if ( !v23 )
          break;
        if ( v19 >= v23->max_length )
          goto LABEL_90;
        this = (RestrictionNotSatisfySlotIcons_o *)v23->m_Items[v19];
        if ( !this )
          break;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( v19 >= servantIds->max_length )
          goto LABEL_90;
        if ( !this )
          break;
        this = (RestrictionNotSatisfySlotIcons_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     &entity,
                                                     v20[v19],
                                                     (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (RestrictionNotSatisfySlotIcons_o *)entity;
          if ( !entity )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                                       (ServantEntity_o *)entity,
                                                       -1,
                                                       0LL);
          v24 = (int)this;
          if ( !questRestrictionInfo )
            goto LABEL_53;
        }
        else
        {
          v24 = -1;
          if ( !questRestrictionInfo )
            goto LABEL_53;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( v19 >= servantIds->max_length )
          goto LABEL_90;
        if ( !this )
          break;
        this = (RestrictionNotSatisfySlotIcons_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     &v37,
                                                     v20[v19],
                                                     (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_50;
        this = (RestrictionNotSatisfySlotIcons_o *)v37;
        if ( !v37 )
          break;
        this = (RestrictionNotSatisfySlotIcons_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)v37, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (RestrictionNotSatisfySlotIcons_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( v19 >= servantIds->max_length )
            goto LABEL_90;
          if ( !this )
            break;
          HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)this, v20[v19], 0LL);
          this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42573068(
                                                       questRestrictionInfo,
                                                       HeroineData,
                                                       0LL);
        }
        else
        {
LABEL_50:
          if ( v19 >= servantIds->max_length )
            goto LABEL_90;
          this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount(
                                                       questRestrictionInfo,
                                                       v20[v19],
                                                       0LL);
        }
        v24 = (int)this;
LABEL_53:
        v28 = v12->fields.servantFaceIcons;
        if ( !v28 )
          break;
        if ( v19 >= v28->max_length || v19 >= servantIds->max_length )
          goto LABEL_90;
        if ( !limitCounts )
          break;
        if ( v19 >= limitCounts->max_length )
          goto LABEL_90;
        if ( !imageServantIds )
          break;
        if ( v19 >= imageServantIds->max_length )
          goto LABEL_90;
        this = (RestrictionNotSatisfySlotIcons_o *)v28->m_Items[v19];
        if ( !this )
          break;
        ServantFaceIconComponent__Set_40191528(
          (ServantFaceIconComponent_o *)this,
          v20[v19],
          limitCounts->m_Items[v19 + 1],
          v24,
          0,
          0LL,
          0LL,
          2,
          0,
          0,
          0LL,
          1,
          0,
          imageServantIds->m_Items[v19 + 1],
          0,
          0LL,
          0,
          0LL);
        if ( !rarityHideFlags )
          break;
        if ( v19 >= rarityHideFlags->max_length )
          goto LABEL_90;
        if ( rarityHideFlags->m_Items[v19 + 4] )
        {
          v29 = v12->fields.servantFaceIcons;
          if ( !v29 )
            break;
          if ( v19 >= v29->max_length )
            goto LABEL_90;
          this = (RestrictionNotSatisfySlotIcons_o *)v29->m_Items[v19];
          if ( !this )
            break;
          ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, 0, 0LL);
        }
LABEL_68:
        if ( (_DWORD)v18 == 1 || (_DWORD)v18 == 3 && v19 == 2 )
        {
          v30 = v12->fields.servantFaceIcons;
          if ( !v30 )
            break;
          if ( v19 >= v30->max_length )
            goto LABEL_90;
          this = (RestrictionNotSatisfySlotIcons_o *)v30->m_Items[v19];
          if ( !this )
            break;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(gameObject, 0.0, 0LL);
          v32 = v12->fields.supportIcons;
          if ( !v32 )
            break;
          if ( v19 >= v32->max_length )
            goto LABEL_90;
          this = (RestrictionNotSatisfySlotIcons_o *)v32->m_Items[v19];
          if ( !this )
            break;
          v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionX(v33, 0.0, 0LL);
        }
LABEL_78:
        servantFaceIcons = v12->fields.servantFaceIcons;
        ++v19;
      }
      while ( servantFaceIcons );
    }
LABEL_89:
    sub_1BCB254(this, servantIds);
  }
LABEL_80:
  classIcons = v12->fields.classIcons;
  if ( classIcons )
  {
    v35 = classIcons->max_length;
    if ( v35 >= 1 )
    {
      v36 = 0LL;
      while ( (unsigned int)v36 < v35 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)classIcons->m_Items[v36];
        if ( !this )
          goto LABEL_89;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_89;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v35 = classIcons->max_length;
        if ( (int)++v36 >= v35 )
          goto LABEL_87;
      }
LABEL_90:
      sub_1BCB25C(this, servantIds, limitCounts);
    }
  }
LABEL_87:
  this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
  if ( !this )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}