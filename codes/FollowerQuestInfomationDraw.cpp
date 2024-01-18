void __fastcall FollowerQuestInfomationDraw___ctor(FollowerQuestInfomationDraw_o *this, const MethodInfo *method)
{
  this->fields.isClick = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FollowerQuestInfomationDraw__Awake(FollowerQuestInfomationDraw_o *this, const MethodInfo *method)
{
  UIWidget_o *restrictionMessageLabel; // x8

  restrictionMessageLabel = (UIWidget_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageLabel )
    sub_B2C434(this, method);
  this->fields.baseMessageWidth = restrictionMessageLabel->fields.mWidth;
  UIWidget__set_width(restrictionMessageLabel, 1000, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall FollowerQuestInfomationDraw__DispTotalDropItemCR(
        FollowerQuestInfomationDraw_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_41869E9 & 1) == 0 )
  {
    sub_B2C35C(&FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_TypeInfo, *(_QWORD *)&pos);
    byte_41869E9 = 1;
  }
  v5 = sub_B2C42C(FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_TypeInfo);
  FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17___ctor(
    (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 40) = pos;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall FollowerQuestInfomationDraw__OnClick(FollowerQuestInfomationDraw_o *this, const MethodInfo *method)
{
  if ( (byte_41869ED & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41869ED = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerQuestInfomationDraw__SetInfomation(
        FollowerQuestInfomationDraw_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t pos,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  System_Collections_IEnumerator_o *dispCRW; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_GameObject_o *trendInfoBase; // x0
  const MethodInfo *v20; // x2
  bool v21; // w0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  struct System_Collections_IEnumerator_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    *(System_String_array ***)&pos,
    (System_String_array **)classIds,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  dispCRW = this->fields.dispCRW;
  if ( dispCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, dispCRW, 0LL);
    this->fields.dispCRW = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.dispCRW, 0LL, v13, v14, v15, v16, v17, v18);
  }
  trendInfoBase = this->fields.trendInfoBase;
  if ( !trendInfoBase )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(trendInfoBase, 0, 0LL);
  trendInfoBase = (UnityEngine_GameObject_o *)this->fields.restrictionMessageBase;
  if ( !trendInfoBase )
    goto LABEL_12;
  trendInfoBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)trendInfoBase, 0LL);
  if ( !trendInfoBase )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(trendInfoBase, 0, 0LL);
  v21 = FollowerQuestInfomationDraw__SetTrendDisp(this, classIds, v20);
  this->fields.isDispTrend = v21;
  if ( !v21 && (!*p_questRestrictionInfo || QuestRestrictionInfo__IsEmpty(*p_questRestrictionInfo, 0LL)) )
  {
    FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(this, v22);
    trendInfoBase = (UnityEngine_GameObject_o *)this->fields.infomationPanel;
    if ( trendInfoBase )
    {
      ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))trendInfoBase->klass[1]._1.castClass)(
        trendInfoBase,
        trendInfoBase->klass[1]._1.declaringType,
        0.0);
      FollowerQuestInfomationDraw__SetRestrictionDisp(this, 0LL, v24);
      this->fields.isClick = 1;
      return;
    }
LABEL_12:
    sub_B2C434(trendInfoBase, dispCRW);
  }
  v25 = FollowerQuestInfomationDraw__DispTotalDropItemCR(this, pos, v23);
  this->fields.dispCRW = v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dispCRW,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, this->fields.dispCRW, 0LL);
}


bool __fastcall FollowerQuestInfomationDraw__SetRestrictionDisp(
        FollowerQuestInfomationDraw_o *this,
        System_String_o *restrictionMessage,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *restrictionMessageBase; // x0
  int32_t baseMessageWidth; // s8
  float v9; // s0
  float v10; // s1
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41869EC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, restrictionMessage);
    byte_41869EC = 1;
  }
  if ( System_String__IsNullOrEmpty(restrictionMessage, 0LL) )
  {
    restrictionMessageBase = this->fields.restrictionMessageBase;
    if ( restrictionMessageBase )
    {
      v11.fields.x = 1.0;
      v11.fields.y = 1.0;
      v11.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(restrictionMessageBase, v11, 0LL);
      restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
      if ( restrictionMessageBase )
      {
        UILabel__set_text((UILabel_o *)restrictionMessageBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        return 0;
      }
    }
LABEL_13:
    sub_B2C434(restrictionMessageBase, v5);
  }
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_13;
  baseMessageWidth = this->fields.baseMessageWidth;
  UILabel__set_text((UILabel_o *)restrictionMessageBase, restrictionMessage, 0LL);
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_13;
  LODWORD(v9) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)restrictionMessageBase, 0LL);
  restrictionMessageBase = this->fields.restrictionMessageBase;
  if ( !restrictionMessageBase )
    goto LABEL_13;
  v10 = (float)this->fields.baseMessageWidth;
  if ( v9 <= v10 )
    v9 = (float)baseMessageWidth;
  v12.fields.x = v10 / v9;
  v12.fields.y = 1.0;
  v12.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(restrictionMessageBase, v12, 0LL);
  return 1;
}


