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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  QuestBoardListViewMultiLimitedFormation___c_c *v21; // x0
  System_Func_object__int__o *_9__9_0; // x23
  Il2CppObject *v23; // x24
  struct QuestBoardListViewMultiLimitedFormation___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Object_array *v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  const MethodInfo *v52; // x1

  if ( (byte_4B130EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_QuestPhaseDetailEntity_BoardInfo__int___, label, sprite);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___, v11, v12);
    sub_1BCA7E0(&System_Func_QuestPhaseDetailEntity_BoardInfo__int__TypeInfo, v13, v14);
    sub_1BCA7E0(&QuestBoardListViewMultiLimitedFormation_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_QuestBoardListViewMultiLimitedFormation___c__Init_b__9_0__, v17, v18);
    sub_1BCA7E0(&QuestBoardListViewMultiLimitedFormation___c_TypeInfo, v19, v20);
    byte_4B130EC = 1;
  }
  v21 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
  if ( !QuestBoardListViewMultiLimitedFormation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiLimitedFormation___c_TypeInfo, label);
    v21 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
  }
  _9__9_0 = (System_Func_object__int__o *)v21->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21, label);
      v21 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__9_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_QuestPhaseDetailEntity_BoardInfo__int__TypeInfo,
                                              label,
                                              sprite,
                                              list);
    System_Func_object__int____ctor(
      _9__9_0,
      v23,
      Method_QuestBoardListViewMultiLimitedFormation___c__Init_b__9_0__,
      0LL);
    static_fields = QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_QuestPhaseDetailEntity_BoardInfo__int__o *)_9__9_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)_9__9_0, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TKey__o *)_9__9_0,
                                                               (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_QuestPhaseDetailEntity_BoardInfo__int___);
  v32 = System_Linq_Enumerable__ToArray_object_(
          v31,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___);
  if ( !this )
    sub_1BCAA3C(v32, v33);
  this->fields.InfoList = (struct QuestPhaseDetailEntity_BoardInfo_array *)v32;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.InfoList, (int64_t)v32, v34, v35, v36, v37, v38, v39);
  this->fields.Label = label;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.Label, (int64_t)label, v40, v41, v42, v43, v44, v45);
  this->fields.Sprite = sprite;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.Sprite, (int64_t)sprite, v46, v47, v48, v49, v50, v51);
  this->fields.CurrentIndex = 0;
  *(_WORD *)&this->fields.Forward = 0;
  this->fields.MaxWidth = maxWidth;
  QuestBoardListViewMultiLimitedFormation_TypeInfo->static_fields->InitTime = UnityEngine_Time__get_unscaledTime(0LL);
  QuestBoardListViewMultiLimitedFormation__SetNext(this, v52);
}


void __fastcall QuestBoardListViewMultiLimitedFormation__SetNext(
        QuestBoardListViewMultiLimitedFormation_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestBoardListViewMultiLimitedFormation_o *v3; // x19
  struct QuestPhaseDetailEntity_BoardInfo_array *InfoList; // x8
  __int64 CurrentIndex; // x9
  QuestPhaseDetailEntity_BoardInfo_o *v6; // x8
  struct QuestPhaseDetailEntity_BoardInfo_array *v7; // x8
  __int64 v8; // x9
  QuestPhaseDetailEntity_BoardInfo_o *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  int32_t v11; // w21

  v3 = this;
  if ( (byte_4B130ED & 1) == 0 )
  {
    this = (QuestBoardListViewMultiLimitedFormation_o *)sub_1BCA7E0(
                                                          &Method_System_Linq_Enumerable_Count_QuestPhaseDetailEntity_BoardInfo___,
                                                          method,
                                                          v2);
    byte_4B130ED = 1;
  }
  InfoList = v3->fields.InfoList;
  if ( !InfoList )
    goto LABEL_14;
  CurrentIndex = v3->fields.CurrentIndex;
  if ( (unsigned int)CurrentIndex >= InfoList->max_length )
    goto LABEL_15;
  v6 = InfoList->m_Items[CurrentIndex];
  if ( !v6
    || (this = (QuestBoardListViewMultiLimitedFormation_o *)v6->fields.text) == 0LL
    || (this = (QuestBoardListViewMultiLimitedFormation_o *)QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                                                              (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)this,
                                                              v3->fields.Label,
                                                              v3->fields.MaxWidth,
                                                              0LL),
        (v7 = v3->fields.InfoList) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(this, method);
  }
  v8 = v3->fields.CurrentIndex;
  if ( (unsigned int)v8 >= v7->max_length )
LABEL_15:
    sub_1BCAA44(this, method);
  v9 = v7->m_Items[v8];
  if ( !v9 )
    goto LABEL_14;
  this = (QuestBoardListViewMultiLimitedFormation_o *)v9->fields.image;
  if ( !this )
    goto LABEL_14;
  QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
    (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)this,
    v3->fields.Sprite,
    0LL);
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields.InfoList;
  v11 = v3->fields.CurrentIndex + 1;
  v3->fields.CurrentIndex = v11;
  if ( v11 >= System_Linq_Enumerable__Count_object_(
                v10,
                (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_QuestPhaseDetailEntity_BoardInfo___) )
    v3->fields.CurrentIndex = 0;
}


void __fastcall QuestBoardListViewMultiLimitedFormation__Update(
        QuestBoardListViewMultiLimitedFormation_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  float v4; // s9
  float v5; // s8
  float timeScale; // s0
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  float v9; // s9
  int OldForward; // w8
  int v11; // w9

  if ( (byte_4B130EB & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewMultiLimitedFormation_TypeInfo, method, v2);
    byte_4B130EB = 1;
  }
  v4 = (float)(UnityEngine_Time__get_unscaledTime(0LL)
             - QuestBoardListViewMultiLimitedFormation_TypeInfo->static_fields->InitTime)
     / this->fields.duration;
  if ( this->fields.ignoreTimeScale )
  {
    v5 = fmodf(v4, 1.0);
  }
  else
  {
    timeScale = UnityEngine_Time__get_timeScale(0LL);
    v5 = fmodf(v4, 1.0) * timeScale;
  }
  this->fields.OldForward = this->fields.Forward;
  v9 = fmodf(v4, 2.0);
  if ( !byte_4B109C0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v7, v8);
    byte_4B109C0 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
  OldForward = this->fields.OldForward;
  v11 = (floorf(v9) != INFINITY) & (vcvtms_s32_f32(v9) == 0);
  this->fields.Forward = v11;
  if ( OldForward && OldForward != v11 )
    QuestBoardListViewMultiLimitedFormation__SetNext(this, v7);
  if ( this->fields.style == 2 && !this->fields.Forward )
    v5 = 1.0 - v5;
  UITweener__set_tweenFactor((UITweener_o *)this, v5, 0LL);
  UITweener__Sample((UITweener_o *)this, this->fields.mFactor, 0, 0LL);
}


void __fastcall QuestBoardListViewMultiLimitedFormation___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B130EE & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewMultiLimitedFormation___c_TypeInfo, v1, v2);
    byte_4B130EE = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestBoardListViewMultiLimitedFormation___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewMultiLimitedFormation___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return info->fields.priority;
}