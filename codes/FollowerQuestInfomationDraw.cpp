void FollowerQuestInfomationDraw___ctor(FollowerQuestInfomationDraw_o *this, const MethodInfo *method)
{
  this->fields.isClick = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FollowerQuestInfomationDraw__Awake(FollowerQuestInfomationDraw_o *this, const MethodInfo *method)
{
  UIWidget_o *restrictionMessageLabel; // x8

  restrictionMessageLabel = (UIWidget_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageLabel )
    sub_1C6BC60(this, method);
  this->fields.baseMessageWidth = restrictionMessageLabel->fields.mWidth;
  UIWidget__set_width(restrictionMessageLabel, 1000, 0);
}


System_Collections_IEnumerator_o *FollowerQuestInfomationDraw__DispTotalDropItemCR(
        FollowerQuestInfomationDraw_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4CB0D52 & 1) == 0 )
  {
    sub_1C6BA08(&FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_TypeInfo);
    byte_4CB0D52 = 1;
  }
  v5 = sub_1C6BC54(FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C6B9AC(v5 + 32, this);
  *(_DWORD *)(v5 + 40) = pos;
  return (System_Collections_IEnumerator_o *)v5;
}


void FollowerQuestInfomationDraw__OnClick(FollowerQuestInfomationDraw_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4CB0D56 & 1) == 0 )
  {
    sub_1C6BA08(&Method_FollowerQuestInfomationDraw_OnClick__);
    byte_4CB0D56 = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    v3 = Method_FollowerQuestInfomationDraw_OnClick__;
    if ( (*((_BYTE *)Method_FollowerQuestInfomationDraw_OnClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_FollowerQuestInfomationDraw_OnClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  }
}


void FollowerQuestInfomationDraw__SetInfomation(
        FollowerQuestInfomationDraw_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t pos,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  System_Collections_IEnumerator_o *dispCRW; // x1
  UnityEngine_GameObject_o *trendInfoBase; // x0
  const MethodInfo *v11; // x2
  bool v12; // w0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  struct System_Collections_IEnumerator_o *v16; // x0

  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C6B9AC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  dispCRW = this->fields.dispCRW;
  if ( dispCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, dispCRW, 0);
    this->fields.dispCRW = 0;
    sub_1C6B9AC(&this->fields.dispCRW, 0);
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
  v12 = FollowerQuestInfomationDraw__SetTrendDisp(this, classIds, v11);
  this->fields.isDispTrend = v12;
  if ( !v12 && (!*p_questRestrictionInfo || QuestRestrictionInfo__IsEmpty(*p_questRestrictionInfo, 0)) )
  {
    FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(this, v13);
    trendInfoBase = (UnityEngine_GameObject_o *)this->fields.infomationPanel;
    if ( trendInfoBase )
    {
      ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))trendInfoBase->klass[1]._1.element_class)(
        trendInfoBase,
        trendInfoBase->klass[1]._1.castClass,
        0.0);
      FollowerQuestInfomationDraw__SetRestrictionDisp(this, 0, v15);
      this->fields.isClick = 1;
      return;
    }
LABEL_12:
    sub_1C6BC60(trendInfoBase, dispCRW);
  }
  v16 = FollowerQuestInfomationDraw__DispTotalDropItemCR(this, pos, v14);
  this->fields.dispCRW = v16;
  sub_1C6B9AC(&this->fields.dispCRW, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, this->fields.dispCRW, 0);
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

  if ( (byte_4CB0D55 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB0D55 = 1;
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
    sub_1C6BC60(restrictionMessageBase, v5);
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
  v13.fields.x = v10 / v9;
  v13.fields.y = 1.0;
  v13.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(restrictionMessageBase, v13, 0);
  return !IsNullOrEmpty;
}


bool FollowerQuestInfomationDraw__SetTrendDisp(
        FollowerQuestInfomationDraw_o *this,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  ServantClassIconComponent_o *Instance; // x0
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestEntity_o *Entity; // x22
  struct QuestRestrictionInfo_o *v9; // x8
  QuestPhaseEntity_o *v10; // x21
  char v11; // w19
  System_String_o *RecommendLv_42707680; // x23
  bool IsNullOrEmpty; // w22
  Il2CppObject *Component_object; // x24
  float v15; // s0
  float v16; // s8
  struct UILabel_o *levelInfoLabel; // x8
  UnityEngine_Object_o *v18; // x23
  int mWidth; // s8
  float monitor_low; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct ServantClassIconComponent_array *classIconList; // x8
  unsigned __int64 v23; // x21
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v25; // x9
  struct System_Int32_array *v26; // x8
  struct ServantClassIconComponent_array *v27; // x8
  unsigned __int64 v28; // x20
  unsigned __int64 v29; // x9
  struct System_Int32_array *v30; // x9
  unsigned __int64 v31; // x10
  struct QuestRestrictionInfo_o *v33; // x8

  if ( (byte_4CB0D54 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB0D54 = 1;
  }
  if ( !this->fields.questRestrictionInfo )
  {
    v10 = 0;
LABEL_14:
    RecommendLv_42707680 = 0;
    goto LABEL_15;
  }
  Instance = (ServantClassIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (ServantClassIconComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_85;
  if ( !Instance )
    goto LABEL_85;
  Entity = (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              questRestrictionInfo->fields.questId,
                              (const MethodInfo_33F90DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  Instance = (ServantClassIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (ServantClassIconComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v9 = this->fields.questRestrictionInfo;
  if ( !v9 || !Instance )
    goto LABEL_85;
  v10 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, v9->fields.questId, v9->fields.questPhase, 0);
  if ( !Entity )
    goto LABEL_14;
  if ( QuestEntity__GetTypeFlag(Entity, 0) != 128 )
  {
    v33 = this->fields.questRestrictionInfo;
    if ( v33 )
      RecommendLv_42707680 = QuestEntity__getRecommendLv_42707680(Entity, v33->fields.questPhase, 0);
    else
      RecommendLv_42707680 = Entity->fields.recommendLv;
LABEL_15:
    IsNullOrEmpty = System_String__IsNullOrEmpty(RecommendLv_42707680, 0);
    if ( IsNullOrEmpty )
    {
      Instance = (ServantClassIconComponent_o *)this->fields.levelInfoBase;
      if ( !Instance )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      Instance = (ServantClassIconComponent_o *)this->fields.levelInfoLabel;
      if ( !Instance )
        goto LABEL_85;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( !classIds )
        goto LABEL_60;
LABEL_45:
      if ( classIds->max_length )
      {
        Instance = (ServantClassIconComponent_o *)this->fields.classInfoBase;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
          classIconList = this->fields.classIconList;
          if ( classIconList )
          {
            v23 = 0;
            while ( 1 )
            {
              max_length_low = LODWORD(classIconList->max_length);
              if ( (__int64)v23 >= (int)max_length_low )
                goto LABEL_78;
              if ( v23 >= max_length_low )
                goto LABEL_86;
              v25 = LODWORD(classIds->max_length);
              Instance = classIconList->m_Items[v23];
              if ( (__int64)v23 >= (int)v25 )
                goto LABEL_56;
              if ( v23 >= v25 )
LABEL_86:
                sub_1C6BC68(Instance);
              v6 = (unsigned int)classIds->m_Items[v23];
              if ( (int)v6 < 1 )
              {
LABEL_56:
                if ( !Instance )
                  goto LABEL_85;
                ServantClassIconComponent__Clear(Instance, 0);
              }
              else
              {
                if ( !Instance )
                  goto LABEL_85;
                ServantClassIconComponent__Set(Instance, v6, 0, 0);
              }
              classIconList = this->fields.classIconList;
              ++v23;
              if ( !classIconList )
                goto LABEL_85;
            }
          }
        }
        goto LABEL_85;
      }
LABEL_60:
      if ( v10 && (v26 = v10->fields.classIds) != 0 && v26->max_length )
      {
        Instance = (ServantClassIconComponent_o *)this->fields.classInfoBase;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
          v27 = this->fields.classIconList;
          if ( v27 )
          {
            v28 = 0;
            while ( 1 )
            {
              v29 = LODWORD(v27->max_length);
              if ( (__int64)v28 >= (int)v29 )
                break;
              if ( v28 >= v29 )
                goto LABEL_86;
              v30 = v10->fields.classIds;
              if ( v30 )
              {
                v31 = LODWORD(v30->max_length);
                Instance = v27->m_Items[v28];
                if ( (__int64)v28 >= (int)v31 )
                  goto LABEL_74;
                if ( v28 >= v31 )
                  goto LABEL_86;
                v6 = (unsigned int)v30->m_Items[v28];
                if ( (int)v6 < 1 )
                {
LABEL_74:
                  if ( !Instance )
                    goto LABEL_85;
                  ServantClassIconComponent__Clear(Instance, 0);
                }
                else
                {
                  if ( !Instance )
                    goto LABEL_85;
                  ServantClassIconComponent__Set(Instance, v6, 0, 0);
                }
                v27 = this->fields.classIconList;
                ++v28;
                if ( v27 )
                  continue;
              }
              goto LABEL_85;
            }
LABEL_78:
            v11 = 1;
            return v11 & 1;
          }
        }
      }
      else
      {
        Instance = (ServantClassIconComponent_o *)this->fields.classInfoBase;
        if ( Instance )
        {
          v11 = !IsNullOrEmpty;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          return v11 & 1;
        }
      }
      goto LABEL_85;
    }
    Instance = (ServantClassIconComponent_o *)this->fields.levelInfoSprite;
    if ( !Instance )
      goto LABEL_85;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)Instance,
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (ServantClassIconComponent_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0,
                                                0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_85;
      CondensedScaleSprite__Init((CondensedScaleSprite_o *)Component_object, 0);
    }
    Instance = (ServantClassIconComponent_o *)this->fields.levelInfoBase;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = (ServantClassIconComponent_o *)this->fields.levelInfoLabel;
      if ( Instance )
      {
        UILabel__set_text((UILabel_o *)Instance, RecommendLv_42707680, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (ServantClassIconComponent_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Component_object,
                                                    0,
                                                    0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_85;
          v15 = CondensedScaleSprite__GetAfterAdjustWidth((CondensedScaleSprite_o *)Component_object, 0);
          Instance = (ServantClassIconComponent_o *)this->fields.levelInfoSprite;
          if ( !Instance )
            goto LABEL_85;
          v16 = (float)(SLODWORD(Instance[2].fields.nameSprite) / 2) + (float)(v15 * -0.5);
LABEL_44:
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          GameObjectExtensions__SetLocalPositionX(gameObject, v16, 0);
          if ( !classIds )
            goto LABEL_60;
          goto LABEL_45;
        }
        Instance = (ServantClassIconComponent_o *)this->fields.levelInfoLabel;
        if ( Instance )
        {
          Instance = (ServantClassIconComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)Instance,
                                                      (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
          levelInfoLabel = this->fields.levelInfoLabel;
          if ( levelInfoLabel )
          {
            v18 = (UnityEngine_Object_o *)Instance;
            mWidth = levelInfoLabel->fields.mWidth;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            monitor_low = (float)mWidth;
            Instance = (ServantClassIconComponent_o *)UnityEngine_Object__op_Inequality(v18, 0, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v18 )
                goto LABEL_85;
              if ( monitor_low > (float)SLODWORD(v18[2].monitor) )
                monitor_low = (float)SLODWORD(v18[2].monitor);
            }
            Instance = (ServantClassIconComponent_o *)this->fields.levelInfoSprite;
            if ( Instance )
            {
              v16 = monitor_low * -0.5;
              goto LABEL_44;
            }
          }
        }
      }
    }
LABEL_85:
    sub_1C6BC60(Instance, v6);
  }
  v11 = 0;
  return v11 & 1;
}


void FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(
        FollowerQuestInfomationDraw_o *this,
        const MethodInfo *method)
{
  struct UIPanel_o *infomationPanel; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4CB0D53 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB0D53 = 1;
  }
  infomationPanel = this->fields.infomationPanel;
  if ( !infomationPanel )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)infomationPanel,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C6BC60(infomationPanel, method);
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
  FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *v2; // x19
  struct FollowerQuestInfomationDraw_o *_4__this; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *restrictionEntityList; // x21
  FollowerQuestInfomationDraw___c_c *v6; // x0
  System_Func_object__bool__o *_9__17_0; // x22
  Il2CppObject *v8; // x23
  struct FollowerQuestInfomationDraw___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_String_array *Messages_43664272; // x0
  struct System_String_array *restrictionMessages_5__2; // x8
  int32_t max_length; // w9
  const MethodInfo *v14; // x2
  struct System_String_array *v15; // x8
  bool result; // w0
  int v17; // w8
  const MethodInfo *v18; // x2
  struct System_String_array *v19; // x8
  __int64 dispNum; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  TweenAlpha_o *v22; // x0
  struct TweenAlpha_o **p_ta_5__4; // x21
  UnityEngine_Object_o *ta_5__4; // x22
  UnityEngine_WaitForEndOfFrame_o *v25; // x21
  UnityEngine_GameObject_o *v26; // x0
  TweenAlpha_o *v27; // x0
  struct TweenAlpha_o **v28; // x21
  UnityEngine_Object_o *v29; // x22
  UnityEngine_WaitForEndOfFrame_o *v30; // x21
  UnityEngine_WaitForEndOfFrame_o *v31; // x20
  Il2CppObject **v32; // x19
  int v33; // w8
  Il2CppObject *wait_5__6; // x1
  Il2CppObject **p__2__current; // x19
  Il2CppObject *v36; // x1

  v2 = this;
  if ( (byte_4CB0D58 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C6BA08(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_FollowerQuestInfomationDraw___c__DispTotalDropItemCR_b__17_0__);
    sub_1C6BA08(&FollowerQuestInfomationDraw___c_TypeInfo);
    this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)sub_1C6BA08(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4CB0D58 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_87;
      FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(_4__this, method);
      this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.infomationPanel;
      if ( !this )
        goto LABEL_87;
      ((void (__fastcall *)(FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
        this,
        this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
        1.0);
      this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.questRestrictionInfo;
      _4__this->fields.isClick = 1;
      if ( !this )
        goto LABEL_87;
      this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)QuestRestrictionInfo__IsUseOldMaster(
                                                                           (QuestRestrictionInfo_o *)this,
                                                                           0);
      questRestrictionInfo = _4__this->fields.questRestrictionInfo;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !questRestrictionInfo )
          goto LABEL_87;
        restrictionEntityList = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)questRestrictionInfo->fields.restrictionEntityList;
        if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
        {
          v6 = FollowerQuestInfomationDraw___c_TypeInfo;
          if ( !FollowerQuestInfomationDraw___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerQuestInfomationDraw___c_TypeInfo);
            v6 = FollowerQuestInfomationDraw___c_TypeInfo;
          }
          _9__17_0 = (System_Func_object__bool__o *)v6->static_fields->__9__17_0;
          if ( !_9__17_0 )
          {
            if ( !v6->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v6);
              v6 = FollowerQuestInfomationDraw___c_TypeInfo;
            }
            v8 = (Il2CppObject *)v6->static_fields->__9;
            _9__17_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_RestrictionEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__17_0,
              v8,
              Method_FollowerQuestInfomationDraw___c__DispTotalDropItemCR_b__17_0__,
              0);
            static_fields = FollowerQuestInfomationDraw___c_TypeInfo->static_fields;
            static_fields->__9__17_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__17_0;
            sub_1C6B9AC(&static_fields->__9__17_0, _9__17_0);
          }
          v10 = System_Linq_Enumerable__Where_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)restrictionEntityList,
                  (System_Func_TSource__bool__o *)_9__17_0,
                  (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)System_Linq_Enumerable__ToArray_object_(
                                                                               v10,
                                                                               (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
          questRestrictionInfo = _4__this->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_87;
          restrictionEntityList = this;
        }
        Messages_43664272 = QuestRestrictionInfo__GetMessages_43664272(
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
          goto LABEL_87;
        Messages_43664272 = QuestRestrictionInfo__GetMessages(
                              _4__this->fields.questRestrictionInfo,
                              v2->fields.pos,
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
      v2->fields._restrictionMessages_5__2 = Messages_43664272;
      this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)sub_1C6B9AC(
                                                                           &v2->fields._restrictionMessages_5__2,
                                                                           Messages_43664272);
      restrictionMessages_5__2 = v2->fields._restrictionMessages_5__2;
      if ( !restrictionMessages_5__2 )
        goto LABEL_87;
      max_length = restrictionMessages_5__2->max_length;
      v2->fields._restrictionCount_5__3 = max_length;
      if ( _4__this->fields.isDispTrend + max_length < 2 )
      {
        if ( max_length != 1 )
        {
          if ( _4__this->fields.isDispTrend )
          {
            this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.trendInfoBase;
            _4__this->fields.dispNum = -1;
            if ( !this )
              goto LABEL_87;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          }
          return 0;
        }
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.restrictionMessageBase;
        _4__this->fields.dispNum = 0;
        if ( this )
        {
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            v15 = v2->fields._restrictionMessages_5__2;
            if ( v15 )
            {
              if ( !LODWORD(v15->max_length) )
LABEL_88:
                sub_1C6BC68(this);
              FollowerQuestInfomationDraw__SetRestrictionDisp(_4__this, v15->m_Items[0], v14);
              return 0;
            }
          }
        }
LABEL_87:
        sub_1C6BC60(this, method);
      }
      v2->fields._ta_5__4 = 0;
      this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)sub_1C6B9AC(&v2->fields._ta_5__4, 0);
      _4__this->fields.dispNum = v2->fields._restrictionCount_5__3 - 1;
      break;
    case 1:
      v2->fields.__1__state = -1;
      goto LABEL_63;
    case 2:
      v2->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - v2->fields._startTime_5__5) >= 3.0 )
      {
        if ( _4__this )
          goto LABEL_71;
      }
      else if ( _4__this )
      {
        goto LABEL_70;
      }
      goto LABEL_87;
    case 3:
      v2->fields.__1__state = -1;
      goto LABEL_78;
    default:
      return 0;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        if ( !_4__this )
          goto LABEL_87;
        FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(_4__this, method);
        v17 = _4__this->fields.dispNum + 1;
        _4__this->fields.dispNum = v17;
        if ( v17 >= v2->fields._restrictionCount_5__3 )
        {
          v17 = (unsigned __int8)_4__this->fields.isDispTrend << 31 >> 31;
          _4__this->fields.dispNum = v17;
        }
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.trendInfoBase;
        if ( !this )
          goto LABEL_87;
        if ( v17 < 0 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.restrictionMessageBase;
          if ( !this )
            goto LABEL_87;
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0);
          if ( !this )
            goto LABEL_87;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.restrictionMessageBase;
          if ( !this )
            goto LABEL_87;
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0);
          if ( !this )
            goto LABEL_87;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          v19 = v2->fields._restrictionMessages_5__2;
          if ( !v19 )
            goto LABEL_87;
          dispNum = _4__this->fields.dispNum;
          if ( (unsigned int)dispNum >= LODWORD(v19->max_length) )
            goto LABEL_88;
          FollowerQuestInfomationDraw__SetRestrictionDisp(_4__this, v19->m_Items[dispNum], v18);
        }
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.infomationPanel;
        if ( !this )
          goto LABEL_87;
        if ( _4__this->fields.isClick )
        {
          ((void (__fastcall *)(FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
            this,
            this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
            1.0);
          _4__this->fields.isClick = 0;
          break;
        }
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v22 = TweenAlpha__Begin(gameObject, 0.5, 1.0, 0);
        v2->fields._ta_5__4 = v22;
        p_ta_5__4 = &v2->fields._ta_5__4;
        sub_1C6B9AC(&v2->fields._ta_5__4, v22);
        ta_5__4 = (UnityEngine_Object_o *)v2->fields._ta_5__4;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                             ta_5__4,
                                                                             0,
                                                                             0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !*p_ta_5__4 )
            goto LABEL_87;
          (*p_ta_5__4)->fields.method = 6;
          v25 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v25, 0);
          v2->fields._wait_5__6 = v25;
          sub_1C6B9AC(&v2->fields._wait_5__6, v25);
