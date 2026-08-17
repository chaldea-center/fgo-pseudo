void BattlePointGaugeProgressCellTypeComponent___ctor(
        BattlePointGaugeProgressCellTypeComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct System_String_o *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  BattlePointGaugeComponent_c *v18; // x0
  int v19; // w8

  if ( (byte_597416A & 1) == 0 )
  {
    sub_2213A60(&BattlePointGaugeComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIGradientSprite___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIGradientSprite__TypeInfo);
    sub_2213A60(&StringLiteral_17849/*"battlepoint_step_{0}"*/);
    byte_597416A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIGradientSprite__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIGradientSprite___ctor__);
  this->fields.barGaugeCellSprite = (struct System_Collections_Generic_List_UIGradientSprite__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.barGaugeCellSprite, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct System_String_o *)StringLiteral_17849/*"battlepoint_step_{0}"*/;
  this->fields.useCellSpriteChange = 1;
  this->fields.cellSpriteNameFormat = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cellSpriteNameFormat,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v18 = BattlePointGaugeComponent_TypeInfo;
  *(_QWORD *)&this->fields.pointEffectMaxSequenceDuration = 0xF40000000LL;
  v19 = *(&v18->_2.cctor_finished + 1);
  *(_QWORD *)&this->fields.pointEffectDuration = 0x3F0000003F800000LL;
  if ( !v19 )
    j_il2cpp_runtime_class_init_0(v18, v17);
  this->fields.lastStepUpEffectIdInTween = -1;
  *(_QWORD *)&this->fields.currentMaxValueCache = 0x8000000080000000LL;
  *(_QWORD *)&this->fields.firstPhaseInTween = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *BattlePointGaugeProgressCellTypeComponent__GetPhaseSpriteName(
        BattlePointGaugeProgressCellTypeComponent_o *this,
        int32_t phaseValue,
        const MethodInfo *method)
{
  BattlePointGaugeSetting_o *setting; // x0

  setting = this->fields.setting;
  if ( !setting )
    sub_2213CDC(0, *(_QWORD *)&phaseValue);
  return BattlePointGaugeSetting__GetPhaseSpriteName(setting, phaseValue, method);
}


UnityEngine_GameObject_o *BattlePointGaugeProgressCellTypeComponent__GetPointEffectPrefab(
        BattlePointGaugeProgressCellTypeComponent_o *this,
        int32_t currentPointValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t currentMaxValueCache; // w2
  _BOOL8 PhaseEntity; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct BattlePointGaugeProgressCellTypeComponent_EffectPrefabEntry_array *effectPrefabArray; // x8
  __int64 v11; // x21
  unsigned __int64 v12; // x23
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *effectPrefab; // x20
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5974167 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974167 = 1;
  }
  currentMaxValueCache = this->fields.currentMaxValueCache;
  entity = 0;
  PhaseEntity = BattlePointGaugeComponent__TryGetPhaseEntity(
                  (BattlePointGaugeComponent_o *)this,
                  currentPointValue,
                  currentMaxValueCache,
                  &entity,
                  v3);
  if ( PhaseEntity )
  {
    effectPrefabArray = this->fields.effectPrefabArray;
    if ( !effectPrefabArray )
LABEL_15:
      sub_2213CDC(PhaseEntity, v8);
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(effectPrefabArray->max_length);
      if ( (__int64)v12 >= (int)max_length_low )
        break;
      if ( v12 >= max_length_low )
        sub_2213CE4(PhaseEntity);
      if ( !entity )
        goto LABEL_15;
      if ( *(int *)((char *)&dword_14 + (_QWORD)entity) == effectPrefabArray->m_Items[v11].fields.phase )
      {
        effectPrefab = (UnityEngine_Object_o *)effectPrefabArray->m_Items[v11].fields.effectPrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        PhaseEntity = UnityEngine_Object__op_Inequality(effectPrefab, 0, 0);
        if ( PhaseEntity )
          return (UnityEngine_GameObject_o *)effectPrefab;
        effectPrefabArray = this->fields.effectPrefabArray;
      }
      ++v11;
      ++v12;
      if ( !effectPrefabArray )
        goto LABEL_15;
    }
  }
  return BattlePointGaugeComponent__GetPointEffectPrefab((BattlePointGaugeComponent_o *)this, v8, v9);
}


