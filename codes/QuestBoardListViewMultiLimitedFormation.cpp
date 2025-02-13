void __fastcall QuestBoardListViewMultiLimitedFormation___ctor(
        QuestBoardListViewMultiLimitedFormation_o *this,
        const MethodInfo *method)
{
  TweenAlpha___ctor((TweenAlpha_o *)this, 0LL);
}


void __fastcall QuestBoardListViewMultiLimitedFormation__Init(
        QuestBoardListViewMultiLimitedFormation_o *this,
        UILabel_o *label,
        UISprite_o *sprite,
        QuestPhaseDetailEntity_BoardInfo_array *list,
        float maxWidth,
        const MethodInfo *method)
{
  QuestBoardListViewMultiLimitedFormation___c_c *v11; // x0
  System_Func_object__int__o *_9__9_0; // x23
  Il2CppObject *v13; // x24
  struct QuestBoardListViewMultiLimitedFormation___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Object_array *v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x1

  if ( (byte_4BD93C3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_QuestPhaseDetailEntity_BoardInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___);
    sub_1C21E38(&System_Func_QuestPhaseDetailEntity_BoardInfo__int__TypeInfo);
    sub_1C21E38(&QuestBoardListViewMultiLimitedFormation_TypeInfo);
    sub_1C21E38(&Method_QuestBoardListViewMultiLimitedFormation___c__Init_b__9_0__);
    sub_1C21E38(&QuestBoardListViewMultiLimitedFormation___c_TypeInfo);
    byte_4BD93C3 = 1;
  }
  v11 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
  if ( !QuestBoardListViewMultiLimitedFormation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiLimitedFormation___c_TypeInfo);
    v11 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
  }
  _9__9_0 = (System_Func_object__int__o *)v11->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__9_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_QuestPhaseDetailEntity_BoardInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__9_0,
      v13,
      Method_QuestBoardListViewMultiLimitedFormation___c__Init_b__9_0__,
      0LL);
    static_fields = QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_QuestPhaseDetailEntity_BoardInfo__int__o *)_9__9_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)_9__9_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TKey__o *)_9__9_0,
                                                               (const MethodInfo_2FD8EDC *)Method_System_Linq_Enumerable_OrderBy_QuestPhaseDetailEntity_BoardInfo__int___);
  v22 = System_Linq_Enumerable__ToArray_object_(
          v21,
          (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___);
  if ( !this )
    sub_1C22094(v22, v23);
  this->fields.InfoList = (struct QuestPhaseDetailEntity_BoardInfo_array *)v22;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.InfoList, (int64_t)v22, v24, v25, v26, v27, v28, v29);
  this->fields.Label = label;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.Label, (int64_t)label, v30, v31, v32, v33, v34, v35);
  this->fields.Sprite = sprite;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.Sprite, (int64_t)sprite, v36, v37, v38, v39, v40, v41);
  this->fields.CurrentIndex = 0;
  *(_WORD *)&this->fields.Forward = 0;
  this->fields.MaxWidth = maxWidth;
  QuestBoardListViewMultiLimitedFormation_TypeInfo->static_fields->InitTime = UnityEngine_Time__get_unscaledTime(0LL);
  QuestBoardListViewMultiLimitedFormation__SetNext(this, v42);
}