LABEL_63:
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)v2->fields._ta_5__4;
          if ( !this )
            goto LABEL_87;
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Behaviour__get_enabled(
                                                                               (UnityEngine_Behaviour_o *)this,
                                                                               0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !_4__this )
              goto LABEL_87;
            if ( !_4__this->fields.isClick )
            {
              wait_5__6 = (Il2CppObject *)v2->fields._wait_5__6;
              v2->fields.__2__current = wait_5__6;
              p__2__current = &v2->fields.__2__current;
              sub_1C6B9AC(p__2__current, wait_5__6);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
          v2->fields._wait_5__6 = 0;
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)sub_1C6B9AC(&v2->fields._wait_5__6, 0);
          if ( !_4__this )
            goto LABEL_87;
        }
      }
      while ( _4__this->fields.isClick );
      v2->fields._startTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0);
LABEL_70:
      if ( !_4__this->fields.isClick )
      {
        v31 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v31, 0);
        v2->fields.__2__current = (Il2CppObject *)v31;
        v32 = &v2->fields.__2__current;
        sub_1C6B9AC(v32, v31);
        v33 = 2;
        goto LABEL_86;
      }
LABEL_71:
      if ( !_4__this->fields.isClick )
      {
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.infomationPanel;
        if ( !this )
          goto LABEL_87;
        v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v27 = TweenAlpha__Begin(v26, 0.5, 0.0, 0);
        v2->fields._ta_5__4 = v27;
        v28 = &v2->fields._ta_5__4;
        sub_1C6B9AC(&v2->fields._ta_5__4, v27);
        v29 = (UnityEngine_Object_o *)v2->fields._ta_5__4;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Object__op_Inequality(v29, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
    }
    if ( !*v28 )
      goto LABEL_87;
    (*v28)->fields.method = 6;
    v30 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v30, 0);
    v2->fields._wait_5__6 = v30;
    sub_1C6B9AC(&v2->fields._wait_5__6, v30);
