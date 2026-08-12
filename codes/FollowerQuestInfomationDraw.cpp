void FollowerQuestInfomationDraw___ctor(FollowerQuestInfomationDraw_o *this, const MethodInfo *method)
{
  this->fields.isClick = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FollowerQuestInfomationDraw__Awake(FollowerQuestInfomationDraw_o *this, const MethodInfo *method)
{
  UIWidget_o *restrictionMessageLabel; // x0

  restrictionMessageLabel = (UIWidget_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageLabel )
    sub_2213CDC(0, method);
  this->fields.baseMessageWidth = restrictionMessageLabel->fields.mWidth;
  UIWidget__set_width(restrictionMessageLabel, 1000, 0);
}


System_Collections_IEnumerator_o *FollowerQuestInfomationDraw__DispTotalDropItemCR(
        FollowerQuestInfomationDraw_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596AF47 & 1) == 0 )
  {
    sub_2213A60(&FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_TypeInfo);
    byte_596AF47 = 1;
  }
  v5 = sub_2213CCC(FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)(v5 + 40) = pos;
  return (System_Collections_IEnumerator_o *)v5;
}


void FollowerQuestInfomationDraw__OnClick(FollowerQuestInfomationDraw_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_596AF4B & 1) == 0 )
  {
    sub_2213A60(&Method_FollowerQuestInfomationDraw_OnClick__);
    byte_596AF4B = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    v3 = Method_FollowerQuestInfomationDraw_OnClick__;
    if ( (*((_BYTE *)Method_FollowerQuestInfomationDraw_OnClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FollowerQuestInfomationDraw_OnClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void FollowerQuestInfomationDraw__SetInfomation(
        FollowerQuestInfomationDraw_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t pos,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  System_Collections_IEnumerator_o *dispCRW; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_GameObject_o *trendInfoBase; // x0
  const MethodInfo *v20; // x2
  bool v21; // w0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  struct System_Collections_IEnumerator_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    *(System_String_o **)&pos,
    (System_String_o *)classIds,
    (int32_t)method,
    v5,
    v6,
    v7);
  dispCRW = this->fields.dispCRW;
  if ( dispCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, dispCRW, 0);
    this->fields.dispCRW = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dispCRW, 0, v13, v14, v15, v16, v17, v18);
  }
  trendInfoBase = this->fields.trendInfoBase;
  if ( !trendInfoBase )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(trendInfoBase, 0, 0);
  trendInfoBase = (UnityEngine_GameObject_o *)this->fields.restrictionMessageBase;
  if ( !trendInfoBase )
    goto LABEL_12;
  trendInfoBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)trendInfoBase, 0);
  if ( !trendInfoBase )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(trendInfoBase, 0, 0);
  v21 = FollowerQuestInfomationDraw__SetTrendDisp(this, classIds, v20);
  this->fields.isDispTrend = v21;
  if ( !v21 && (!*p_questRestrictionInfo || QuestRestrictionInfo__IsEmpty(*p_questRestrictionInfo, 0)) )
  {
    FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(this, v22);
    trendInfoBase = (UnityEngine_GameObject_o *)this->fields.infomationPanel;
    if ( trendInfoBase )
    {
      ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, double))trendInfoBase->klass[1]._1.element_class)(
        trendInfoBase,
        trendInfoBase->klass[1]._1.castClass,
        0.0);
      FollowerQuestInfomationDraw__SetRestrictionDisp(this, 0, v24);
      this->fields.isClick = 1;
      return;
    }
LABEL_12:
    sub_2213CDC(trendInfoBase, dispCRW);
  }
  v25 = FollowerQuestInfomationDraw__DispTotalDropItemCR(this, pos, v23);
  this->fields.dispCRW = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dispCRW, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, this->fields.dispCRW, 0);
}