bool __fastcall FollowerQuestInfomationDraw__SetTrendDisp(
        FollowerQuestInfomationDraw_o *this,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ServantClassIconComponent_o *Instance; // x0
  __int64 v13; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_String_o *Entity; // x22
  struct QuestRestrictionInfo_o *v16; // x8
  QuestPhaseEntity_o *v17; // x21
  bool v18; // w22
  struct QuestRestrictionInfo_o *v19; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x23
  float v21; // s0
  float v22; // s8
  struct UILabel_o *levelInfoLabel; // x8
  UnityEngine_Object_o *v24; // x22
  int mWidth; // s8
  float m_CachedPtr; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct ServantClassIconComponent_array *classIconList; // x8
  unsigned __int64 v29; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v31; // x9
  struct System_Int32_array *v32; // x8
  struct ServantClassIconComponent_array *v33; // x8
  unsigned __int64 v34; // x20
  unsigned __int64 v35; // x9
  struct System_Int32_array *v36; // x9
  unsigned __int64 v37; // x10
  __int64 v39; // x0

  if ( (byte_41869EB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, classIds);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_41869EB = 1;
  }
  if ( !this->fields.questRestrictionInfo )
  {
    v17 = 0LL;
    Entity = 0LL;
    goto LABEL_17;
  }
  Instance = (ServantClassIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (ServantClassIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_87;
  if ( !Instance )
    goto LABEL_87;
  Entity = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                questRestrictionInfo->fields.questId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  Instance = (ServantClassIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (ServantClassIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v16 = this->fields.questRestrictionInfo;
  if ( !v16 || !Instance )
    goto LABEL_87;
  v17 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, v16->fields.questId, v16->fields.questPhase, 0LL);
  if ( !Entity )
  {
LABEL_17:
    if ( System_String__IsNullOrEmpty(Entity, 0LL) )
    {
      Instance = (ServantClassIconComponent_o *)this->fields.levelInfoBase;
      if ( !Instance )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      Instance = (ServantClassIconComponent_o *)this->fields.levelInfoLabel;
      if ( !Instance )
        goto LABEL_87;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v18 = 0;
      if ( !classIds )
        goto LABEL_65;
LABEL_50:
      if ( *(_QWORD *)&classIds->max_length )
      {
        Instance = (ServantClassIconComponent_o *)this->fields.classInfoBase;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          classIconList = this->fields.classIconList;
          if ( classIconList )
          {
            v29 = 0LL;
            while ( 1 )
            {
              max_length = classIconList->max_length;
              if ( (__int64)v29 >= (int)max_length )
                return 1;
              if ( v29 >= max_length )
                goto LABEL_88;
              v31 = classIds->max_length;
              Instance = classIconList->m_Items[v29];
              if ( (__int64)v29 >= (int)v31 )
                goto LABEL_61;
              if ( v29 >= v31 )
              {
LABEL_88:
                v39 = sub_B2C460(Instance);
                sub_B2C400(v39, 0LL);
              }
              v13 = (unsigned int)classIds->m_Items[v29 + 1];
              if ( (int)v13 < 1 )
              {
LABEL_61:
                if ( !Instance )
                  goto LABEL_87;
                ServantClassIconComponent__Clear(Instance, 0LL);
              }
              else
              {
                if ( !Instance )
                  goto LABEL_87;
                ServantClassIconComponent__Set(Instance, v13, 0LL);
              }
              classIconList = this->fields.classIconList;
              ++v29;
              if ( !classIconList )
                goto LABEL_87;
            }
          }
        }
        goto LABEL_87;
      }
LABEL_65:
      if ( v17 && (v32 = v17->fields.classIds) != 0LL && *(_QWORD *)&v32->max_length )
      {
        Instance = (ServantClassIconComponent_o *)this->fields.classInfoBase;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          v33 = this->fields.classIconList;
          if ( v33 )
          {
            v34 = 0LL;
            while ( 1 )
            {
              v35 = v33->max_length;
              if ( (__int64)v34 >= (int)v35 )
                return 1;
              if ( v34 >= v35 )
                goto LABEL_88;
              v36 = v17->fields.classIds;
              if ( v36 )
              {
                v37 = v36->max_length;
                Instance = v33->m_Items[v34];
                if ( (__int64)v34 >= (int)v37 )
                  goto LABEL_79;
                if ( v34 >= v37 )
                  goto LABEL_88;
                v13 = (unsigned int)v36->m_Items[v34 + 1];
                if ( (int)v13 < 1 )
                {
LABEL_79:
                  if ( !Instance )
                    goto LABEL_87;
                  ServantClassIconComponent__Clear(Instance, 0LL);
                }
                else
                {
                  if ( !Instance )
                    goto LABEL_87;
                  ServantClassIconComponent__Set(Instance, v13, 0LL);
                }
                v33 = this->fields.classIconList;
                ++v34;
                if ( v33 )
                  continue;
              }
              goto LABEL_87;
            }
          }
        }
      }
      else
      {
        Instance = (ServantClassIconComponent_o *)this->fields.classInfoBase;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          return v18;
        }
      }
      goto LABEL_87;
    }
    Instance = (ServantClassIconComponent_o *)this->fields.levelInfoSprite;
    if ( !Instance )
      goto LABEL_87;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)Instance,
                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (ServantClassIconComponent_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_87;
      CondensedScaleSprite__Init((CondensedScaleSprite_o *)Component_WebViewObject, 0LL);
    }
    Instance = (ServantClassIconComponent_o *)this->fields.levelInfoBase;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (ServantClassIconComponent_o *)this->fields.levelInfoLabel;
      if ( Instance )
      {
        UILabel__set_text((UILabel_o *)Instance, Entity, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = (ServantClassIconComponent_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !Component_WebViewObject )
            goto LABEL_87;
          v21 = CondensedScaleSprite__GetAfterAdjustWidth((CondensedScaleSprite_o *)Component_WebViewObject, 0LL);
          Instance = (ServantClassIconComponent_o *)this->fields.levelInfoSprite;
          if ( !Instance )
            goto LABEL_87;
          v22 = (float)(Instance[3].fields.m_CachedPtr / 2) + (float)(v21 * -0.5);
LABEL_49:
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          GameObjectExtensions__SetLocalPositionX(gameObject, v22, 0LL);
          v18 = 1;
          if ( !classIds )
            goto LABEL_65;
          goto LABEL_50;
        }
        Instance = (ServantClassIconComponent_o *)this->fields.levelInfoLabel;
        if ( Instance )
        {
          Instance = (ServantClassIconComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)Instance,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
          levelInfoLabel = this->fields.levelInfoLabel;
          if ( levelInfoLabel )
          {
            v24 = (UnityEngine_Object_o *)Instance;
            mWidth = levelInfoLabel->fields.mWidth;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            m_CachedPtr = (float)mWidth;
            Instance = (ServantClassIconComponent_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v24 )
                goto LABEL_87;
              if ( m_CachedPtr > (float)v24[1].fields.m_CachedPtr )
                m_CachedPtr = (float)v24[1].fields.m_CachedPtr;
            }
            Instance = (ServantClassIconComponent_o *)this->fields.levelInfoSprite;
            if ( Instance )
            {
              v22 = m_CachedPtr * -0.5;
              goto LABEL_49;
            }
          }
        }
      }
    }
