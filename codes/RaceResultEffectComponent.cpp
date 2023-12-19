void __fastcall RaceResultEffectComponent___ctor(RaceResultEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


Il2CppObject *__fastcall RaceResultEffectComponent__GetParam(
        RaceResultEffectComponent_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this[1].klass;
}


void __fastcall RaceResultEffectComponent__SetParam(
        RaceResultEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *v10; // x19
  iTween_array *Components_iTween; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  int v15; // w8
  unsigned int v16; // w22
  UnityEngine_GameObject_o *v17; // x0
  int max_length; // w8
  iTween_array *v19; // x20
  __int64 v20; // x24
  iTween_o *v21; // x0

  if ( (byte_40F8283 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponents_EffectSubComponent___, param);
    byte_40F8283 = 1;
  }
  this[1].klass = (RaceResultEffectComponent_c *)param;
  v10 = (BattleServantConfConponent_o *)&this[1];
  sub_B16F98(v10, (System_Int32_array **)param, (System_String_array **)method, v3, v4, v5, v6, v7);
  v14 = *(_QWORD *)&v10[-1].fields.isOpenAfter;
  if ( !v14 )
LABEL_17:
    sub_B170D4();
  v15 = *(_DWORD *)(v14 + 24);
  if ( v15 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= v15 )
        goto LABEL_16;
      v17 = *(UnityEngine_GameObject_o **)(v14 + 8LL * (int)v16 + 32);
      if ( !v17 )
        goto LABEL_17;
      Components_iTween = UnityEngine_GameObject__GetComponents_iTween_(
                            v17,
                            (const MethodInfo_19D178C *)Method_UnityEngine_GameObject_GetComponents_EffectSubComponent___);
      if ( Components_iTween )
      {
        max_length = Components_iTween->max_length;
        v19 = Components_iTween;
        if ( max_length >= 1 )
          break;
      }
LABEL_14:
      v15 = *(_DWORD *)(v14 + 24);
      if ( (int)++v16 >= v15 )
        return;
    }
    v20 = 0LL;
    while ( (unsigned int)v20 < max_length )
    {
      v21 = v19->m_Items[v20];
      if ( !v21 )
        goto LABEL_17;
      Components_iTween = (iTween_array *)((__int64 (__fastcall *)(iTween_o *, BattleServantConfConponent_c *, const char *))v21->klass[1]._1.gc_desc)(
                                            v21,
                                            v10->klass,
                                            v21->klass[1]._1.name);
      max_length = v19->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_B17100(Components_iTween, v12, v13);
    sub_B170A0();
  }
}