bool FollowerQuestInfomationDraw__SetRestrictionDisp(
        FollowerQuestInfomationDraw_o *this,
        System_String_o *restrictionMessage,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool IsNullOrEmpty; // w19
  UnityEngine_Transform_o *restrictionMessageBase; // x0
  int32_t baseMessageWidth; // s8
  float v9; // s0
  float v10; // s1
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596AF4A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AF4A = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(restrictionMessage, 0);
  if ( IsNullOrEmpty )
  {
    restrictionMessageBase = this->fields.restrictionMessageBase;
    if ( restrictionMessageBase )
    {
      v12.fields.x = 1.0;
      v12.fields.y = 1.0;
      v12.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(restrictionMessageBase, v12, 0);
      restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
      if ( restrictionMessageBase )
      {
        UILabel__set_text((UILabel_o *)restrictionMessageBase, (System_String_o *)StringLiteral_1/*""*/, 0);
        return !IsNullOrEmpty;
      }
    }
LABEL_14:
    sub_2213CDC(restrictionMessageBase, v5);
  }
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  baseMessageWidth = this->fields.baseMessageWidth;
  UILabel__set_text((UILabel_o *)restrictionMessageBase, restrictionMessage, 0);
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  LODWORD(v9) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)restrictionMessageBase, 0);
  restrictionMessageBase = this->fields.restrictionMessageBase;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  v10 = (float)this->fields.baseMessageWidth;
  if ( v9 <= v10 )
    v9 = (float)baseMessageWidth;
  v13.fields.z = 1.0;
  v13.fields.x = v10 / v9;
  v13.fields.y = 1.0;
  UnityEngine_Transform__set_localScale(restrictionMessageBase, v13, 0);
  return !IsNullOrEmpty;
}


