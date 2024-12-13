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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  QuestBoardListViewMultiLimitedFormation___c_c *v16; // x0
  System_Func_object__int__o *_9__9_0; // x23
  Il2CppObject *v18; // x24
  struct QuestBoardListViewMultiLimitedFormation___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Object_array *v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  const MethodInfo *v47; // x1

  if ( (byte_4B3407A & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_OrderBy_QuestPhaseDetailEntity_BoardInfo__int___, label);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___, v11);
    sub_1BD3458(&System_Func_QuestPhaseDetailEntity_BoardInfo__int__TypeInfo, v12);
    sub_1BD3458(&QuestBoardListViewMultiLimitedFormation_TypeInfo, v13);
    sub_1BD3458(&Method_QuestBoardListViewMultiLimitedFormation___c__Init_b__9_0__, v14);
    sub_1BD3458(&QuestBoardListViewMultiLimitedFormation___c_TypeInfo, v15);
    byte_4B3407A = 1;
  }
  v16 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
  if ( !QuestBoardListViewMultiLimitedFormation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewMultiLimitedFormation___c_TypeInfo);
    v16 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
  }
  _9__9_0 = (System_Func_object__int__o *)v16->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = QuestBoardListViewMultiLimitedFormation___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__9_0 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_QuestPhaseDetailEntity_BoardInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__9_0,
      v18,
      Method_QuestBoardListViewMultiLimitedFormation___c__Init_b__9_0__,
      0LL);
    static_fields = QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_QuestPhaseDetailEntity_BoardInfo__int__o *)_9__9_0;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)_9__9_0, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TKey__o *)_9__9_0,
                                                               (const MethodInfo_2F5A740 *)Method_System_Linq_Enumerable_OrderBy_QuestPhaseDetailEntity_BoardInfo__int___);
  v27 = System_Linq_Enumerable__ToArray_object_(
          v26,
          (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___);
  if ( !this )
    sub_1BD36B4(v27, v28);
  this->fields.InfoList = (struct QuestPhaseDetailEntity_BoardInfo_array *)v27;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.InfoList, (int64_t)v27, v29, v30, v31, v32, v33, v34);
  this->fields.Label = label;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.Label, (int64_t)label, v35, v36, v37, v38, v39, v40);
  this->fields.Sprite = sprite;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.Sprite, (int64_t)sprite, v41, v42, v43, v44, v45, v46);
  this->fields.CurrentIndex = 0;
  *(_WORD *)&this->fields.Forward = 0;
  this->fields.MaxWidth = maxWidth;
  QuestBoardListViewMultiLimitedFormation_TypeInfo->static_fields->InitTime = UnityEngine_Time__get_unscaledTime(0LL);
  QuestBoardListViewMultiLimitedFormation__SetNext(this, v47);
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
  if ( (byte_4B3407B & 1) == 0 )
  {
    this = (QuestBoardListViewMultiLimitedFormation_o *)sub_1BD3458(
                                                          &Method_System_Linq_Enumerable_Count_QuestPhaseDetailEntity_BoardInfo___,
                                                          method);
    byte_4B3407B = 1;
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
    sub_1BD36B4(this, method);
  }
  v7 = v2->fields.CurrentIndex;
  if ( (unsigned int)v7 >= v6->max_length )
LABEL_15:
    sub_1BD36BC(this, method);
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
                (const MethodInfo_2F4C97C *)Method_System_Linq_Enumerable_Count_QuestPhaseDetailEntity_BoardInfo___) )
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

  if ( (byte_4B34079 & 1) == 0 )
  {
    sub_1BD3458(&QuestBoardListViewMultiLimitedFormation_TypeInfo, method);
    byte_4B34079 = 1;
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
  if ( !byte_4B31940 )
  {
    sub_1BD3458(&System_Math_TypeInfo, v6);
    byte_4B31940 = 1;
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B3407C & 1) == 0 )
  {
    sub_1BD3458(&QuestBoardListViewMultiLimitedFormation___c_TypeInfo, v1);
    byte_4B3407C = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(QuestBoardListViewMultiLimitedFormation___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields->__9 = (struct QuestBoardListViewMultiLimitedFormation___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)QuestBoardListViewMultiLimitedFormation___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, 0LL);
  return info->fields.priority;
}