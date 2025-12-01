void RestrictionNotSatisfySlotIcons___ctor(RestrictionNotSatisfySlotIcons_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void RestrictionNotSatisfySlotIcons__Awake(RestrictionNotSatisfySlotIcons_o *this, const MethodInfo *method)
{
  ;
}


UIWidget_o *RestrictionNotSatisfySlotIcons__GetUIWidget(
        RestrictionNotSatisfySlotIcons_o *this,
        const MethodInfo *method)
{
  return this->fields.iconsWidget;
}


void RestrictionNotSatisfySlotIcons__SetClassIcons(
        RestrictionNotSatisfySlotIcons_o *this,
        System_Int32_array *classImageIds,
        const MethodInfo *method)
{
  RestrictionNotSatisfySlotIcons_o *v4; // x19
  struct UISprite_array *classIcons; // x8
  int max_length; // w24
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
  if ( (byte_4CC3148 & 1) == 0 )
  {
    this = (RestrictionNotSatisfySlotIcons_o *)sub_1C713B0(&AtlasManager_TypeInfo);
    byte_4CC3148 = 1;
  }
  classIcons = v4->fields.classIcons;
  if ( classIcons )
  {
    if ( !classImageIds )
LABEL_26:
      sub_1C71608(this, classImageIds);
    max_length = classImageIds->max_length;
    v7 = 0;
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
                                                   0);
      if ( !this )
        goto LABEL_26;
      if ( (int)v7 >= max_length )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v9 = v4->fields.classIcons;
        if ( !v9 )
          goto LABEL_26;
        if ( (unsigned int)v7 >= LODWORD(v9->max_length) || (unsigned int)v7 >= LODWORD(classImageIds->max_length) )
          goto LABEL_42;
        v10 = v9->m_Items[v7];
        v11 = classImageIds->m_Items[v7];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        this = (RestrictionNotSatisfySlotIcons_o *)AtlasManager__SetClassIcon(v10, v11, 3, 0, 0, 0);
      }
      if ( max_length == 1 || max_length == 3 && (_DWORD)v7 == 2 )
      {
        v12 = v4->fields.classIcons;
        if ( !v12 )
          goto LABEL_26;
        if ( (unsigned int)v7 >= LODWORD(v12->max_length) )
          goto LABEL_42;
        this = (RestrictionNotSatisfySlotIcons_o *)v12->m_Items[v7];
        if ( !this )
          goto LABEL_26;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(gameObject, 0.0, 0);
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
      v16 = 0;
      while ( (unsigned int)v16 < v15 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)servantFaceIcons->m_Items[v16];
        if ( !this )
          goto LABEL_26;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( !this )
          goto LABEL_26;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v15 = servantFaceIcons->max_length;
        if ( (int)++v16 >= v15 )
          goto LABEL_34;
      }
LABEL_42:
      sub_1C71610(this);
    }
  }
LABEL_34:
  supportIcons = v4->fields.supportIcons;
  if ( supportIcons )
  {
    v18 = supportIcons->max_length;
    if ( v18 >= 1 )
    {
      v19 = 0;
      while ( (unsigned int)v19 < v18 )
      {
        this = (RestrictionNotSatisfySlotIcons_o *)supportIcons->m_Items[v19];
        if ( !this )
          goto LABEL_26;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( !this )
          goto LABEL_26;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v18 = supportIcons->max_length;
        if ( (int)++v19 >= v18 )
          return;
      }
      goto LABEL_42;
    }
  }
}