float BattlePointGaugeProgressCellTypeComponent__GetPointEffectSequenceInterval(
        BattlePointGaugeProgressCellTypeComponent_o *this,
        int32_t effectCount,
        const MethodInfo *method)
{
  float result; // s0
  float v4; // s0
  float pointEffectMaxStartInterval; // s1

  result = 0.0;
  if ( effectCount >= 2 )
  {
    v4 = (float)(this->fields.pointEffectMaxSequenceDuration - this->fields.pointEffectDuration)
       / (float)(effectCount - 1);
    pointEffectMaxStartInterval = this->fields.pointEffectMaxStartInterval;
    if ( v4 <= pointEffectMaxStartInterval )
      pointEffectMaxStartInterval = (float)(this->fields.pointEffectMaxSequenceDuration
                                          - this->fields.pointEffectDuration)
                                  / (float)(effectCount - 1);
    if ( v4 >= 0.0 )
      return pointEffectMaxStartInterval;
    else
      return 0.0;
  }
  return result;
}


float BattlePointGaugeProgressCellTypeComponent__GetPointEffectSequencePlayTime(
        BattlePointGaugeProgressCellTypeComponent_o *this,
        int32_t effectCount,
        float interval,
        const MethodInfo *method)
{
  if ( effectCount < 1 )
    return 0.0;
  else
    return (float)((float)(effectCount - 1) * interval) + this->fields.pointEffectDuration;
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeProgressCellTypeComponent__PlayPointUpPhaseSe(
        BattlePointGaugeProgressCellTypeComponent_o *this,
        int32_t phaseValue,
        const MethodInfo *method)
{
  BattlePointGaugeProgressCellTypeComponent_o *v4; // x20
  struct BattlePointGaugeProgressCellTypeComponent_PhaseSeEntry_array *phaseSeArray; // x8
  __int64 v6; // x22
  unsigned __int64 i; // x23
  unsigned __int64 max_length_low; // x9
  System_String_o *seName; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  v4 = this;
  if ( (byte_5974169 & 1) == 0 )
  {
    this = (BattlePointGaugeProgressCellTypeComponent_o *)sub_2213A60(&Method_BattlePointGaugeProgressCellTypeComponent_PlayPointUpPhaseSe__);
    byte_5974169 = 1;
  }
  phaseSeArray = v4->fields.phaseSeArray;
  if ( phaseSeArray )
  {
    v6 = 0;
    for ( i = 0; ; ++i )
    {
      max_length_low = LODWORD(phaseSeArray->max_length);
      if ( (__int64)i >= (int)max_length_low )
        break;
      if ( i >= max_length_low )
        sub_2213CE4(this);
      if ( phaseSeArray->m_Items[v6].fields.phase == phaseValue )
      {
        seName = phaseSeArray->m_Items[v6].fields.seName;
        this = (BattlePointGaugeProgressCellTypeComponent_o *)System_String__IsNullOrEmpty(seName, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v10 = Method_BattlePointGaugeProgressCellTypeComponent_PlayPointUpPhaseSe__;
          if ( (*((_BYTE *)Method_BattlePointGaugeProgressCellTypeComponent_PlayPointUpPhaseSe__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_2213A78(Method_BattlePointGaugeProgressCellTypeComponent_PlayPointUpPhaseSe__);
          v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
          OverwriteAssetSoundName__PlaySeContinue(v11, seName, 0, 0);
          return;
        }
        phaseSeArray = v4->fields.phaseSeArray;
      }
      ++v6;
      if ( !phaseSeArray )
        sub_2213CDC(this, *(_QWORD *)&phaseValue);
    }
  }
}


bool BattlePointGaugeProgressCellTypeComponent__TryGetCellColor(
        BattlePointGaugeProgressCellTypeComponent_o *this,
        int32_t phase,
        BattlePointGaugeProgressCellTypeComponent_CellColorEntry_o *colorEntry,
        const MethodInfo *method)
{
  struct BattlePointGaugeProgressCellTypeComponent_CellColorEntry_array *cellColorArray; // x8
  int max_length; // w9
  BattlePointGaugeProgressCellTypeComponent_CellColorEntry_o *i; // x8
  bool result; // w0
  __int128 v8; // q0
  __int128 v9; // q1

  colorEntry->fields.bottomColor.fields.a = 0.0;
  *(_OWORD *)&colorEntry->fields.phase = 0u;
  *(_OWORD *)&colorEntry->fields.topColor.fields.a = 0u;
  if ( !this->fields.useGradientColorTint )
    return 0;
  cellColorArray = this->fields.cellColorArray;
  if ( !cellColorArray )
    return 0;
  max_length = cellColorArray->max_length;
  if ( max_length < 1 )
    return 0;
  for ( i = cellColorArray->m_Items; i->fields.phase != phase; ++i )
  {
    if ( !--max_length )
      return 0;
  }
  v9 = *(_OWORD *)&i->fields.phase;
  v8 = *(_OWORD *)&i->fields.topColor.fields.a;
  result = 1;
  colorEntry->fields.bottomColor.fields.a = i->fields.bottomColor.fields.a;
  *(_OWORD *)&colorEntry->fields.phase = v9;
  *(_OWORD *)&colorEntry->fields.topColor.fields.a = v8;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool BattlePointGaugeProgressCellTypeComponent__TryGetPointEffectPrefabSequence(
        BattlePointGaugeProgressCellTypeComponent_o *this,
        int32_t startPointValue,
        int32_t currentPointValue,
        int32_t currentMaxValue,
        System_Collections_Generic_List_GameObject__o *effectPrefabs,
        const MethodInfo *method)
{
  BattlePointGaugeProgressCellTypeComponent_o *v9; // x21
  int size; // w2
  int32_t v11; // w8
  int pointEffectMaxCount; // w9
  int v13; // w23
  int v14; // w26
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct UnityEngine_GameObject_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0

  v9 = this;
  if ( (byte_5974168 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (BattlePointGaugeProgressCellTypeComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974168 = 1;
  }
  if ( !effectPrefabs )
LABEL_22:
    sub_2213CDC(this, *(_QWORD *)&startPointValue);
  size = effectPrefabs->fields._size;
  v11 = effectPrefabs->fields._version + 1;
  effectPrefabs->fields._size = 0;
  effectPrefabs->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)effectPrefabs->fields._items, 0, size, 0);
  if ( currentPointValue - startPointValue < 1 )
    return 0;
  pointEffectMaxCount = v9->fields.pointEffectMaxCount;
  if ( currentPointValue - startPointValue >= pointEffectMaxCount )
    v13 = v9->fields.pointEffectMaxCount;
  else
    v13 = currentPointValue - startPointValue;
  if ( pointEffectMaxCount >= 1 )
  {
    v14 = 1;
    do
    {
      v16 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattlePointGaugeProgressCellTypeComponent_o *, _QWORD, const MethodInfo *))v9->klass->vtable._14_GetPointEffectPrefab.methodPtr)(
                                      v9,
                                      (unsigned int)(startPointValue + v14),
                                      v9->klass->vtable._14_GetPointEffectPrefab.method);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      this = (BattlePointGaugeProgressCellTypeComponent_o *)UnityEngine_Object__op_Inequality(v16, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        items = effectPrefabs->fields._items;
        v24 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++effectPrefabs->fields._version;
        if ( !items )
          goto LABEL_22;
        v25 = effectPrefabs->fields._size;
        if ( (unsigned int)v25 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)effectPrefabs,
            (Il2CppObject *)v16,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + v25;
          effectPrefabs->fields._size = v25 + 1;
          v26[4] = (Il2CppClass *)v16;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
        }
      }
      ++v14;
    }
    while ( v14 <= v13 );
  }
  return effectPrefabs->fields._size > 0;
}


void BattlePointGaugeProgressCellTypeComponent__UpdateProgressGauge(
        BattlePointGaugeProgressCellTypeComponent_o *this,
        BattlePointPhaseEntity_o *entity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *progressGaugeCells; // x0
  int32_t v6; // w21

  if ( (byte_5974165 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_5974165 = 1;
  }
  progressGaugeCells = (System_Collections_Generic_List_object__o *)this->fields.progressGaugeCells;
  if ( !progressGaugeCells )
LABEL_9:
    sub_2213CDC(progressGaugeCells, entity);
  v6 = 0;
  while ( v6 < progressGaugeCells->fields._size )
  {
    progressGaugeCells = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        progressGaugeCells,
                                                                        v6,
                                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( entity )
    {
      if ( progressGaugeCells )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)progressGaugeCells, v6 < entity->fields.phase, 0);
        progressGaugeCells = (System_Collections_Generic_List_object__o *)this->fields.progressGaugeCells;
        ++v6;
        if ( progressGaugeCells )
          continue;
      }
    }
    goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeProgressCellTypeComponent__UpdateProgressGauge_54724088(
        BattlePointGaugeProgressCellTypeComponent_o *this,
        BattlePointPhaseEntity_o *entity,
        int32_t currentPointValue,
        int32_t currentMaxValue,
        const MethodInfo *method)
{
  BattlePointGaugeProgressCellTypeComponent_o *v8; // x19
  unsigned int v9; // w20
  int32_t v10; // w8
  int32_t v11; // w25
  int32_t v12; // w22
  int32_t v13; // w21
  __int64 v14; // x1
  Il2CppObject *Item; // x23
  __int64 v16; // x1
  Il2CppObject *v17; // x23
  const MethodInfo *v18; // x4
  _BOOL4 ignoreChangeFirstSprite; // w24
  bool v20; // zf
  System_String_o *cellSpriteNameFormat; // x24
  Il2CppObject *v22; // x0
  struct BattlePointGaugeProgressCellTypeComponent_CellColorEntry_array *cellColorArray; // x11
  __int64 max_length; // x10
  float *p_a; // x8
  float inactiveCellAlpha; // s3 OVERLAPPED
  int klass_high; // s0
  int monitor; // s1
  int monitor_high; // s2
  float v30; // s8
  float v31; // s9
  float v32; // s10
  float v33; // s11
  int32_t phase; // [xsp+4h] [xbp-8Ch] BYREF
  BattlePointPhaseEntity_o *entitya; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_5974166 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIGradientSprite__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIGradientSprite__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (BattlePointGaugeProgressCellTypeComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974166 = 1;
  }
  entitya = 0;
  if ( !entity
    || ((BattlePointGaugeComponent__ApplyPhaseSpriteName(
           (BattlePointGaugeComponent_o *)v8,
           entity->fields.phase,
           *(const MethodInfo **)&currentPointValue),
         v9 = currentMaxValue & ~(currentMaxValue >> 31),
         this = (BattlePointGaugeProgressCellTypeComponent_o *)v8->fields.progressGaugeCells,
         currentPointValue >= (int)v9)
      ? (v10 = v9)
      : (v10 = currentPointValue),
        currentPointValue >= 0 ? (v11 = v10) : (v11 = 0),
        !this) )
  {
LABEL_49:
    sub_2213CDC(this, entity);
  }
  v12 = 0;
  while ( v12 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    v13 = v12;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v12,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    this = (BattlePointGaugeProgressCellTypeComponent_o *)UnityEngine_Object__op_Equality(
                                                            (UnityEngine_Object_o *)Item,
                                                            0,
                                                            0);
    ++v12;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !Item )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, v13 < v9, 0);
      if ( v13 < v9 )
      {
        this = (BattlePointGaugeProgressCellTypeComponent_o *)v8->fields.barGaugeCellSprite;
        if ( !this )
          goto LABEL_49;
        if ( v13 < SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          v17 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)this,
                  v13,
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIGradientSprite__get_Item__);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0, 0) )
          {
            ignoreChangeFirstSprite = v8->fields.ignoreChangeFirstSprite;
            this = (BattlePointGaugeProgressCellTypeComponent_o *)BattlePointGaugeComponent__TryGetPhaseEntity(
                                                                    (BattlePointGaugeComponent_o *)v8,
                                                                    v12,
                                                                    v9,
                                                                    &entitya,
                                                                    v18);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_40;
            if ( v13 )
              v20 = 1;
            else
              v20 = !ignoreChangeFirstSprite;
            if ( v20 && v8->fields.useCellSpriteChange )
            {
              if ( !entitya )
                goto LABEL_49;
              cellSpriteNameFormat = v8->fields.cellSpriteNameFormat;
              phase = entitya->fields.phase;
              v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &phase);
              this = (BattlePointGaugeProgressCellTypeComponent_o *)System_String__Format(cellSpriteNameFormat, v22, 0);
              if ( !v17 )
                goto LABEL_49;
              UISprite__set_spriteName((UISprite_o *)v17, (System_String_o *)this, 0);
            }
            if ( !entitya )
              goto LABEL_49;
            if ( v8->fields.useGradientColorTint
              && (cellColorArray = v8->fields.cellColorArray) != 0
              && (int)cellColorArray->max_length >= 1 )
            {
              max_length = (unsigned int)cellColorArray->max_length;
              p_a = &cellColorArray->m_Items[0].fields.bottomColor.fields.a;
              while ( *((_DWORD *)p_a - 8) != entitya->fields.phase )
              {
                --max_length;
                p_a += 9;
                if ( !max_length )
                  goto LABEL_40;
              }
              if ( !v17 )
                goto LABEL_49;
              v31 = *(p_a - 1);
              v30 = *p_a;
              v33 = *(p_a - 3);
              v32 = *(p_a - 2);
              UIGradientSprite__set_TopColor((UIGradientSprite_o *)v17, *(UnityEngine_Color_o *)(p_a - 7), 0);
              v36.fields.r = v33;
              v36.fields.g = v32;
              v36.fields.b = v31;
              v36.fields.a = v30;
              UIGradientSprite__set_BottomColor((UIGradientSprite_o *)v17, v36, 0);
            }
            else
            {
LABEL_40:
              if ( !v17 )
                goto LABEL_49;
            }
            inactiveCellAlpha = 1.0;
            if ( v13 >= v11 )
              inactiveCellAlpha = v8->fields.inactiveCellAlpha;
            klass_high = HIDWORD(v17[9].klass);
            monitor = (int)v17[9].monitor;
            monitor_high = HIDWORD(v17[9].monitor);
            UIWidget__set_color((UIWidget_o *)v17, *(UnityEngine_Color_o *)(&inactiveCellAlpha - 3), 0);
          }
        }
      }
    }
    this = (BattlePointGaugeProgressCellTypeComponent_o *)v8->fields.progressGaugeCells;
    if ( !this )
      goto LABEL_49;
  }
}


