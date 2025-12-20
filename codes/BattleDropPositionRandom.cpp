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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_Dictionary_int__object__o *v17; // x24
  BattleDropPositionRandom_Fields *p_fields; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  BattleDropPositionRandom___c_c *v25; // x0
  System_Func_object__int__o *_9__5_0; // x24
  Il2CppObject *v27; // x25
  struct BattleDropPositionRandom___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v35; // x0
  BattleDropPositionRandom___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x22
  System_Func_object__int__o *_9__5_1; // x24
  Il2CppObject *v39; // x25
  struct BattleDropPositionRandom___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Func_object__int__o *_9__5_2; // x25
  Il2CppObject *v48; // x26
  struct BattleDropPositionRandom___c_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_Collections_Generic_List_object__o *klass; // x0
  __int64 v57; // x1
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  Il2CppObject *v64; // x22
  int32_t v65; // w23
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject *current; // x29
  Il2CppClass *v69; // x24
  System_Func_int__int__o *v70; // x26
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  __int64 v77; // x1
  int32_t v78; // w27
  System_Collections_Generic_Dictionary_int__object__o *fixedDropPointRandomList; // x27
  System_Collections_Generic_List_object__o *v80; // x28
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x0
  __int64 v84; // x1
  Il2CppClass *v85; // x22
  const char *namespaze; // x8
  unsigned __int64 v87; // x24
  float v88; // s8
  int klass_high; // w24
  float v90; // s0
  int v91; // w8
  float v92; // s0
  float v93; // s1
  int v94; // w22
  float v95; // s10
  float v96; // s11
  int i; // w26
  float v98; // s9
  float v99; // s15
  Il2CppClass *v100; // x28
  float v101; // s12
  float v102; // s13
  __int64 v103; // x27
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  __int64 v110; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v112; // x1
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  struct System_Object_array *items; // x8
  _QWORD *v120; // x9
  __int64 size; // x10
  Il2CppClass **v122; // x8
  Il2CppObject *v123; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_Dictionary_int__int__o **p_giftIdToGroupKeyMap; // [xsp+18h] [xbp-108h]
  float v125; // [xsp+24h] [xbp-FCh]
  int v126; // [xsp+28h] [xbp-F8h]
  int32_t v127; // [xsp+2Ch] [xbp-F4h]
  GrandQuestFolderBoardItem_o *p_monitor; // [xsp+30h] [xbp-F0h]
  float v129; // [xsp+38h] [xbp-E8h]
  System_Collections_Generic_List_Enumerator_object__o v130; // [xsp+48h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v131; // [xsp+60h] [xbp-C0h] BYREF

  if ( (byte_4D2F32C & 1) == 0 )
  {
    sub_1C94098(&BattleDropPositionRandomSetting_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___TypeInfo);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_GroupBy_DropInfo__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Sum_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__DropInfo___int__int___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__get_Current__);
    sub_1C94098(&BattleDropPositionRandom_FixedDropPositionRandom_TypeInfo);
    sub_1C94098(&System_Func_int__int__TypeInfo);
    sub_1C94098(&System_Func_IGrouping_int__DropInfo___int__TypeInfo);
    sub_1C94098(&System_Func_DropInfo__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropPositionRandomSetting_PositionRandom__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_BattleDropPositionRandom___c__Initialize_b__5_0__);
    sub_1C94098(&Method_BattleDropPositionRandom___c__Initialize_b__5_1__);
    sub_1C94098(&Method_BattleDropPositionRandom___c__Initialize_b__5_2__);
    sub_1C94098(&Method_BattleDropPositionRandom___c__DisplayClass5_0__Initialize_b__3__);
    sub_1C94098(&BattleDropPositionRandom___c__DisplayClass5_0_TypeInfo);
    sub_1C94098(&BattleDropPositionRandom___c_TypeInfo);
    byte_4D2F32C = 1;
  }
  memset(&v131, 0, sizeof(v131));
  v7 = (Il2CppObject *)sub_1C942E4(BattleDropPositionRandom___c__DisplayClass5_0_TypeInfo);
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
      v123 = v7;
      v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v10,
        (const MethodInfo_34AB458 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      this->fields.giftIdToGroupKeyMap = v10;
      p_giftIdToGroupKeyMap = &this->fields.giftIdToGroupKeyMap;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.giftIdToGroupKeyMap,
        (int32_t)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v17,
        (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom____ctor__);
      this->fields.fixedDropPointRandomList = (struct System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___o *)v17;
      p_fields = &this->fields;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)p_fields, (int32_t)v17, v19, v20, v21, v22, v23, v24);
      v25 = BattleDropPositionRandom___c_TypeInfo;
      if ( !BattleDropPositionRandom___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDropPositionRandom___c_TypeInfo);
        v25 = BattleDropPositionRandom___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__int__o *)v25->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = BattleDropPositionRandom___c_TypeInfo;
        }
        v27 = (Il2CppObject *)v25->static_fields->__9;
        _9__5_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_DropInfo__int__TypeInfo);
        System_Func_object__int____ctor(_9__5_0, v27, Method_BattleDropPositionRandom___c__Initialize_b__5_0__, 0);
        static_fields = BattleDropPositionRandom___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Func_DropInfo__int__o *)_9__5_0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0,
          (int32_t)_9__5_0,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
      v35 = System_Linq_Enumerable__GroupBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)dropInfoArray,
              (System_Func_TSource__TKey__o *)_9__5_0,
              (const MethodInfo_31C6880 *)Method_System_Linq_Enumerable_GroupBy_DropInfo__int___);
      v36 = BattleDropPositionRandom___c_TypeInfo;
      v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v35;
      if ( !BattleDropPositionRandom___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDropPositionRandom___c_TypeInfo);
        v36 = BattleDropPositionRandom___c_TypeInfo;
      }
      _9__5_1 = (System_Func_object__int__o *)v36->static_fields->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v36 = BattleDropPositionRandom___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v36->static_fields->__9;
        _9__5_1 = (System_Func_object__int__o *)sub_1C942E4(System_Func_IGrouping_int__DropInfo___int__TypeInfo);
        System_Func_object__int____ctor(_9__5_1, v39, Method_BattleDropPositionRandom___c__Initialize_b__5_1__, 0);
        v40 = BattleDropPositionRandom___c_TypeInfo->static_fields;
        v40->__9__5_1 = (struct System_Func_IGrouping_int__DropInfo___int__o *)_9__5_1;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v40->__9__5_1, (int32_t)_9__5_1, v41, v42, v43, v44, v45, v46);
        v36 = BattleDropPositionRandom___c_TypeInfo;
      }
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = BattleDropPositionRandom___c_TypeInfo;
      }
      _9__5_2 = (System_Func_object__int__o *)v36->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v36 = BattleDropPositionRandom___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v36->static_fields->__9;
        _9__5_2 = (System_Func_object__int__o *)sub_1C942E4(System_Func_IGrouping_int__DropInfo___int__TypeInfo);
        System_Func_object__int____ctor(_9__5_2, v48, Method_BattleDropPositionRandom___c__Initialize_b__5_2__, 0);
        v49 = BattleDropPositionRandom___c_TypeInfo->static_fields;
        v49->__9__5_2 = (struct System_Func_IGrouping_int__DropInfo___int__o *)_9__5_2;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v49->__9__5_2, (int32_t)_9__5_2, v50, v51, v52, v53, v54, v55);
      }
      klass = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToDictionary_object__int__int_(
                                                             v37,
                                                             (System_Func_TSource__TKey__o *)_9__5_1,
                                                             (System_Func_TSource__TElement__o *)_9__5_2,
                                                             (const MethodInfo_31DD170 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__DropInfo___int__int___);
      v64 = v123;
      if ( !v123
        || (v123[1].klass = (Il2CppClass *)klass,
            sub_1C9403C((GrandQuestFolderBoardItem_o *)&v123[1], (int32_t)klass, v58, v59, v60, v61, v62, v63),
            !v9)
        || (klass = (System_Collections_Generic_List_object__o *)v9[1].klass) == 0 )
      {
        sub_1C942F0(klass, v57);
      }
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v130,
        klass,
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_BattleDropPositionRandomSetting_PositionRandom__GetEnumerator__);
      p_monitor = (GrandQuestFolderBoardItem_o *)&v123[1].monitor;
      v131 = v130;
      v65 = 0;
      while ( 1 )
      {
        v66 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v131,
                (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__MoveNext__);
        if ( !v66 )
          break;
        current = v131.fields._current;
        if ( !v131.fields._current )
          sub_1C942F0(v66, v67);
        if ( v131.fields._current[1].klass )
        {
          v69 = v131.fields._current[1].klass;
          v70 = (System_Func_int__int__o *)p_monitor->klass;
          if ( !p_monitor->klass )
          {
            v70 = (System_Func_int__int__o *)sub_1C942E4(System_Func_int__int__TypeInfo);
            System_Func_int__int____ctor(
              v70,
              v64,
              Method_BattleDropPositionRandom___c__DisplayClass5_0__Initialize_b__3__,
              0);
            p_monitor->klass = (GrandQuestFolderBoardItem_c *)v70;
            sub_1C9403C(p_monitor, (int32_t)v70, v71, v72, v73, v74, v75, v76);
          }
          v78 = System_Linq_Enumerable__Sum_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v69,
                  (System_Func_TSource__int__o *)v70,
                  (const MethodInfo_31DAED4 *)Method_System_Linq_Enumerable_Sum_int___);
          if ( v78 )
          {
            if ( !p_fields->fixedDropPointRandomList )
              sub_1C942F0(0, v77);
            v127 = v78;
            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                    (System_Collections_Generic_Dictionary_int__object__o *)p_fields->fixedDropPointRandomList,
                    v65,
                    (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___ContainsKey__) )
            {
              fixedDropPointRandomList = (System_Collections_Generic_Dictionary_int__object__o *)p_fields->fixedDropPointRandomList;
              v80 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v80,
                (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom___ctor__);
              if ( !fixedDropPointRandomList )
                sub_1C942F0(v81, v82);
              System_Collections_Generic_Dictionary_int__object___Add(
                fixedDropPointRandomList,
                v65,
                (Il2CppObject *)v80,
                (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___Add__);
              v85 = current[1].klass;
              v78 = v127;
              if ( v85 )
              {
                namespaze = v85->_1.namespaze;
                if ( (int)namespaze >= 1 )
                {
                  v87 = 0;
                  do
                  {
                    if ( v87 >= (unsigned int)namespaze )
                      sub_1C942F8(v83);
                    if ( !*p_giftIdToGroupKeyMap )
                      sub_1C942F0(0, v84);
                    System_Collections_Generic_Dictionary_int__int___set_Item(
                      *p_giftIdToGroupKeyMap,
                      *((_DWORD *)&v85->_1.byval_arg.data + v87),
                      v65,
                      (const MethodInfo_34ABE08 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    LODWORD(namespaze) = v85->_1.namespaze;
                    ++v87;
                  }
                  while ( (__int64)v87 < (int)namespaze );
                }
              }
            }
            v88 = *(float *)&current[2].monitor;
            if ( SHIDWORD(current[3].klass) <= 0 )
              klass_high = v78;
            else
              klass_high = HIDWORD(current[3].klass);
            v125 = *((float *)&current[2].klass + 1);
            if ( !byte_4D265B8 )
            {
              sub_1C94098(&System_Math_TypeInfo);
              byte_4D265B8 = 1;
            }
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v90 = (float)v78 / (float)klass_high;
            v91 = vcvtps_s32_f32(v90);
            if ( ceilf(v90) == INFINITY )
              v91 = 0x80000000;
            v92 = (float)v91;
            v93 = v88;
            if ( v91 > 0 )
              v93 = v88 / v92;
            if ( v91 >= 1 )
            {
              v94 = 1;
              v126 = v91;
              v129 = v88 + (float)((float)(v93 * -0.5) * v92);
              v95 = *((float *)&current[2].monitor + 1);
              v96 = *(float *)&current[3].klass;
              do
              {
                if ( v94 == v91 && v78 % klass_high )
                  klass_high = v78 % klass_high;
                if ( klass_high >= 1 )
                {
                  for ( i = 0; i != klass_high; ++i )
                  {
                    v98 = *(float *)&current[1].monitor;
                    v99 = *((float *)&current[1].monitor + 1);
                    v100 = current[1].klass;
                    v101 = UnityEngine_Random__Range(-v95, v95, 0);
                    v102 = UnityEngine_Random__Range(-v96, v96, 0);
                    v103 = sub_1C942E4(BattleDropPositionRandom_FixedDropPositionRandom_TypeInfo);
                    System_Object___ctor((Il2CppObject *)v103, 0);
                    *(_QWORD *)(v103 + 16) = v100;
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)(v103 + 16),
                      (int32_t)v100,
                      v104,
                      v105,
                      v106,
                      v107,
                      v108,
                      v109);
                    *(float *)(v103 + 24) = (float)((float)((float)((float)(v125 / (float)klass_high) * 0.5)
                                                          + (float)((float)((float)(v125 / (float)klass_high) * (float)i)
                                                                  - (float)(v125 * 0.5)))
                                                  + v98)
                                          + v101;
                    *(float *)(v103 + 28) = (float)(v129 + v99) + v102;
                    if ( !p_fields->fixedDropPointRandomList )
                      sub_1C942F0(0, v110);
                    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                          (System_Collections_Generic_Dictionary_int__object__o *)p_fields->fixedDropPointRandomList,
                                                                          v65,
                                                                          (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___get_Item__);
                    if ( !Item )
                      sub_1C942F0(0, v112);
                    items = Item->fields._items;
                    v120 = Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__Add__;
                    ++Item->fields._version;
                    if ( !items )
                      sub_1C942F0(Item, v112);
                    size = Item->fields._size;
                    if ( (unsigned int)size >= LODWORD(items->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        Item,
                        (Il2CppObject *)v103,
                        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v122 = &items->obj.klass + size;
                      Item->fields._size = size + 1;
                      v122[4] = (Il2CppClass *)v103;
                      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v122 + 4), v103, v113, v114, v115, v116, v117, v118);
                    }
                  }
                }
                v91 = v126;
                v78 = v127;
                ++v94;
              }
              while ( v94 <= v126 );
            }
            v64 = v123;
            ++v65;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v131,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_BattleDropPositionRandomSetting_PositionRandom__Dispose__);
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

  if ( (byte_4D2F32D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__get_Item__);
    byte_4D2F32D = 1;
  }
  value = 0;
  self = 0;
  giftIdToGroupKeyMap = this->fields.giftIdToGroupKeyMap;
  if ( !giftIdToGroupKeyMap
    || !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          giftIdToGroupKeyMap,
          giftId,
          &value,
          (const MethodInfo_34AD4B4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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
          (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__List_BattleDropPositionRandom_FixedDropPositionRandom___TryGetValue__) )
    return 0;
  fixedDropPointRandomList = (System_Collections_Generic_Dictionary_int__object__o *)BasicHelper__IsNullOrEmpty(self, 0);
  v8 = 0;
  if ( ((unsigned __int8)fixedDropPointRandomList & 1) == 0 )
  {
    if ( self )
    {
      fixedDropPointRandomList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Random__Range_72070684(
                                                                                           0,
                                                                                           (int32_t)self[1].monitor,
                                                                                           0);
      if ( self )
      {
        v9 = (int)fixedDropPointRandomList;
        fixedDropPointRandomList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                             (System_Collections_Generic_List_object__o *)self,
                                                                                             (int32_t)fixedDropPointRandomList,
                                                                                             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__get_Item__);
        if ( self )
        {
          v8 = (BattleDropPositionRandom_FixedDropPositionRandom_o *)fixedDropPointRandomList;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)self,
            v9,
            (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_BattleDropPositionRandom_FixedDropPositionRandom__RemoveAt__);
          return v8;
        }
      }
    }