void RestrictionNotSatisfySlotIcons__SetServantIcons(
        RestrictionNotSatisfySlotIcons_o *this,
        System_Int32_array *servantIds,
        System_Int32_array *limitCounts,
        System_Int32_array *imageServantIds,
        System_Boolean_array *rarityHideFlags,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v12; // x19
  intptr_t m_CachedPtr; // x8
  il2cpp_array_size_t max_length; // x29
  unsigned __int64 v15; // x25
  int32_t *m_Items; // x26
  unsigned __int64 v17; // x9
  int32_t v18; // w27
  UnityEngine_Component_c *v19; // x8
  int32_t v20; // w3
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_c *v22; // x8
  UserServantEntity_o *HeroineData; // x0
  intptr_t v24; // x8
  intptr_t v25; // x8
  intptr_t v26; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_c *v28; // x8
  UnityEngine_GameObject_o *v29; // x0
  _DWORD *monitor; // x20
  int v31; // w8
  __int64 v32; // x21
  Il2CppObject *v33; // [xsp+70h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  v12 = (UnityEngine_Component_o *)this;
  if ( (byte_4CC3147 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    this = (RestrictionNotSatisfySlotIcons_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC3147 = 1;
  }
  v33 = 0;
  entity = 0;
  m_CachedPtr = v12[1].fields.m_CachedPtr;
  if ( m_CachedPtr )
  {
    if ( servantIds )
    {
      max_length = servantIds->max_length;
      v15 = 0;
      m_Items = servantIds->m_Items;
      do
      {
        v17 = *(unsigned int *)(m_CachedPtr + 24);
        if ( (__int64)v15 >= (int)v17 )
          goto LABEL_80;
        if ( (__int64)v15 >= (int)max_length )
        {
          if ( v15 >= v17 )
            goto LABEL_90;
          this = *(RestrictionNotSatisfySlotIcons_o **)(m_CachedPtr + 8 * v15 + 32);
          if ( !this )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
          if ( !this )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          klass = v12[2].klass;
          if ( !klass )
            break;
          if ( v15 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_90;
          this = (RestrictionNotSatisfySlotIcons_o *)*((_QWORD *)&klass->_1.byval_arg.data + v15);
          if ( !this )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
          if ( !this )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          goto LABEL_78;
        }
        if ( v15 >= LODWORD(servantIds->max_length) || v15 >= v17 )
          goto LABEL_90;
        this = *(RestrictionNotSatisfySlotIcons_o **)(m_CachedPtr + 8 * v15 + 32);
        if ( !this )
          break;
        v18 = m_Items[v15];
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( !this )
          break;
        if ( !v18 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          v22 = v12[2].klass;
          if ( !v22 )
            break;
          if ( v15 >= LODWORD(v22->_1.namespaze) )
            goto LABEL_90;
          this = (RestrictionNotSatisfySlotIcons_o *)*((_QWORD *)&v22->_1.byval_arg.data + v15);
          if ( !this )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
          if ( !this )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          goto LABEL_68;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v19 = v12[2].klass;
        if ( !v19 )
          break;
        if ( v15 >= LODWORD(v19->_1.namespaze) )
          goto LABEL_90;
        this = (RestrictionNotSatisfySlotIcons_o *)*((_QWORD *)&v19->_1.byval_arg.data + v15);
        if ( !this )
          break;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( v15 >= LODWORD(servantIds->max_length) )
          goto LABEL_90;
        if ( !this )
          break;
        this = (RestrictionNotSatisfySlotIcons_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     &entity,
                                                     m_Items[v15],
                                                     (const MethodInfo_3408ECC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (RestrictionNotSatisfySlotIcons_o *)entity;
          if ( !entity )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                                       (ServantEntity_o *)entity,
                                                       -1,
                                                       0);
          v20 = (int)this;
          if ( !questRestrictionInfo )
            goto LABEL_53;
        }
        else
        {
          v20 = -1;
          if ( !questRestrictionInfo )
            goto LABEL_53;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( v15 >= LODWORD(servantIds->max_length) )
          goto LABEL_90;
        if ( !this )
          break;
        this = (RestrictionNotSatisfySlotIcons_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     &v33,
                                                     m_Items[v15],
                                                     (const MethodInfo_3408ECC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_50;
        this = (RestrictionNotSatisfySlotIcons_o *)v33;
        if ( !v33 )
          break;
        this = (RestrictionNotSatisfySlotIcons_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)v33, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (RestrictionNotSatisfySlotIcons_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            break;
          this = (RestrictionNotSatisfySlotIcons_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( v15 >= LODWORD(servantIds->max_length) )
            goto LABEL_90;
          if ( !this )
            break;
          HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)this, m_Items[v15], 0);
          this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43730380(
                                                       questRestrictionInfo,
                                                       HeroineData,
                                                       0);
        }
        else
        {
LABEL_50:
          if ( v15 >= LODWORD(servantIds->max_length) )
            goto LABEL_90;
          this = (RestrictionNotSatisfySlotIcons_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount(
                                                       questRestrictionInfo,
                                                       m_Items[v15],
                                                       0);
        }
        v20 = (int)this;
LABEL_53:
        v24 = v12[1].fields.m_CachedPtr;
        if ( !v24 )
          break;
        if ( v15 >= *(unsigned int *)(v24 + 24) || v15 >= LODWORD(servantIds->max_length) )
          goto LABEL_90;
        if ( !limitCounts )
          break;
        if ( v15 >= LODWORD(limitCounts->max_length) )
          goto LABEL_90;
        if ( !imageServantIds )
          break;
        if ( v15 >= LODWORD(imageServantIds->max_length) )
          goto LABEL_90;
        this = *(RestrictionNotSatisfySlotIcons_o **)(v24 + 8 * v15 + 32);
        if ( !this )
          break;
        ServantFaceIconComponent__Set_41283156(
          (ServantFaceIconComponent_o *)this,
          m_Items[v15],
          limitCounts->m_Items[v15],
          v20,
          0,
          0,
          0,
          2,
          0,
          0,
          0,
          1,
          0,
          imageServantIds->m_Items[v15],
          0,
          0,
          0,
          0);
        if ( !rarityHideFlags )
          break;
        if ( v15 >= LODWORD(rarityHideFlags->max_length) )
          goto LABEL_90;
        if ( rarityHideFlags->m_Items[v15] )
        {
          v25 = v12[1].fields.m_CachedPtr;
          if ( !v25 )
            break;
          if ( v15 >= *(unsigned int *)(v25 + 24) )
            goto LABEL_90;
          this = *(RestrictionNotSatisfySlotIcons_o **)(v25 + 8 * v15 + 32);
          if ( !this )
            break;
          ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, 0, 0);
        }
LABEL_68:
        if ( (_DWORD)max_length == 1 || (_DWORD)max_length == 3 && v15 == 2 )
        {
          v26 = v12[1].fields.m_CachedPtr;
          if ( !v26 )
            break;
          if ( v15 >= *(unsigned int *)(v26 + 24) )
            goto LABEL_90;
          this = *(RestrictionNotSatisfySlotIcons_o **)(v26 + 8 * v15 + 32);
          if ( !this )
            break;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          GameObjectExtensions__SetLocalPositionX(gameObject, 0.0, 0);
          v28 = v12[2].klass;
          if ( !v28 )
            break;
          if ( v15 >= LODWORD(v28->_1.namespaze) )
            goto LABEL_90;
          this = (RestrictionNotSatisfySlotIcons_o *)*((_QWORD *)&v28->_1.byval_arg.data + v15);
          if ( !this )
            break;
          v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          GameObjectExtensions__SetLocalPositionX(v29, 0.0, 0);
        }
LABEL_78:
        m_CachedPtr = v12[1].fields.m_CachedPtr;
        ++v15;
      }
      while ( m_CachedPtr );
    }
LABEL_89:
    sub_1C71608(this, servantIds);
  }
LABEL_80:
  monitor = v12[2].monitor;
  if ( monitor )
  {
    v31 = monitor[6];
    if ( v31 >= 1 )
    {
      v32 = 0;
      while ( (unsigned int)v32 < v31 )
      {
        this = *(RestrictionNotSatisfySlotIcons_o **)&monitor[2 * v32 + 8];
        if ( !this )
          goto LABEL_89;
        this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
        if ( !this )
          goto LABEL_89;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v31 = monitor[6];
        if ( (int)++v32 >= v31 )
          goto LABEL_87;
      }
LABEL_90:
      sub_1C71610(this);
    }
  }
LABEL_87:
  this = (RestrictionNotSatisfySlotIcons_o *)UnityEngine_Component__get_gameObject(v12, 0);
  if ( !this )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}