void BattlePointGaugeProgressCellTypeComponent__ValidateAndSetupCells(
        BattlePointGaugeProgressCellTypeComponent_o *this,
        const MethodInfo *method)
{
  BattlePointGaugeProgressCellTypeComponent_o *v2; // x19
  struct System_Collections_Generic_List_UIGradientSprite__o *barGaugeCellSprite; // x8
  int32_t size; // w2
  int v5; // w9
  int32_t v6; // w20
  __int64 v7; // x1
  Il2CppObject *Item; // x22
  UnityEngine_Object_o *v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8

  v2 = this;
  if ( (byte_5974164 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIGradientSprite___);
    sub_2213A60(&Method_System_Collections_Generic_List_UIGradientSprite__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIGradientSprite__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BattlePointGaugeProgressCellTypeComponent_o *)sub_2213A60(&StringLiteral_3173/*"BarGaugeCell"*/);
    byte_5974164 = 1;
  }
  barGaugeCellSprite = v2->fields.barGaugeCellSprite;
  if ( !barGaugeCellSprite )
    goto LABEL_26;
  size = barGaugeCellSprite->fields._size;
  v5 = barGaugeCellSprite->fields._version + 1;
  barGaugeCellSprite->fields._size = 0;
  barGaugeCellSprite->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)barGaugeCellSprite->fields._items, 0, size, 0);
  this = (BattlePointGaugeProgressCellTypeComponent_o *)v2->fields.progressGaugeCells;
  if ( !this )