LABEL_87:
    sub_B2C434(Instance, v13);
  }
  if ( QuestEntity__GetTypeFlag((QuestEntity_o *)Entity, 0LL) != 128 )
  {
    v19 = this->fields.questRestrictionInfo;
    if ( v19 )
      Entity = QuestEntity__getRecommendLv_23878512((QuestEntity_o *)Entity, v19->fields.questPhase, 0LL);
    else
      Entity = (System_String_o *)Entity[5].monitor;
    goto LABEL_17;
  }
  return 0;
}


void __fastcall FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(
        FollowerQuestInfomationDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIPanel_o *infomationPanel; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x19

  if ( (byte_41869EA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41869EA = 1;
  }
  infomationPanel = this->fields.infomationPanel;
  if ( !infomationPanel )
    goto LABEL_12;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)infomationPanel,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  infomationPanel = (struct UIPanel_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)infomationPanel & 1) != 0 )
  {
    if ( Component_WebViewObject )
    {
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0LL) )
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
      return;
    }
LABEL_12:
    sub_B2C434(infomationPanel, method);
  }
}


void __fastcall FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17___ctor(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__MoveNext(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct FollowerQuestInfomationDraw_o *_4__this; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *restrictionEntityList; // x21
  FollowerQuestInfomationDraw___c_c *v13; // x0
  struct FollowerQuestInfomationDraw___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__17_0; // x22
  Il2CppObject *v16; // x23
  struct FollowerQuestInfomationDraw___c_StaticFields *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_String_array *Messages_31222988; // x1
  struct System_String_array **p_restrictionMessages_5__2; // x21
  FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o **p_ta_5__4; // x21
  FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o **v22; // x21
  int32_t max_length; // w9
  struct System_String_array *v24; // x8
  bool result; // w0
  int v26; // w8
  struct System_String_array *restrictionMessages_5__2; // x8
  __int64 dispNum; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  TweenAlpha_o *v30; // x0
  UnityEngine_Object_o *ta_5__4; // x22
  UnityEngine_WaitForEndOfFrame_o *v32; // x22
  UnityEngine_GameObject_o *v33; // x0
  TweenAlpha_o *v34; // x0
  UnityEngine_Object_o *v35; // x22
  UnityEngine_WaitForEndOfFrame_o *v36; // x22
  UnityEngine_WaitForEndOfFrame_o *v37; // x20
  Il2CppObject **p__2__current; // x19
  Il2CppObject *wait_5__6; // x1
  Il2CppObject *v40; // x1
  __int64 v41; // x0

  v2 = this;
  if ( (byte_41841D0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v3);
    sub_B2C35C(&Method_System_Func_RestrictionEntity__bool___ctor__, v4);
    sub_B2C35C(&System_Func_RestrictionEntity__bool__TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_FollowerQuestInfomationDraw___c__DispTotalDropItemCR_b__17_0__, v7);
    sub_B2C35C(&FollowerQuestInfomationDraw___c_TypeInfo, v8);
    this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)sub_B2C35C(
                                                                         &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                         v9);
    byte_41841D0 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_91;
      FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(_4__this, 0LL);
      this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.infomationPanel;
      if ( !this )
        goto LABEL_91;
      ((void (__fastcall *)(FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
        this,
        this->klass[1]._1.image,
        1.0);
      this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.questRestrictionInfo;
      _4__this->fields.isClick = 1;
      if ( !this )
        goto LABEL_91;
      this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)QuestRestrictionInfo__IsUseOldMaster(
                                                                           (QuestRestrictionInfo_o *)this,
                                                                           0LL);
      questRestrictionInfo = _4__this->fields.questRestrictionInfo;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !questRestrictionInfo )
          goto LABEL_91;
        restrictionEntityList = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)questRestrictionInfo->fields.restrictionEntityList;
        if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
        {
          v13 = FollowerQuestInfomationDraw___c_TypeInfo;
          if ( (BYTE3(FollowerQuestInfomationDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FollowerQuestInfomationDraw___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerQuestInfomationDraw___c_TypeInfo);
            v13 = FollowerQuestInfomationDraw___c_TypeInfo;
          }
          static_fields = v13->static_fields;
          _9__17_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__17_0;
          if ( !_9__17_0 )
          {
            if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v13);
              static_fields = FollowerQuestInfomationDraw___c_TypeInfo->static_fields;
            }
            v16 = (Il2CppObject *)static_fields->__9;
            _9__17_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_RestrictionEntity__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              _9__17_0,
              v16,
              Method_FollowerQuestInfomationDraw___c__DispTotalDropItemCR_b__17_0__,
              (const MethodInfo_2711C04 *)Method_System_Func_RestrictionEntity__bool___ctor__);
            v17 = FollowerQuestInfomationDraw___c_TypeInfo->static_fields;
            v17->__9__17_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__17_0;
            sub_B2C2F8(&v17->__9__17_0, _9__17_0);
          }
          v18 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)restrictionEntityList,
                  (System_Func_TSource__bool__o *)_9__17_0,
                  (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                               v18,
                                                                               (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
          questRestrictionInfo = _4__this->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_91;
          restrictionEntityList = this;
        }
        Messages_31222988 = QuestRestrictionInfo__GetMessages_31222988(
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
                              0LL);
        v2->fields._restrictionMessages_5__2 = Messages_31222988;
        p_restrictionMessages_5__2 = &v2->fields._restrictionMessages_5__2;
      }
      else
      {
        if ( !questRestrictionInfo )
          goto LABEL_91;
        Messages_31222988 = QuestRestrictionInfo__GetMessages(
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
                              0LL);
        p_restrictionMessages_5__2 = &v2->fields._restrictionMessages_5__2;
        v2->fields._restrictionMessages_5__2 = Messages_31222988;
      }
      sub_B2C2F8(p_restrictionMessages_5__2, Messages_31222988);
      if ( !*p_restrictionMessages_5__2 )
        goto LABEL_91;
      max_length = (*p_restrictionMessages_5__2)->max_length;
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
              goto LABEL_91;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          }
          return 0;
        }
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.restrictionMessageBase;
        _4__this->fields.dispNum = 0;
        if ( this )
        {
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            v24 = *p_restrictionMessages_5__2;
            if ( *p_restrictionMessages_5__2 )
            {
              if ( !v24->max_length )
              {
LABEL_92:
                v41 = sub_B2C460(this);
                sub_B2C400(v41, 0LL);
              }
              FollowerQuestInfomationDraw__SetRestrictionDisp(_4__this, v24->m_Items[0], 0LL);
              return 0;
            }
          }
        }