LABEL_14:
    sub_1C942F0(fixedDropPointRandomList, v6);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.giftIdArray = idArray;
  v8 = (BattleDropPositionRandom_FixedDropPositionRandom_o *)((char *)v8 + 16);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v8, (int32_t)idArray, v9, v10, v11, v12, v13, v14);
  *(float *)&v8->monitor = x;
  *((float *)&v8->monitor + 1) = y;
}


void BattleDropPositionRandom___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2F32E & 1) == 0 )
  {
    sub_1C94098(&BattleDropPositionRandom___c_TypeInfo);
    byte_4D2F32E = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BattleDropPositionRandom___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleDropPositionRandom___c_TypeInfo->static_fields->__9 = (struct BattleDropPositionRandom___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattleDropPositionRandom___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C942F0(this, 0);
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

  if ( (byte_4D2F32F & 1) == 0 )
  {
    this = (BattleDropPositionRandom___c_o *)sub_1C94098(&System_Linq_IGrouping_int__DropInfo__TypeInfo);
    byte_4D2F32F = 1;
  }
  if ( !g )
    sub_1C942F0(this, g);
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
    v7 = sub_1C6A420(g, System_Linq_IGrouping_int__DropInfo__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__DropInfo__o *, _QWORD))v7)(g, *(_QWORD *)(v7 + 8));
}


int32_t BattleDropPositionRandom___c___Initialize_b__5_2(
        BattleDropPositionRandom___c_o *this,
        System_Linq_IGrouping_int__DropInfo__o *g,
        const MethodInfo *method)
{
  if ( (byte_4D2F330 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Count_DropInfo___);
    byte_4D2F330 = 1;
  }
  return System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)g,
           (const MethodInfo_31BC830 *)Method_System_Linq_Enumerable_Count_DropInfo___);
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
  if ( (byte_4D2F331 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_int__int___);
    byte_4D2F331 = 1;
  }
  return System_Collections_Generic_CollectionExtensions__GetValueOrDefault_int__int_(
           (System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)this->fields.giftIdCountDict,
           giftId,
           0,
           (const MethodInfo_318FF34 *)Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_int__int___);
}