LABEL_26:
    sub_2213CDC(this, method);
  v6 = 0;
  while ( v6 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v6,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    this = (BattlePointGaugeProgressCellTypeComponent_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)Item,
                                                            0,
                                                            0);
    v9 = 0;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_26;
      this = (BattlePointGaugeProgressCellTypeComponent_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)Item,
                                                              0);
      if ( !this )
        goto LABEL_26;
      v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                     (UnityEngine_Transform_o *)this,
                                     (System_String_o *)StringLiteral_3173/*"BarGaugeCell"*/,
                                     0);
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (BattlePointGaugeProgressCellTypeComponent_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
    method = 0;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_26;
      method = (const MethodInfo *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v9,
                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIGradientSprite___);
    }
    this = (BattlePointGaugeProgressCellTypeComponent_o *)v2->fields.barGaugeCellSprite;
    if ( this )
    {
      m_CachedPtr = this->fields.m_CachedPtr;
      v17 = Method_System_Collections_Generic_List_UIGradientSprite__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( m_CachedPtr )
      {
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)method,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v19 + 32) = method;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 32), (int32_t)method, v10, v11, v12, v13, v14, v15);
        }
        this = (BattlePointGaugeProgressCellTypeComponent_o *)v2->fields.progressGaugeCells;
        ++v6;
        if ( this )
          continue;
      }
    }
    goto LABEL_26;
  }
}


void BattlePointGaugeProgressCellTypeComponent__ValidateSerializedField(
        BattlePointGaugeProgressCellTypeComponent_o *this,
        const MethodInfo *method)
{
  BattlePointGaugeSetting_o *setting; // x0
  const MethodInfo *v4; // x1

  setting = this->fields.setting;
  if ( !setting
    || (BattlePointGaugeSetting__ValidateSerializedField(setting, method),
        BattlePointGaugeProgressCellTypeComponent__ValidateAndSetupCells(this, v4),
        this->fields.useGradientColorTint)
    && !this->fields.cellColorArray
    || !this->fields.effectPrefabArray )
  {
    sub_2213CDC(setting, method);
  }
}


bool BattlePointGaugeProgressCellTypeComponent__get_PlayFinalPhaseAnimationAtPointEffectStart(
        BattlePointGaugeProgressCellTypeComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}