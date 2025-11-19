void BattleDropPositionRandom___ctor(BattleDropPositionRandom_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleDropPositionRandom__Initialize(
        BattleDropPositionRandom_o *this,
        UnityEngine_ScriptableObject_o *scriptableObject,
        DropInfo_array *dropInfoArray,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x24
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v9; // x23
  System_Collections_Generic_Dictionary_int__int__o *v10; // x24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_int__object__o *v13; // x24
  BattleDropPositionRandom_Fields *p_fields; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BattleDropPositionRandom___c_c *v17; // x0
  System_Func_object__int__o *_9__5_0; // x24
  Il2CppObject *v19; // x25
  struct BattleDropPositionRandom___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v23; // x0
  BattleDropPositionRandom___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x22
  System_Func_object__int__o *_9__5_1; // x24
  Il2CppObject *v27; // x25
  struct BattleDropPositionRandom___c_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Func_object__int__o *_9__5_2; // x25
  Il2CppObject *v32; // x26
  struct BattleDropPositionRandom___c_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_object__o *klass; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x22
  int32_t v41; // w23
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *current; // x29
  Il2CppClass *v45; // x24
  System_Func_int__int__o *v46; // x26
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x1
  int32_t v50; // w27
  System_Collections_Generic_Dictionary_int__object__o *fixedDropPointRandomList; // x27
  System_Collections_Generic_List_object__o *v52; // x28
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x0
  __int64 v56; // x1
  Il2CppClass *v57; // x22
  const char *namespaze; // x8
  unsigned __int64 v59; // x24
  float v60; // s8
  int klass_high; // w24
  float v62; // s0
  int v63; // w8
  float v64; // s0
  float v65; // s1
  int v66; // w22
  float v67; // s10
  float v68; // s11
  int i; // w26
  float v70; // s9
  float v71; // s15
  Il2CppClass *v72; // x28
  float v73; // s12
  float v74; // s13
  __int64 v75; // x27
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  __int64 v78; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v80; // x1
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  struct System_Object_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  Il2CppClass **v86; // x8
  Il2CppObject *v87; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_Dictionary_int__int__o **p_giftIdToGroupKeyMap; // [xsp+18h] [xbp-108h]
  float v89; // [xsp+24h] [xbp-FCh]
  int v90; // [xsp+28h] [xbp-F8h]
  int32_t v91; // [xsp+2Ch] [xbp-F4h]
  CGThumbnailListItem_o *p_monitor; // [xsp+30h] [xbp-F0h]
  float v93; // [xsp+38h] [xbp-E8h]
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+48h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+60h] [xbp-C0h] BYREF

  if ( (byte_4CB8D48 & 1) == 0 )
  {
    sub_1C6BA08(&BattleDropPositionRandomSetting_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom____ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_GroupBy_DropInfo__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Sum_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__DropInfo___int__int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__get_Current__);
    sub_1C6BA08(&BattleDropPositionRandom_FixedDropPositionRandom_TypeInfo);
    sub_1C6BA08(&System_Func_int__int__TypeInfo);
    sub_1C6BA08(&System_Func_IGrouping_int__DropInfo___int__TypeInfo);
    sub_1C6BA08(&System_Func_DropInfo__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleDropPositionRandomSetting_PositionRandom__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_BattleDropPositionRandom___c__Initialize_b__5_0__);
    sub_1C6BA08(&Method_BattleDropPositionRandom___c__Initialize_b__5_1__);
    sub_1C6BA08(&Method_BattleDropPositionRandom___c__Initialize_b__5_2__);
    sub_1C6BA08(&Method_BattleDropPositionRandom___c__DisplayClass5_0__Initialize_b__3__);
    sub_1C6BA08(&BattleDropPositionRandom___c__DisplayClass5_0_TypeInfo);
    sub_1C6BA08(&BattleDropPositionRandom___c_TypeInfo);
    byte_4CB8D48 = 1;
  }
  memset(&v95, 0, sizeof(v95));
  v7 = (Il2CppObject *)sub_1C6BC54(BattleDropPositionRandom___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scriptableObject, 0, 0)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)dropInfoArray, 0) )
  {
    if ( scriptableObject
      && (naturalAligment = BattleDropPositionRandomSetting_TypeInfo->_2.naturalAligment,
          scriptableObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (BattleDropPositionRandomSetting_c *)scriptableObject->klass->_2.typeHierarchy[naturalAligment - 1] == BattleDropPositionRandomSetting_TypeInfo )
        v9 = (UnityEngine_Object_o *)scriptableObject;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v9, 0, 0) )
    {
      v87 = v7;
      v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v10,
        (const MethodInfo_3449074 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.giftIdToGroupKeyMap = v10;
      p_giftIdToGroupKeyMap = &this->fields.giftIdToGroupKeyMap;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.giftIdToGroupKeyMap, (int32_t)v10, v11, v12);
      v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v13,
        (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom____ctor__);
      this->fields.fixedDropPointRandomList = (struct System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___o *)v13;
      p_fields = &this->fields;
      sub_1C6B9AC((CGThumbnailListItem_o *)p_fields, (int32_t)v13, v15, v16);
      v17 = BattleDropPositionRandom___c_TypeInfo;
      if ( !BattleDropPositionRandom___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDropPositionRandom___c_TypeInfo);
        v17 = BattleDropPositionRandom___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__int__o *)v17->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = BattleDropPositionRandom___c_TypeInfo;
        }
        v19 = (Il2CppObject *)v17->static_fields->__9;
        _9__5_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_DropInfo__int__TypeInfo);
        System_Func_object__int____ctor(_9__5_0, v19, Method_BattleDropPositionRandom___c__Initialize_b__5_0__, 0);
        static_fields = BattleDropPositionRandom___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Func_DropInfo__int__o *)_9__5_0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v21, v22);
      }
      v23 = System_Linq_Enumerable__GroupBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)dropInfoArray,
              (System_Func_TSource__TKey__o *)_9__5_0,
              (const MethodInfo_316581C *)Method_System_Linq_Enumerable_GroupBy_DropInfo__int___);
      v24 = BattleDropPositionRandom___c_TypeInfo;
      v25 = (System_Collections_Generic_IEnumerable_TSource__o *)v23;
      if ( !BattleDropPositionRandom___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDropPositionRandom___c_TypeInfo);
        v24 = BattleDropPositionRandom___c_TypeInfo;
      }
      _9__5_1 = (System_Func_object__int__o *)v24->static_fields->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = BattleDropPositionRandom___c_TypeInfo;
        }
        v27 = (Il2CppObject *)v24->static_fields->__9;
        _9__5_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_IGrouping_int__DropInfo___int__TypeInfo);
        System_Func_object__int____ctor(_9__5_1, v27, Method_BattleDropPositionRandom___c__Initialize_b__5_1__, 0);
        v28 = BattleDropPositionRandom___c_TypeInfo->static_fields;
        v28->__9__5_1 = (struct System_Func_IGrouping_int__DropInfo___int__o *)_9__5_1;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v28->__9__5_1, (int32_t)_9__5_1, v29, v30);
        v24 = BattleDropPositionRandom___c_TypeInfo;
      }
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = BattleDropPositionRandom___c_TypeInfo;
      }
      _9__5_2 = (System_Func_object__int__o *)v24->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = BattleDropPositionRandom___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v24->static_fields->__9;
        _9__5_2 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_IGrouping_int__DropInfo___int__TypeInfo);
        System_Func_object__int____ctor(_9__5_2, v32, Method_BattleDropPositionRandom___c__Initialize_b__5_2__, 0);
        v33 = BattleDropPositionRandom___c_TypeInfo->static_fields;
        v33->__9__5_2 = (struct System_Func_IGrouping_int__DropInfo___int__o *)_9__5_2;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v33->__9__5_2, (int32_t)_9__5_2, v34, v35);
      }
      klass = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToDictionary_object__int__int_(
                                                             v25,
                                                             (System_Func_TSource__TKey__o *)_9__5_1,
                                                             (System_Func_TSource__TElement__o *)_9__5_2,
                                                             (const MethodInfo_317BB0C *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__DropInfo___int__int___);
      v40 = v87;
      if ( !v87
        || (v87[1].klass = (Il2CppClass *)klass,
            sub_1C6B9AC((CGThumbnailListItem_o *)&v87[1], (int32_t)klass, v38, v39),
            !v9)
        || (klass = (System_Collections_Generic_List_object__o *)v9[1].klass) == 0 )
      {
        sub_1C6BC60(klass, v37);
      }
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v94,
        klass,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleDropPositionRandomSetting_PositionRandom__GetEnumerator__);
      p_monitor = (CGThumbnailListItem_o *)&v87[1].monitor;
      v95 = v94;
      v41 = 0;
      while ( 1 )
      {
        v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v95,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__MoveNext__);
        if ( !v42 )
          break;
        current = v95.fields._current;
        if ( !v95.fields._current )
          sub_1C6BC60(v42, v43);
        if ( v95.fields._current[1].klass )
        {
          v45 = v95.fields._current[1].klass;
          v46 = (System_Func_int__int__o *)p_monitor->klass;
          if ( !p_monitor->klass )
          {
            v46 = (System_Func_int__int__o *)sub_1C6BC54(System_Func_int__int__TypeInfo);
            System_Func_int__int____ctor(
              v46,
              v40,
              Method_BattleDropPositionRandom___c__DisplayClass5_0__Initialize_b__3__,
              0);
            p_monitor->klass = (CGThumbnailListItem_c *)v46;
            sub_1C6B9AC(p_monitor, (int32_t)v46, v47, v48);
          }
          v50 = System_Linq_Enumerable__Sum_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v45,
                  (System_Func_TSource__int__o *)v46,
                  (const MethodInfo_3179870 *)Method_System_Linq_Enumerable_Sum_int___);
          if ( v50 )
          {
            if ( !p_fields->fixedDropPointRandomList )
              sub_1C6BC60(0, v49);
            v91 = v50;
            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                    (System_Collections_Generic_Dictionary_int__object__o *)p_fields->fixedDropPointRandomList,
                    v41,
                    (const MethodInfo_34526E4 *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___ContainsKey__) )
            {
              fixedDropPointRandomList = (System_Collections_Generic_Dictionary_int__object__o *)p_fields->fixedDropPointRandomList;
              v52 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v52,
                (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom___ctor__);
              if ( !fixedDropPointRandomList )
                sub_1C6BC60(v53, v54);
              System_Collections_Generic_Dictionary_int__object___Add(
                fixedDropPointRandomList,
                v41,
                (Il2CppObject *)v52,
                (const MethodInfo_34524F0 *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___Add__);
              v57 = current[1].klass;
              v50 = v91;
              if ( v57 )
              {
                namespaze = v57->_1.namespaze;
                if ( (int)namespaze >= 1 )
                {
                  v59 = 0;
                  do
                  {
                    if ( v59 >= (unsigned int)namespaze )
                      sub_1C6BC68(v55);
                    if ( !*p_giftIdToGroupKeyMap )
                      sub_1C6BC60(0, v56);
                    System_Collections_Generic_Dictionary_int__int___set_Item(
                      *p_giftIdToGroupKeyMap,
                      *((_DWORD *)&v57->_1.byval_arg.data + v59),
                      v41,
                      (const MethodInfo_3449A24 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    LODWORD(namespaze) = v57->_1.namespaze;
                    ++v59;
                  }
                  while ( (__int64)v59 < (int)namespaze );
                }
              }
            }
            v60 = *(float *)&current[2].monitor;
            if ( SHIDWORD(current[3].klass) <= 0 )
              klass_high = v50;
            else
              klass_high = HIDWORD(current[3].klass);
            v89 = *((float *)&current[2].klass + 1);
            if ( !byte_4CB02B0 )
            {
              sub_1C6BA08(&System_Math_TypeInfo);
              byte_4CB02B0 = 1;
            }
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v62 = (float)v50 / (float)klass_high;
            v63 = vcvtps_s32_f32(v62);
            if ( ceilf(v62) == INFINITY )
              v63 = 0x80000000;
            v64 = (float)v63;
            v65 = v60;
            if ( v63 > 0 )
              v65 = v60 / v64;
            if ( v63 >= 1 )
            {
              v66 = 1;
              v90 = v63;
              v93 = v60 + (float)((float)(v65 * -0.5) * v64);
              v67 = *((float *)&current[2].monitor + 1);
              v68 = *(float *)&current[3].klass;
              do
              {
                if ( v66 == v63 && v50 % klass_high )
                  klass_high = v50 % klass_high;
                if ( klass_high >= 1 )
                {
                  for ( i = 0; i != klass_high; ++i )
                  {
                    v70 = *(float *)&current[1].monitor;
                    v71 = *((float *)&current[1].monitor + 1);
                    v72 = current[1].klass;
                    v73 = UnityEngine_Random__Range(-v67, v67, 0);
                    v74 = UnityEngine_Random__Range(-v68, v68, 0);
                    v75 = sub_1C6BC54(BattleDropPositionRandom_FixedDropPositionRandom_TypeInfo);
                    System_Object___ctor((Il2CppObject *)v75, 0);
                    *(_QWORD *)(v75 + 16) = v72;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v75 + 16), (int32_t)v72, v76, v77);
                    *(float *)(v75 + 24) = (float)((float)((float)((float)(v89 / (float)klass_high) * 0.5)
                                                         + (float)((float)((float)(v89 / (float)klass_high) * (float)i)
                                                                 - (float)(v89 * 0.5)))
                                                 + v70)
                                         + v73;
                    *(float *)(v75 + 28) = (float)(v93 + v71) + v74;
                    if ( !p_fields->fixedDropPointRandomList )
                      sub_1C6BC60(0, v78);
                    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                          (System_Collections_Generic_Dictionary_int__object__o *)p_fields->fixedDropPointRandomList,
                                                                          v41,
                                                                          (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___get_Item__);
                    if ( !Item )
                      sub_1C6BC60(0, v80);
                    items = Item->fields._items;
                    v84 = Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__Add__;
                    ++Item->fields._version;
                    if ( !items )
                      sub_1C6BC60(Item, v80);
                    size = Item->fields._size;
                    if ( (unsigned int)size >= LODWORD(items->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        Item,
                        (Il2CppObject *)v75,
                        *(const MethodInfo_3800974 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v86 = &items->obj.klass + size;
                      Item->fields._size = size + 1;
                      v86[4] = (Il2CppClass *)v75;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v86 + 4), v75, v81, v82);
                    }
                  }
                }
                v63 = v90;
                v50 = v91;
                ++v66;
              }
              while ( v66 <= v90 );
            }
            v40 = v87;
            ++v41;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v95,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__Dispose__);
    }
  }
}