bool FollowerQuestInfomationDraw__SetTrendDisp(
        FollowerQuestInfomationDraw_o *this,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  Il2CppClass *Instance; // x0
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestEntity_o *Entity; // x22
  struct QuestRestrictionInfo_o *v9; // x8
  QuestPhaseEntity_o *v10; // x21
  char v11; // w19
  System_String_o *RecommendLv_49491716; // x23
  bool IsNullOrEmpty; // w22
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Component_object; // x24
  __int64 v17; // x1
  __int64 v18; // x2
  float v19; // s0
  float v20; // s8
  __int64 v21; // x2
  struct UILabel_o *levelInfoLabel; // x8
  UnityEngine_Object_o *v23; // x23
  int mWidth; // s8
  float monitor_low; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct ServantClassIconComponent_array *classIconList; // x8
  unsigned __int64 v28; // x21
  unsigned __int64 max_length_low; // x9
  Il2CppClass **v30; // x9
  unsigned __int64 v31; // x8
  struct System_Int32_array *v32; // x8
  struct ServantClassIconComponent_array *v33; // x8
  unsigned __int64 v34; // x20
  unsigned __int64 v35; // x9
  struct System_Int32_array *v36; // x9
  Il2CppClass **v37; // x10
  unsigned __int64 v38; // x8
  struct QuestRestrictionInfo_o *v40; // x8

  if ( (byte_596AF49 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AF49 = 1;
  }
  if ( !this->fields.questRestrictionInfo )
  {
    v10 = 0;
LABEL_14:
    RecommendLv_49491716 = 0;
    goto LABEL_15;
  }
  Instance = (Il2CppClass *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (Il2CppClass *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_77;
  if ( !Instance )
    goto LABEL_77;
  Entity = (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              questRestrictionInfo->fields.questId,
                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  Instance = (Il2CppClass *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (Il2CppClass *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v9 = this->fields.questRestrictionInfo;
  if ( !v9 || !Instance )
    goto LABEL_77;
  v10 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, v9->fields.questId, v9->fields.questPhase, 0);
  if ( !Entity )
    goto LABEL_14;
  if ( QuestEntity__GetTypeFlag(Entity, 0) != 128 )
  {
    v40 = this->fields.questRestrictionInfo;
    if ( v40 )
      RecommendLv_49491716 = QuestEntity__getRecommendLv_49491716(Entity, v40->fields.questPhase, 0);
    else
      RecommendLv_49491716 = Entity->fields.recommendLv;
LABEL_15:
    IsNullOrEmpty = System_String__IsNullOrEmpty(RecommendLv_49491716, 0);
    if ( IsNullOrEmpty )
    {
      Instance = (Il2CppClass *)this->fields.levelInfoBase;
      if ( !Instance )
        goto LABEL_77;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      Instance = (Il2CppClass *)this->fields.levelInfoLabel;
      if ( !Instance )
        goto LABEL_77;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( !classIds )
        goto LABEL_60;
LABEL_45:
      if ( classIds->max_length )
      {
        Instance = (Il2CppClass *)this->fields.classInfoBase;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
          classIconList = this->fields.classIconList;
          if ( classIconList )
          {
            v28 = 0;
            while ( 1 )
            {
              max_length_low = LODWORD(classIconList->max_length);
              if ( (__int64)v28 >= (int)max_length_low )
                goto LABEL_78;
              if ( v28 >= max_length_low )
                goto LABEL_85;
              v30 = &classIconList->obj.klass + v28;
              v31 = LODWORD(classIds->max_length);
              Instance = v30[4];
              if ( (__int64)v28 >= (int)v31 )
                goto LABEL_56;
              if ( v28 >= v31 )
LABEL_85:
                sub_2213CE4(Instance);
              v6 = (unsigned int)classIds->m_Items[v28];
              if ( (int)v6 < 1 )
              {
LABEL_56:
                if ( !Instance )
                  goto LABEL_77;
                ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Instance, 0);
              }
              else
              {
                if ( !Instance )
                  goto LABEL_77;
                ServantClassIconComponent__Set((ServantClassIconComponent_o *)Instance, v6, 0, 0);
              }
              classIconList = this->fields.classIconList;
              ++v28;
              if ( !classIconList )
                goto LABEL_77;
            }
          }
        }
        goto LABEL_77;
      }
LABEL_60:
      if ( v10 && (v32 = v10->fields.classIds) != 0 && v32->max_length )
      {
        Instance = (Il2CppClass *)this->fields.classInfoBase;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
          v33 = this->fields.classIconList;
          if ( v33 )
          {
            v34 = 0;
            while ( 1 )
            {
              v35 = LODWORD(v33->max_length);
              if ( (__int64)v34 >= (int)v35 )
                break;
              if ( v34 >= v35 )
                goto LABEL_85;
              v36 = v10->fields.classIds;
              if ( v36 )
              {
                v37 = &v33->obj.klass + v34;
                v38 = LODWORD(v36->max_length);
                Instance = v37[4];
                if ( (__int64)v34 >= (int)v38 )
                  goto LABEL_74;
                if ( v34 >= v38 )
                  goto LABEL_85;
                v6 = (unsigned int)v36->m_Items[v34];
                if ( (int)v6 < 1 )
                {
LABEL_74:
                  if ( !Instance )
                    goto LABEL_77;
                  ServantClassIconComponent__Clear((ServantClassIconComponent_o *)Instance, 0);
                }
                else
                {
                  if ( !Instance )
                    goto LABEL_77;
                  ServantClassIconComponent__Set((ServantClassIconComponent_o *)Instance, v6, 0, 0);
                }
                v33 = this->fields.classIconList;
                ++v34;
                if ( v33 )
                  continue;
              }
              goto LABEL_77;
            }
LABEL_78:
            v11 = 1;
            return v11 & 1;
          }
        }
      }
      else
      {
        Instance = (Il2CppClass *)this->fields.classInfoBase;
        if ( Instance )
        {
          v11 = !IsNullOrEmpty;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          return v11 & 1;
        }
      }
      goto LABEL_77;
    }
    Instance = (Il2CppClass *)this->fields.levelInfoSprite;
    if ( !Instance )
      goto LABEL_77;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)Instance,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    Instance = (Il2CppClass *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_77;
      CondensedScaleSprite__Init((CondensedScaleSprite_o *)Component_object, 0);
    }
    Instance = (Il2CppClass *)this->fields.levelInfoBase;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = (Il2CppClass *)this->fields.levelInfoLabel;
      if ( Instance )
      {
        UILabel__set_text((UILabel_o *)Instance, RecommendLv_49491716, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
        Instance = (Il2CppClass *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_77;
          v19 = CondensedScaleSprite__GetAfterAdjustWidth((CondensedScaleSprite_o *)Component_object, 0);
          Instance = (Il2CppClass *)this->fields.levelInfoSprite;
          if ( !Instance )
            goto LABEL_77;
          v20 = (float)(SLODWORD(Instance->_1.implementedInterfaces) / 2) + (float)(v19 * -0.5);
LABEL_44:
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          GameObjectExtensions__SetLocalPositionX(gameObject, v20, 0);
          if ( !classIds )
            goto LABEL_60;
          goto LABEL_45;
        }
        Instance = (Il2CppClass *)this->fields.levelInfoLabel;
        if ( Instance )
        {
          Instance = (Il2CppClass *)UnityEngine_Component__GetComponent_object_(
                                      (UnityEngine_Component_o *)Instance,
                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
          levelInfoLabel = this->fields.levelInfoLabel;
          if ( levelInfoLabel )
          {
            v23 = (UnityEngine_Object_o *)Instance;
            mWidth = levelInfoLabel->fields.mWidth;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v21);
            monitor_low = (float)mWidth;
            Instance = (Il2CppClass *)UnityEngine_Object__op_Inequality(v23, 0, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_77;
              if ( monitor_low > (float)SLODWORD(v23[2].monitor) )
                monitor_low = (float)SLODWORD(v23[2].monitor);
            }
            Instance = (Il2CppClass *)this->fields.levelInfoSprite;
            if ( Instance )
            {
              v20 = monitor_low * -0.5;
              goto LABEL_44;
            }
          }
        }
      }
    }
LABEL_77:
    sub_2213CDC(Instance, v6);
  }
  v11 = 0;
  return v11 & 1;
}


void FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(
        FollowerQuestInfomationDraw_o *this,
        const MethodInfo *method)
{
  struct UIPanel_o *infomationPanel; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x19

  if ( (byte_596AF48 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AF48 = 1;
  }
  infomationPanel = this->fields.infomationPanel;
  if ( !infomationPanel )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)infomationPanel,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  infomationPanel = (struct UIPanel_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0,
                                          0);
  if ( ((unsigned __int8)infomationPanel & 1) != 0 )
  {
    if ( Component_object )
    {
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(infomationPanel, method);
  }
}


void FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17___ctor(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__MoveNext(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *ta_5__4; // x0
  int32_t _1__state; // w8
  struct FollowerQuestInfomationDraw_o *_4__this; // x20
  __int64 v6; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x21
  FollowerQuestInfomationDraw___c_c *v9; // x0
  struct FollowerQuestInfomationDraw___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__17_0; // x22
  Il2CppObject *v12; // x23
  struct FollowerQuestInfomationDraw___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  struct System_String_array *Messages_50432964; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int isClick; // w8
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_String_array *v35; // x8
  int32_t max_length; // w9
  _BOOL4 isDispTrend; // w8
  const MethodInfo *v38; // x2
  struct System_String_array *v39; // x8
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  Il2CppObject *wait_5__6; // x1
  Il2CppObject **p__2__current; // x19
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  Il2CppObject *v54; // x1
  Il2CppObject **v55; // x19
  int v56; // w8
  int32_t restrictionCount_5__3; // w9
  int v58; // w8
  const MethodInfo *v59; // x2
  struct System_String_array *restrictionMessages_5__2; // x8
  __int64 dispNum; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenAlpha_o *v63; // x0
  struct TweenAlpha_o **p_ta_5__4; // x21
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  __int64 v71; // x1
  __int64 v72; // x2
  UnityEngine_Object_o *v73; // x22
  UnityEngine_WaitForEndOfFrame_c *v74; // x0
  UnityEngine_WaitForEndOfFrame_o *v75; // x21
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  UnityEngine_GameObject_o *v82; // x0
  struct TweenAlpha_o *v83; // x0
  struct TweenAlpha_o **v84; // x21
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  __int64 v91; // x1
  __int64 v92; // x2
  UnityEngine_Object_o *v93; // x22
  UnityEngine_WaitForEndOfFrame_c *v94; // x0
  UnityEngine_WaitForEndOfFrame_o *v95; // x21
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  UnityEngine_WaitForEndOfFrame_o *v102; // x20
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7

  if ( (byte_596AF4D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_2213A60(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_FollowerQuestInfomationDraw___c__DispTotalDropItemCR_b__17_0__);
    sub_2213A60(&FollowerQuestInfomationDraw___c_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_596AF4D = 1;
  }
  ta_5__4 = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state <= 1 )
  {
    if ( _1__state )
    {
      if ( _1__state != 1 )
        return (char)ta_5__4;
      this->fields.__1__state = -1;
      while ( 1 )
      {
        ta_5__4 = (UnityEngine_Behaviour_o *)this->fields._ta_5__4;
        if ( !ta_5__4 )
          goto LABEL_97;
        ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Behaviour__get_enabled(ta_5__4, 0);
        if ( ((unsigned __int8)ta_5__4 & 1) != 0 )
        {
          if ( !_4__this )
            goto LABEL_97;
          if ( !_4__this->fields.isClick )
          {
            wait_5__6 = (Il2CppObject *)this->fields._wait_5__6;
            this->fields.__2__current = wait_5__6;
            p__2__current = &this->fields.__2__current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)p__2__current,
              (int32_t)wait_5__6,
              v40,
              v41,
              v42,
              v43,
              v44,
              v45);
            *((_DWORD *)p__2__current - 2) = 1;
            LOBYTE(ta_5__4) = 1;
            return (char)ta_5__4;
          }
          this->fields._wait_5__6 = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__6, 0, v40, v41, v42, v43, v44, v45);
        }
        else
        {
          this->fields._wait_5__6 = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__6, 0, v40, v41, v42, v43, v44, v45);
          if ( !_4__this )
            goto LABEL_97;
        }
        do
        {
          if ( _4__this->fields.isClick )
            goto LABEL_62;
          while ( 1 )
          {
            this->fields._startTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0);
LABEL_80:
            isClick = 1;
            if ( !_4__this->fields.isClick )
            {
              v102 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v102, 0);
              this->fields.__2__current = (Il2CppObject *)v102;
              v55 = &this->fields.__2__current;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)v55, (int32_t)v102, v103, v104, v105, v106, v107, v108);
              v56 = 2;
              goto LABEL_95;
            }
LABEL_81:
            if ( !isClick )
            {
              ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.infomationPanel;
              if ( !ta_5__4 )
                goto LABEL_97;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ta_5__4, 0);
              v63 = TweenAlpha__Begin(gameObject, 0.5, 0.0, 0);
              this->fields._ta_5__4 = v63;
              p_ta_5__4 = &this->fields._ta_5__4;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields._ta_5__4,
                (int32_t)v63,
                v65,
                v66,
                v67,
                v68,
                v69,
                v70);
              v73 = (UnityEngine_Object_o *)this->fields._ta_5__4;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v71, v72);
              ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v73, 0, 0);
              if ( ((unsigned __int8)ta_5__4 & 1) != 0 )
              {
                if ( !*p_ta_5__4 )
                  goto LABEL_97;
                v74 = UnityEngine_WaitForEndOfFrame_TypeInfo;
                (*p_ta_5__4)->fields.method = 6;
                v75 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(v74);
                UnityEngine_WaitForEndOfFrame___ctor(v75, 0);
                this->fields._wait_5__6 = v75;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__6,
                  (int32_t)v75,
                  v76,
                  v77,
                  v78,
                  v79,
                  v80,
                  v81);