LABEL_78:
    this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)v2->fields._ta_5__4;
    if ( !this )
      goto LABEL_87;
    this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Behaviour__get_enabled(
                                                                         (UnityEngine_Behaviour_o *)this,
                                                                         0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_87;
      if ( !_4__this->fields.isClick )
        break;
    }
    v2->fields._wait_5__6 = 0;
    this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)sub_1C6B9AC(&v2->fields._wait_5__6, 0);
  }
  v36 = (Il2CppObject *)v2->fields._wait_5__6;
  v2->fields.__2__current = v36;
  v32 = &v2->fields.__2__current;
  sub_1C6B9AC(v32, v36);
  v33 = 3;
LABEL_86:
  *((_DWORD *)v32 - 2) = v33;
  return 1;
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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

  if ( (byte_4CB0D57 & 1) == 0 )
  {
    sub_1C6BA08(&FollowerQuestInfomationDraw___c_TypeInfo);
    byte_4CB0D57 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(FollowerQuestInfomationDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerQuestInfomationDraw___c_TypeInfo->static_fields->__9 = (struct FollowerQuestInfomationDraw___c_o *)v1;
  sub_1C6B9AC(FollowerQuestInfomationDraw___c_TypeInfo->static_fields, v1);
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
    sub_1C6BC60(this, 0);
  return entity->fields.type != 15;
}