BattleDropPositionRandom_FixedDropPositionRandom_o *BattleDropPositionRandom__RandomGetPositionDataAndRemove(
        BattleDropPositionRandom_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *giftIdToGroupKeyMap; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__object__o *fixedDropPointRandomList; // x0
  BattleDropPositionRandom_FixedDropPositionRandom_o *v8; // x19
  int32_t v9; // w20
  System_Collections_ICollection_o *self; // [xsp+0h] [xbp-30h] BYREF
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB8D49 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___TryGetValue__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__get_Item__);
    byte_4CB8D49 = 1;
  }
  value = 0;
  self = 0;
  giftIdToGroupKeyMap = this->fields.giftIdToGroupKeyMap;
  if ( !giftIdToGroupKeyMap
    || !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          giftIdToGroupKeyMap,
          giftId,
          &value,
          (const MethodInfo_344B0D0 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    return 0;
  }
  fixedDropPointRandomList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.fixedDropPointRandomList;
  if ( !fixedDropPointRandomList )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          fixedDropPointRandomList,
          value,
          (Il2CppObject **)&self,
          (const MethodInfo_3453C7C *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___TryGetValue__) )
    return 0;
  fixedDropPointRandomList = (System_Collections_Generic_Dictionary_int__object__o *)BasicHelper__IsNullOrEmpty(self, 0);
  v8 = 0;
  if ( ((unsigned __int8)fixedDropPointRandomList & 1) == 0 )
  {
    if ( self )
    {
      fixedDropPointRandomList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Random__Range_71619388(
                                                                                           0,
                                                                                           (int32_t)self[1].monitor,
                                                                                           0);
      if ( self )
      {
        v9 = (int)fixedDropPointRandomList;
        fixedDropPointRandomList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                             (System_Collections_Generic_List_object__o *)self,
                                                                                             (int32_t)fixedDropPointRandomList,
                                                                                             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__get_Item__);
        if ( self )
        {
          v8 = (BattleDropPositionRandom_FixedDropPositionRandom_o *)fixedDropPointRandomList;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)self,
            v9,
            (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__RemoveAt__);
          return v8;
        }
      }
    }