LABEL_56:
                ta_5__4 = (UnityEngine_Behaviour_o *)this->fields._ta_5__4;
                if ( !ta_5__4 )
                  goto LABEL_97;
                ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Behaviour__get_enabled(ta_5__4, 0);
                if ( ((unsigned __int8)ta_5__4 & 1) != 0 )
                {
                  if ( !_4__this )
                    goto LABEL_97;
                  if ( !_4__this->fields.isClick )
                  {
                    v54 = (Il2CppObject *)this->fields._wait_5__6;
                    this->fields.__2__current = v54;
                    v55 = &this->fields.__2__current;
                    sub_2213A04((MissionNaviTransitionBoardItem_o *)v55, (int32_t)v54, v48, v49, v50, v51, v52, v53);
                    v56 = 3;
LABEL_95:
                    *((_DWORD *)v55 - 2) = v56;
                    LOBYTE(ta_5__4) = 1;
                    return (char)ta_5__4;
                  }
                }
                this->fields._wait_5__6 = 0;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__6,
                  0,
                  v48,
                  v49,
                  v50,
                  v51,
                  v52,
                  v53);
              }
            }
LABEL_62:
            if ( !_4__this )
              goto LABEL_97;
            FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(_4__this, method);
            restrictionCount_5__3 = this->fields._restrictionCount_5__3;
            v58 = _4__this->fields.dispNum + 1;
            _4__this->fields.dispNum = v58;
            if ( v58 >= restrictionCount_5__3 )
            {
              v58 = -_4__this->fields.isDispTrend;
              _4__this->fields.dispNum = v58;
            }
            ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.trendInfoBase;
            if ( v58 < 0 )
            {
              if ( !ta_5__4 )
                goto LABEL_97;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 1, 0);
              ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.restrictionMessageBase;
              if ( !ta_5__4 )
                goto LABEL_97;
              ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)ta_5__4,
                                                     0);
              if ( !ta_5__4 )
                goto LABEL_97;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 0, 0);
            }
            else
            {
              if ( !ta_5__4 )
                goto LABEL_97;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 0, 0);
              ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.restrictionMessageBase;
              if ( !ta_5__4 )
                goto LABEL_97;
              ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)ta_5__4,
                                                     0);
              if ( !ta_5__4 )
                goto LABEL_97;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 1, 0);
              restrictionMessages_5__2 = this->fields._restrictionMessages_5__2;
              if ( !restrictionMessages_5__2 )
                goto LABEL_97;
              dispNum = _4__this->fields.dispNum;
              if ( (unsigned int)dispNum >= LODWORD(restrictionMessages_5__2->max_length) )
                goto LABEL_98;
              FollowerQuestInfomationDraw__SetRestrictionDisp(_4__this, restrictionMessages_5__2->m_Items[dispNum], v59);
            }
            ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.infomationPanel;
            if ( !_4__this->fields.isClick )
              break;
            if ( !ta_5__4 )
              goto LABEL_97;
            ((void (__fastcall *)(UnityEngine_Behaviour_o *, Il2CppClass *, float))ta_5__4->klass[1]._1.element_class)(
              ta_5__4,
              ta_5__4->klass[1]._1.castClass,
              1.0);
            _4__this->fields.isClick = 0;
          }
          if ( !ta_5__4 )
            goto LABEL_97;
          v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ta_5__4, 0);
          v83 = TweenAlpha__Begin(v82, 0.5, 1.0, 0);
          this->fields._ta_5__4 = v83;
          v84 = &this->fields._ta_5__4;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields._ta_5__4,
            (int32_t)v83,
            v85,
            v86,
            v87,
            v88,
            v89,
            v90);
          v93 = (UnityEngine_Object_o *)this->fields._ta_5__4;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v91, v92);
          ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v93, 0, 0);
        }
        while ( ((unsigned __int8)ta_5__4 & 1) == 0 );
        if ( !*v84 )
          goto LABEL_97;
        v94 = UnityEngine_WaitForEndOfFrame_TypeInfo;
        (*v84)->fields.method = 6;
        v95 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(v94);
        UnityEngine_WaitForEndOfFrame___ctor(v95, 0);
        this->fields._wait_5__6 = v95;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__6,
          (int32_t)v95,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101);
      }
    }
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(_4__this, method);
      ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.infomationPanel;
      if ( ta_5__4 )
      {
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, Il2CppClass *, float))ta_5__4->klass[1]._1.element_class)(
          ta_5__4,
          ta_5__4->klass[1]._1.castClass,
          1.0);
        ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.questRestrictionInfo;
        _4__this->fields.isClick = 1;
        if ( ta_5__4 )
        {
          ta_5__4 = (UnityEngine_Behaviour_o *)QuestRestrictionInfo__IsUseOldMaster(
                                                 (QuestRestrictionInfo_o *)ta_5__4,
                                                 0);
          questRestrictionInfo = _4__this->fields.questRestrictionInfo;
          if ( ((unsigned __int8)ta_5__4 & 1) != 0 )
          {
            if ( !questRestrictionInfo )
              goto LABEL_97;
            restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
            if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
            {
              v9 = FollowerQuestInfomationDraw___c_TypeInfo;
              if ( !*(&FollowerQuestInfomationDraw___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(FollowerQuestInfomationDraw___c_TypeInfo, method, v6);
                v9 = FollowerQuestInfomationDraw___c_TypeInfo;
              }
              static_fields = v9->static_fields;
              _9__17_0 = (System_Func_object__bool__o *)static_fields->__9__17_0;
              if ( !_9__17_0 )
              {
                if ( !*(&v9->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v9, method, v6);
                  static_fields = FollowerQuestInfomationDraw___c_TypeInfo->static_fields;
                }
                v12 = (Il2CppObject *)static_fields->__9;
                _9__17_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  _9__17_0,
                  v12,
                  Method_FollowerQuestInfomationDraw___c__DispTotalDropItemCR_b__17_0__,
                  0);
                v13 = FollowerQuestInfomationDraw___c_TypeInfo->static_fields;
                v13->__9__17_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__17_0;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v13->__9__17_0,
                  (int32_t)_9__17_0,
                  v14,
                  v15,
                  v16,
                  v17,
                  v18,
                  v19);
              }
              v20 = System_Linq_Enumerable__Where_object_(
                      restrictionEntityList,
                      (System_Func_TSource__bool__o *)_9__17_0,
                      (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
              ta_5__4 = (UnityEngine_Behaviour_o *)System_Linq_Enumerable__ToArray_object_(
                                                     v20,
                                                     (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
              questRestrictionInfo = _4__this->fields.questRestrictionInfo;
              if ( !questRestrictionInfo )
                goto LABEL_97;
              restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)ta_5__4;
            }
            Messages_50432964 = QuestRestrictionInfo__GetMessages_50432964(
                                  questRestrictionInfo,
                                  (RestrictionEntity_array *)restrictionEntityList,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0);
          }
          else
          {
            if ( !questRestrictionInfo )
              goto LABEL_97;
            Messages_50432964 = QuestRestrictionInfo__GetMessages(
                                  _4__this->fields.questRestrictionInfo,
                                  this->fields.pos,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0,
                                  0);
          }
          this->fields._restrictionMessages_5__2 = Messages_50432964;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields._restrictionMessages_5__2,
            (int32_t)Messages_50432964,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          v35 = this->fields._restrictionMessages_5__2;
          if ( !v35 )
            goto LABEL_97;
          max_length = v35->max_length;
          isDispTrend = _4__this->fields.isDispTrend;
          this->fields._restrictionCount_5__3 = max_length;
          if ( isDispTrend + max_length >= 2 )
          {
            this->fields._ta_5__4 = 0;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._ta_5__4, 0, v29, v30, v31, v32, v33, v34);
            _4__this->fields.dispNum = this->fields._restrictionCount_5__3 - 1;
            goto LABEL_62;
          }
          if ( max_length != 1 )
          {
            if ( isDispTrend )
            {
              ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.trendInfoBase;
              _4__this->fields.dispNum = -1;
              if ( !ta_5__4 )
                goto LABEL_97;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 1, 0);
            }
LABEL_45:
            LOBYTE(ta_5__4) = 0;
            return (char)ta_5__4;
          }
          ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.restrictionMessageBase;
          _4__this->fields.dispNum = 0;
          if ( ta_5__4 )
          {
            ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)ta_5__4,
                                                   0);
            if ( ta_5__4 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 1, 0);
              v39 = this->fields._restrictionMessages_5__2;
              if ( v39 )
              {
                if ( !LODWORD(v39->max_length) )
LABEL_98:
                  sub_2213CE4(ta_5__4);
                FollowerQuestInfomationDraw__SetRestrictionDisp(_4__this, v39->m_Items[0], v38);
                goto LABEL_45;
              }
            }
          }
        }
      }
    }