LABEL_91:
        sub_B2C434(this, method);
      }
      v2->fields._ta_5__4 = 0LL;
      sub_B2C2F8(&v2->fields._ta_5__4, 0LL);
      _4__this->fields.dispNum = v2->fields._restrictionCount_5__3 - 1;
      break;
    case 1:
      p_ta_5__4 = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o **)&v2->fields._ta_5__4;
      v2->fields.__1__state = -1;
      goto LABEL_66;
    case 2:
      v2->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v2->fields._startTime_5__5) >= 3.0 )
      {
        if ( _4__this )
          goto LABEL_74;
      }
      else if ( _4__this )
      {
        goto LABEL_73;
      }
      goto LABEL_91;
    case 3:
      v22 = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o **)&v2->fields._ta_5__4;
      v2->fields.__1__state = -1;
      goto LABEL_82;
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
          goto LABEL_91;
        FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(_4__this, 0LL);
        v26 = _4__this->fields.dispNum + 1;
        _4__this->fields.dispNum = v26;
        if ( v26 >= v2->fields._restrictionCount_5__3 )
        {
          v26 = (unsigned __int8)_4__this->fields.isDispTrend << 31 >> 31;
          _4__this->fields.dispNum = v26;
        }
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.trendInfoBase;
        if ( !this )
          goto LABEL_91;
        if ( (v26 & 0x80000000) != 0 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.restrictionMessageBase;
          if ( !this )
            goto LABEL_91;
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0LL);
          if ( !this )
            goto LABEL_91;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.restrictionMessageBase;
          if ( !this )
            goto LABEL_91;
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0LL);
          if ( !this )
            goto LABEL_91;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          restrictionMessages_5__2 = v2->fields._restrictionMessages_5__2;
          if ( !restrictionMessages_5__2 )
            goto LABEL_91;
          dispNum = _4__this->fields.dispNum;
          if ( (unsigned int)dispNum >= restrictionMessages_5__2->max_length )
            goto LABEL_92;
          FollowerQuestInfomationDraw__SetRestrictionDisp(_4__this, restrictionMessages_5__2->m_Items[dispNum], 0LL);
        }
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.infomationPanel;
        if ( !this )
          goto LABEL_91;
        if ( _4__this->fields.isClick )
        {
          ((void (__fastcall *)(FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
            this,
            this->klass[1]._1.image,
            1.0);
          _4__this->fields.isClick = 0;
          break;
        }
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v30 = TweenAlpha__Begin(gameObject, 0.5, 1.0, 0LL);
        v2->fields._ta_5__4 = v30;
        p_ta_5__4 = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o **)&v2->fields._ta_5__4;
        sub_B2C2F8(&v2->fields._ta_5__4, v30);
        ta_5__4 = (UnityEngine_Object_o *)v2->fields._ta_5__4;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                             ta_5__4,
                                                                             0LL,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !*p_ta_5__4 )
            goto LABEL_91;
          LODWORD((*p_ta_5__4)->fields.__2__current) = 6;
          v32 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v32, 0LL);
          v2->fields._wait_5__6 = v32;
          sub_B2C2F8(&v2->fields._wait_5__6, v32);