LABEL_14:
    sub_1C6BC60(fixedDropPointRandomList, v6);
  }
  return v8;
}


System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___o *BattleDropPositionRandom__get_FixedDropPointRandomList(
        BattleDropPositionRandom_o *this,
        const MethodInfo *method)
{
  return this->fields.fixedDropPointRandomList;
}


void BattleDropPositionRandom_FixedDropPositionRandom___ctor(
        BattleDropPositionRandom_FixedDropPositionRandom_o *this,
        System_Int32_array *idArray,
        float x,
        float y,
        const MethodInfo *method)
{
  BattleDropPositionRandom_FixedDropPositionRandom_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.giftIdArray = idArray;
  v8 = (BattleDropPositionRandom_FixedDropPositionRandom_o *)((char *)v8 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)v8, (int32_t)idArray, v9, v10);
  *(float *)&v8->monitor = x;
  *((float *)&v8->monitor + 1) = y;
}


void BattleDropPositionRandom___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB8D4A & 1) == 0 )
  {
    sub_1C6BA08(&BattleDropPositionRandom___c_TypeInfo);
    byte_4CB8D4A = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleDropPositionRandom___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleDropPositionRandom___c_TypeInfo->static_fields->__9 = (struct BattleDropPositionRandom___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleDropPositionRandom___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleDropPositionRandom___c___ctor(BattleDropPositionRandom___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleDropPositionRandom___c___Initialize_b__5_0(
        BattleDropPositionRandom___c_o *this,
        DropInfo_o *dropInfo,
        const MethodInfo *method)
{
  if ( !dropInfo )
    sub_1C6BC60(this, 0);
  return dropInfo->fields.mstGiftId;
}


int32_t BattleDropPositionRandom___c___Initialize_b__5_1(
        BattleDropPositionRandom___c_o *this,
        System_Linq_IGrouping_int__DropInfo__o *g,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__DropInfo__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4CB8D4B & 1) == 0 )
  {
    this = (BattleDropPositionRandom___c_o *)sub_1C6BA08(&System_Linq_IGrouping_int__DropInfo__TypeInfo);
    byte_4CB8D4B = 1;
  }
  if ( !g )
    sub_1C6BC60(this, g);
  klass = g->klass;
  v5 = *(unsigned __int16 *)&g->klass->_2.rank;
  if ( *(_WORD *)&g->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__DropInfo__c **)p_offset - 1) != System_Linq_IGrouping_int__DropInfo__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C41D90(g, System_Linq_IGrouping_int__DropInfo__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__DropInfo__o *, _QWORD))v7)(g, *(_QWORD *)(v7 + 8));
}


int32_t BattleDropPositionRandom___c___Initialize_b__5_2(
        BattleDropPositionRandom___c_o *this,
        System_Linq_IGrouping_int__DropInfo__o *g,
        const MethodInfo *method)
{
  if ( (byte_4CB8D4C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_DropInfo___);
    byte_4CB8D4C = 1;
  }
  return System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)g,
           (const MethodInfo_315B7CC *)Method_System_Linq_Enumerable_Count_DropInfo___);
}


void BattleDropPositionRandom___c__DisplayClass5_0___ctor(
        BattleDropPositionRandom___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleDropPositionRandom___c__DisplayClass5_0___Initialize_b__3(
        BattleDropPositionRandom___c__DisplayClass5_0_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  if ( (byte_4CB8D4D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_int__int___);
    byte_4CB8D4D = 1;
  }
  return System_Collections_Generic_CollectionExtensions__GetValueOrDefault_int__int_(
           (System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)this->fields.giftIdCountDict,
           giftId,
           0,
           (const MethodInfo_312F168 *)Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_int__int___);
}