LABEL_97:
    sub_2213CDC(ta_5__4, method);
  }
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields._startTime_5__5) >= 3.0 )
    {
      if ( _4__this )
      {
        isClick = _4__this->fields.isClick;
        goto LABEL_81;
      }
    }
    else if ( _4__this )
    {
      goto LABEL_80;
    }
    goto LABEL_97;
  }
  if ( _1__state == 3 )
  {
    this->fields.__1__state = -1;
    goto LABEL_56;
  }
  return (char)ta_5__4;
}


Il2CppObject *FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__System_Collections_IEnumerator_Reset(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__System_Collections_IEnumerator_get_Current(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__System_IDisposable_Dispose(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  ;
}


void FollowerQuestInfomationDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596AF4C & 1) == 0 )
  {
    sub_2213A60(&FollowerQuestInfomationDraw___c_TypeInfo);
    byte_596AF4C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(FollowerQuestInfomationDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerQuestInfomationDraw___c_TypeInfo->static_fields->__9 = (struct FollowerQuestInfomationDraw___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)FollowerQuestInfomationDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FollowerQuestInfomationDraw___c___ctor(FollowerQuestInfomationDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool FollowerQuestInfomationDraw___c___DispTotalDropItemCR_b__17_0(
        FollowerQuestInfomationDraw___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.type != 15;
}