LABEL_66:
          this = *p_ta_5__4;
          if ( !*p_ta_5__4 )
            goto LABEL_91;
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Behaviour__get_enabled(
                                                                               (UnityEngine_Behaviour_o *)this,
                                                                               0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !_4__this )
              goto LABEL_91;
            if ( !_4__this->fields.isClick )
            {
              wait_5__6 = (Il2CppObject *)v2->fields._wait_5__6;
              v2->fields.__2__current = wait_5__6;
              sub_B2C2F8(&v2->fields.__2__current, wait_5__6);
              result = 1;
              v2->fields.__1__state = 1;
              return result;
            }
          }
          v2->fields._wait_5__6 = 0LL;
          sub_B2C2F8(&v2->fields._wait_5__6, 0LL);
          if ( !_4__this )
            goto LABEL_91;
        }
      }
      while ( _4__this->fields.isClick );
      v2->fields._startTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
LABEL_73:
      if ( !_4__this->fields.isClick )
      {
        v37 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v37, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v37;
        p__2__current = &v2->fields.__2__current;
        sub_B2C2F8(p__2__current, v37);
        *((_DWORD *)p__2__current - 2) = 2;
        return 1;
      }
LABEL_74:
      if ( !_4__this->fields.isClick )
      {
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.infomationPanel;
        if ( !this )
          goto LABEL_91;
        v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v34 = TweenAlpha__Begin(v33, 0.5, 0.0, 0LL);
        v2->fields._ta_5__4 = v34;
        v22 = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o **)&v2->fields._ta_5__4;
        sub_B2C2F8(&v2->fields._ta_5__4, v34);
        v35 = (UnityEngine_Object_o *)v2->fields._ta_5__4;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                             v35,
                                                                             0LL,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
    }
    if ( !*v22 )
      goto LABEL_91;
    LODWORD((*v22)->fields.__2__current) = 6;
    v36 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v36, 0LL);
    v2->fields._wait_5__6 = v36;
    sub_B2C2F8(&v2->fields._wait_5__6, v36);