void __fastcall QuestBoardListViewMultiLimitedFormation__SetNext(
        QuestBoardListViewMultiLimitedFormation_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewMultiLimitedFormation_o *v2; // x19
  struct QuestPhaseDetailEntity_BoardInfo_array *InfoList; // x8
  __int64 CurrentIndex; // x9
  QuestPhaseDetailEntity_BoardInfo_o *v5; // x8
  struct QuestPhaseDetailEntity_BoardInfo_array *v6; // x8
  __int64 v7; // x9
  QuestPhaseDetailEntity_BoardInfo_o *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  int32_t v10; // w21

  v2 = this;
  if ( (byte_4BD93C4 & 1) == 0 )
  {
    this = (QuestBoardListViewMultiLimitedFormation_o *)sub_1C21E38(&Method_System_Linq_Enumerable_Count_QuestPhaseDetailEntity_BoardInfo___);
    byte_4BD93C4 = 1;
  }
  InfoList = v2->fields.InfoList;
  if ( !InfoList )
    goto LABEL_14;
  CurrentIndex = v2->fields.CurrentIndex;
  if ( (unsigned int)CurrentIndex >= InfoList->max_length )
    goto LABEL_15;
  v5 = InfoList->m_Items[CurrentIndex];
  if ( !v5
    || (this = (QuestBoardListViewMultiLimitedFormation_o *)v5->fields.text) == 0LL
    || (this = (QuestBoardListViewMultiLimitedFormation_o *)QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                                                              (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)this,
                                                              v2->fields.Label,
                                                              v2->fields.MaxWidth,
                                                              0LL),
        (v6 = v2->fields.InfoList) == 0LL) )
  {
LABEL_14:
    sub_1C22094(this, method);
  }
  v7 = v2->fields.CurrentIndex;
  if ( (unsigned int)v7 >= v6->max_length )
LABEL_15:
    sub_1C2209C(this, method);
  v8 = v6->m_Items[v7];
  if ( !v8 )
    goto LABEL_14;
  this = (QuestBoardListViewMultiLimitedFormation_o *)v8->fields.image;
  if ( !this )
    goto LABEL_14;
  QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
    (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)this,
    v2->fields.Sprite,
    0LL);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.InfoList;
  v10 = v2->fields.CurrentIndex + 1;
  v2->fields.CurrentIndex = v10;
  if ( v10 >= System_Linq_Enumerable__Count_object_(
                v9,
                (const MethodInfo_2FCAE0C *)Method_System_Linq_Enumerable_Count_QuestPhaseDetailEntity_BoardInfo___) )
    v2->fields.CurrentIndex = 0;
}


void __fastcall QuestBoardListViewMultiLimitedFormation__Update(
        QuestBoardListViewMultiLimitedFormation_o *this,
        const MethodInfo *method)
{
  float v3; // s9
  float v4; // s8
  float timeScale; // s0
  const MethodInfo *v6; // x1
  float v7; // s9
  int OldForward; // w8
  int v9; // w9

  if ( (byte_4BD93C2 & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewMultiLimitedFormation_TypeInfo);
    byte_4BD93C2 = 1;
  }
  v3 = (float)(UnityEngine_Time__get_unscaledTime(0LL)
             - QuestBoardListViewMultiLimitedFormation_TypeInfo->static_fields->InitTime)
     / this->fields.duration;
  if ( this->fields.ignoreTimeScale )
  {
    v4 = fmodf(v3, 1.0);
  }
  else
  {
    timeScale = UnityEngine_Time__get_timeScale(0LL);
    v4 = fmodf(v3, 1.0) * timeScale;
  }
  this->fields.OldForward = this->fields.Forward;
  v7 = fmodf(v3, 2.0);
  if ( !byte_4BD6BB0 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BB0 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  OldForward = this->fields.OldForward;
  v9 = (floorf(v7) != INFINITY) & (vcvtms_s32_f32(v7) == 0);
  this->fields.Forward = v9;
  if ( OldForward && OldForward != v9 )
    QuestBoardListViewMultiLimitedFormation__SetNext(this, v6);
  if ( this->fields.style == 2 && !this->fields.Forward )
    v4 = 1.0 - v4;
  UITweener__set_tweenFactor((UITweener_o *)this, v4, 0LL);
  UITweener__Sample((UITweener_o *)this, this->fields.mFactor, 0, 0LL);
}


void __fastcall QuestBoardListViewMultiLimitedFormation___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD93C5 & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardListViewMultiLimitedFormation___c_TypeInfo);
    byte_4BD93C5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(QuestBoardListViewMultiLimitedFormation___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewMultiLimitedFormation___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall QuestBoardListViewMultiLimitedFormation___c___ctor(
        QuestBoardListViewMultiLimitedFormation___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestBoardListViewMultiLimitedFormation___c___Init_b__9_0(
        QuestBoardListViewMultiLimitedFormation___c_o *this,
        QuestPhaseDetailEntity_BoardInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C22094(this, 0LL);
  return info->fields.priority;
}