LABEL_82:
    this = *v22;
    if ( !*v22 )
      goto LABEL_91;
    this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Behaviour__get_enabled(
                                                                         (UnityEngine_Behaviour_o *)this,
                                                                         0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_91;
      if ( !_4__this->fields.isClick )
        break;
    }
    v2->fields._wait_5__6 = 0LL;
    sub_B2C2F8(&v2->fields._wait_5__6, 0LL);
  }
  v40 = (Il2CppObject *)v2->fields._wait_5__6;
  v2->fields.__2__current = v40;
  sub_B2C2F8(&v2->fields.__2__current, v40);
  v2->fields.__1__state = 3;
  return 1;
}


Il2CppObject *__fastcall FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__System_Collections_IEnumerator_Reset(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__System_Collections_IEnumerator_get_Current(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__System_IDisposable_Dispose(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FollowerQuestInfomationDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct FollowerQuestInfomationDraw___c_StaticFields *static_fields; // x0

  if ( (byte_41841CF & 1) == 0 )
  {
    sub_B2C35C(&FollowerQuestInfomationDraw___c_TypeInfo, v1);
    byte_41841CF = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(FollowerQuestInfomationDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = FollowerQuestInfomationDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FollowerQuestInfomationDraw___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall FollowerQuestInfomationDraw___c___ctor(
        FollowerQuestInfomationDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FollowerQuestInfomationDraw___c___DispTotalDropItemCR_b__17_0(
        FollowerQuestInfomationDraw___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B2C434(this, 0LL);
  return entity->fields.type != 15;
}