//==============================================================================
// Copyright (c) 2010-2016 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  PublicCounterDefinitions for DX11GFX7
//==============================================================================

#include "PublicCounterDefsDX11Gfx7.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

void AutoDefinePublicCountersDX11Gfx7(GPA_PublicCounters& p)
{
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36851);

        p.DefinePublicCounter("GPUTime", "#Timing#Time this API call took to execute on the GPU in milliseconds. Does not include time that draw calls are processed in parallel.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, GPA_COUNTER_TYPE_API_DYNAMIC, internalCounters, "0,TS_FREQ,/,(1000),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7886);
        internalCounters.push_back(7884);

        p.DefinePublicCounter("GPUBusy", "#Timing#The percentage of time GPU was busy.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/,(100),*,(100),min");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(35857);
        internalCounters.push_back(35997);
        internalCounters.push_back(36137);
        internalCounters.push_back(36277);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("TessellatorBusy", "#Timing#The percentage of time the tessellation engine is busy.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,max,2,max,3,max,4,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10306);
        internalCounters.push_back(10492);
        internalCounters.push_back(10678);
        internalCounters.push_back(10864);
        internalCounters.push_back(10331);
        internalCounters.push_back(10517);
        internalCounters.push_back(10703);
        internalCounters.push_back(10889);
        internalCounters.push_back(10353);
        internalCounters.push_back(10539);
        internalCounters.push_back(10725);
        internalCounters.push_back(10911);
        internalCounters.push_back(10375);
        internalCounters.push_back(10561);
        internalCounters.push_back(10747);
        internalCounters.push_back(10933);
        internalCounters.push_back(10315);
        internalCounters.push_back(10501);
        internalCounters.push_back(10687);
        internalCounters.push_back(10873);
        internalCounters.push_back(10337);
        internalCounters.push_back(10523);
        internalCounters.push_back(10709);
        internalCounters.push_back(10895);
        internalCounters.push_back(10359);
        internalCounters.push_back(10545);
        internalCounters.push_back(10731);
        internalCounters.push_back(10917);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("VSBusy", "#Timing#The percentage of time the ShaderUnit has vertex shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,16,ifnotzero,4,20,ifnotzero,8,24,ifnotzero,(0),1,17,ifnotzero,5,21,ifnotzero,9,25,ifnotzero,max,(0),2,18,ifnotzero,6,22,ifnotzero,10,26,ifnotzero,max,(0),3,19,ifnotzero,7,23,ifnotzero,11,27,ifnotzero,max,28,/,(100),*,(100),min");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36851);
        internalCounters.push_back(10306);
        internalCounters.push_back(10492);
        internalCounters.push_back(10678);
        internalCounters.push_back(10864);
        internalCounters.push_back(10331);
        internalCounters.push_back(10517);
        internalCounters.push_back(10703);
        internalCounters.push_back(10889);
        internalCounters.push_back(10353);
        internalCounters.push_back(10539);
        internalCounters.push_back(10725);
        internalCounters.push_back(10911);
        internalCounters.push_back(10375);
        internalCounters.push_back(10561);
        internalCounters.push_back(10747);
        internalCounters.push_back(10933);
        internalCounters.push_back(10315);
        internalCounters.push_back(10501);
        internalCounters.push_back(10687);
        internalCounters.push_back(10873);
        internalCounters.push_back(10337);
        internalCounters.push_back(10523);
        internalCounters.push_back(10709);
        internalCounters.push_back(10895);
        internalCounters.push_back(10359);
        internalCounters.push_back(10545);
        internalCounters.push_back(10731);
        internalCounters.push_back(10917);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("VSTime", "#Timing#Time vertex shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),1,17,ifnotzero,5,21,ifnotzero,9,25,ifnotzero,(0),2,18,ifnotzero,6,22,ifnotzero,10,26,ifnotzero,max,(0),3,19,ifnotzero,7,23,ifnotzero,11,27,ifnotzero,max,(0),4,20,ifnotzero,8,24,ifnotzero,12,28,ifnotzero,max,29,/,(1),min,0,TS_FREQ,/,(1000),*,*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10343);
        internalCounters.push_back(10529);
        internalCounters.push_back(10715);
        internalCounters.push_back(10901);
        internalCounters.push_back(10349);
        internalCounters.push_back(10535);
        internalCounters.push_back(10721);
        internalCounters.push_back(10907);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("HSBusy", "#Timing#The percentage of time the ShaderUnit has hull shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36851);
        internalCounters.push_back(10343);
        internalCounters.push_back(10529);
        internalCounters.push_back(10715);
        internalCounters.push_back(10901);
        internalCounters.push_back(10349);
        internalCounters.push_back(10535);
        internalCounters.push_back(10721);
        internalCounters.push_back(10907);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("HSTime", "#Timing#Time hull shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000),*,*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10306);
        internalCounters.push_back(10492);
        internalCounters.push_back(10678);
        internalCounters.push_back(10864);
        internalCounters.push_back(10331);
        internalCounters.push_back(10517);
        internalCounters.push_back(10703);
        internalCounters.push_back(10889);
        internalCounters.push_back(10375);
        internalCounters.push_back(10561);
        internalCounters.push_back(10747);
        internalCounters.push_back(10933);
        internalCounters.push_back(10337);
        internalCounters.push_back(10523);
        internalCounters.push_back(10709);
        internalCounters.push_back(10895);
        internalCounters.push_back(10359);
        internalCounters.push_back(10545);
        internalCounters.push_back(10731);
        internalCounters.push_back(10917);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("DSBusy", "#Timing#The percentage of time the ShaderUnit has domain shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,4,12,ifnotzero,16,ifnotzero,(0),1,5,13,ifnotzero,17,ifnotzero,max,(0),2,6,14,ifnotzero,18,ifnotzero,max,(0),3,7,15,ifnotzero,19,ifnotzero,max,20,/,(100),*,(100),min");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36851);
        internalCounters.push_back(10306);
        internalCounters.push_back(10492);
        internalCounters.push_back(10678);
        internalCounters.push_back(10864);
        internalCounters.push_back(10331);
        internalCounters.push_back(10517);
        internalCounters.push_back(10703);
        internalCounters.push_back(10889);
        internalCounters.push_back(10375);
        internalCounters.push_back(10561);
        internalCounters.push_back(10747);
        internalCounters.push_back(10933);
        internalCounters.push_back(10337);
        internalCounters.push_back(10523);
        internalCounters.push_back(10709);
        internalCounters.push_back(10895);
        internalCounters.push_back(10359);
        internalCounters.push_back(10545);
        internalCounters.push_back(10731);
        internalCounters.push_back(10917);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("DSTime", "#Timing#Time domain shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),1,5,13,ifnotzero,17,ifnotzero,(0),2,6,14,ifnotzero,18,ifnotzero,max,(0),3,7,15,ifnotzero,19,ifnotzero,max,(0),4,8,16,ifnotzero,20,ifnotzero,max,21,/,(1),min,0,TS_FREQ,/,(1000),*,*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10322);
        internalCounters.push_back(10508);
        internalCounters.push_back(10694);
        internalCounters.push_back(10880);
        internalCounters.push_back(10325);
        internalCounters.push_back(10511);
        internalCounters.push_back(10697);
        internalCounters.push_back(10883);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("GSBusy", "#Timing#The percentage of time the ShaderUnit has geometry shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36851);
        internalCounters.push_back(10322);
        internalCounters.push_back(10508);
        internalCounters.push_back(10694);
        internalCounters.push_back(10880);
        internalCounters.push_back(10325);
        internalCounters.push_back(10511);
        internalCounters.push_back(10697);
        internalCounters.push_back(10883);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("GSTime", "#Timing#Time geometry shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000),*,*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10375);
        internalCounters.push_back(10561);
        internalCounters.push_back(10747);
        internalCounters.push_back(10933);
        internalCounters.push_back(10380);
        internalCounters.push_back(10566);
        internalCounters.push_back(10752);
        internalCounters.push_back(10938);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("PSBusy", "#Timing#The percentage of time the ShaderUnit has pixel shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36851);
        internalCounters.push_back(10375);
        internalCounters.push_back(10561);
        internalCounters.push_back(10747);
        internalCounters.push_back(10933);
        internalCounters.push_back(10380);
        internalCounters.push_back(10566);
        internalCounters.push_back(10752);
        internalCounters.push_back(10938);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("PSTime", "#Timing#Time pixel shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,0,TS_FREQ,/,(1000),*,*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10363);
        internalCounters.push_back(10549);
        internalCounters.push_back(10735);
        internalCounters.push_back(10921);
        internalCounters.push_back(10367);
        internalCounters.push_back(10553);
        internalCounters.push_back(10739);
        internalCounters.push_back(10925);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("CSBusy", "#Timing#The percentage of time the ShaderUnit has compute shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(36851);
        internalCounters.push_back(10363);
        internalCounters.push_back(10549);
        internalCounters.push_back(10735);
        internalCounters.push_back(10921);
        internalCounters.push_back(10367);
        internalCounters.push_back(10553);
        internalCounters.push_back(10739);
        internalCounters.push_back(10925);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("CSTime", "#Timing#Time compute shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000),*,*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(35752);
        internalCounters.push_back(35892);
        internalCounters.push_back(36032);
        internalCounters.push_back(36172);
        internalCounters.push_back(35733);
        internalCounters.push_back(35873);
        internalCounters.push_back(36013);
        internalCounters.push_back(36153);
        internalCounters.push_back(35828);
        internalCounters.push_back(35968);
        internalCounters.push_back(36108);
        internalCounters.push_back(36248);

        p.DefinePublicCounter("VSVerticesIn", "#VertexShader#The number of vertices processed by the VS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,8,9,10,11,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14099);
        internalCounters.push_back(14351);
        internalCounters.push_back(14603);
        internalCounters.push_back(14855);
        internalCounters.push_back(14077);
        internalCounters.push_back(14329);
        internalCounters.push_back(14581);
        internalCounters.push_back(14833);
        internalCounters.push_back(12083);
        internalCounters.push_back(12335);
        internalCounters.push_back(12587);
        internalCounters.push_back(12839);
        internalCounters.push_back(12061);
        internalCounters.push_back(12313);
        internalCounters.push_back(12565);
        internalCounters.push_back(12817);
        internalCounters.push_back(12071);
        internalCounters.push_back(12323);
        internalCounters.push_back(12575);
        internalCounters.push_back(12827);
        internalCounters.push_back(16115);
        internalCounters.push_back(16367);
        internalCounters.push_back(16619);
        internalCounters.push_back(16871);
        internalCounters.push_back(16093);
        internalCounters.push_back(16345);
        internalCounters.push_back(16597);
        internalCounters.push_back(16849);
        internalCounters.push_back(16103);
        internalCounters.push_back(16355);
        internalCounters.push_back(16607);
        internalCounters.push_back(16859);

        p.DefinePublicCounter("VSVALUInstCount", "#VertexShader#Average number of vector ALU instructions executed in the VS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,24,25,26,27,sum4,/,28,29,30,31,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14103);
        internalCounters.push_back(14355);
        internalCounters.push_back(14607);
        internalCounters.push_back(14859);
        internalCounters.push_back(14077);
        internalCounters.push_back(14329);
        internalCounters.push_back(14581);
        internalCounters.push_back(14833);
        internalCounters.push_back(12087);
        internalCounters.push_back(12339);
        internalCounters.push_back(12591);
        internalCounters.push_back(12843);
        internalCounters.push_back(12061);
        internalCounters.push_back(12313);
        internalCounters.push_back(12565);
        internalCounters.push_back(12817);
        internalCounters.push_back(12071);
        internalCounters.push_back(12323);
        internalCounters.push_back(12575);
        internalCounters.push_back(12827);
        internalCounters.push_back(16119);
        internalCounters.push_back(16371);
        internalCounters.push_back(16623);
        internalCounters.push_back(16875);
        internalCounters.push_back(16093);
        internalCounters.push_back(16345);
        internalCounters.push_back(16597);
        internalCounters.push_back(16849);
        internalCounters.push_back(16103);
        internalCounters.push_back(16355);
        internalCounters.push_back(16607);
        internalCounters.push_back(16859);

        p.DefinePublicCounter("VSSALUInstCount", "#VertexShader#Average number of scalar ALU instructions executed in the VS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,24,25,26,27,sum4,/,28,29,30,31,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14154);
        internalCounters.push_back(14406);
        internalCounters.push_back(14658);
        internalCounters.push_back(14910);
        internalCounters.push_back(12138);
        internalCounters.push_back(12390);
        internalCounters.push_back(12642);
        internalCounters.push_back(12894);
        internalCounters.push_back(12071);
        internalCounters.push_back(12323);
        internalCounters.push_back(12575);
        internalCounters.push_back(12827);
        internalCounters.push_back(7886);
        internalCounters.push_back(16170);
        internalCounters.push_back(16422);
        internalCounters.push_back(16674);
        internalCounters.push_back(16926);
        internalCounters.push_back(16103);
        internalCounters.push_back(16355);
        internalCounters.push_back(16607);
        internalCounters.push_back(16859);

        p.DefinePublicCounter("VSVALUBusy", "#VertexShader#The percentage of GPUTime vector ALU instructions are being processed by the VS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,13,14,15,16,sum4,17,18,19,20,sum4,ifnotzero,(4),*,NUM_SIMDS,/,12,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14159);
        internalCounters.push_back(14411);
        internalCounters.push_back(14663);
        internalCounters.push_back(14915);
        internalCounters.push_back(12143);
        internalCounters.push_back(12395);
        internalCounters.push_back(12647);
        internalCounters.push_back(12899);
        internalCounters.push_back(12071);
        internalCounters.push_back(12323);
        internalCounters.push_back(12575);
        internalCounters.push_back(12827);
        internalCounters.push_back(7886);
        internalCounters.push_back(16175);
        internalCounters.push_back(16427);
        internalCounters.push_back(16679);
        internalCounters.push_back(16931);
        internalCounters.push_back(16103);
        internalCounters.push_back(16355);
        internalCounters.push_back(16607);
        internalCounters.push_back(16859);

        p.DefinePublicCounter("VSSALUBusy", "#VertexShader#The percentage of GPUTime scalar ALU instructions are being processed by the VS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,13,14,15,16,sum4,17,18,19,20,sum4,ifnotzero,(4),*,NUM_SIMDS,/,12,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(35837);
        internalCounters.push_back(35977);
        internalCounters.push_back(36117);
        internalCounters.push_back(36257);

        p.DefinePublicCounter("HSPatches", "#HullShader#The number of patches processed by the HS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(17123);
        internalCounters.push_back(17375);
        internalCounters.push_back(17627);
        internalCounters.push_back(17879);
        internalCounters.push_back(17101);
        internalCounters.push_back(17353);
        internalCounters.push_back(17605);
        internalCounters.push_back(17857);

        p.DefinePublicCounter("HSVALUInstCount", "#HullShader#Average number of vector ALU instructions executed in the HS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(17127);
        internalCounters.push_back(17379);
        internalCounters.push_back(17631);
        internalCounters.push_back(17883);
        internalCounters.push_back(17101);
        internalCounters.push_back(17353);
        internalCounters.push_back(17605);
        internalCounters.push_back(17857);

        p.DefinePublicCounter("HSSALUInstCount", "#HullShader#Average number of scalar ALU instructions executed in the HS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(17178);
        internalCounters.push_back(17430);
        internalCounters.push_back(17682);
        internalCounters.push_back(17934);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("HSVALUBusy", "#HullShader#The percentage of GPUTime vector ALU instructions are being processed by the HS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(17183);
        internalCounters.push_back(17435);
        internalCounters.push_back(17687);
        internalCounters.push_back(17939);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("HSSALUBusy", "#HullShader#The percentage of GPUTime scalar ALU instructions are being processed by the HS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(35752);
        internalCounters.push_back(35892);
        internalCounters.push_back(36032);
        internalCounters.push_back(36172);
        internalCounters.push_back(35733);
        internalCounters.push_back(35873);
        internalCounters.push_back(36013);
        internalCounters.push_back(36153);
        internalCounters.push_back(35828);
        internalCounters.push_back(35968);
        internalCounters.push_back(36108);
        internalCounters.push_back(36248);

        p.DefinePublicCounter("DSVerticesIn", "#DomainShader#The number of vertices processed by the DS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14099);
        internalCounters.push_back(14351);
        internalCounters.push_back(14603);
        internalCounters.push_back(14855);
        internalCounters.push_back(14077);
        internalCounters.push_back(14329);
        internalCounters.push_back(14581);
        internalCounters.push_back(14833);
        internalCounters.push_back(12083);
        internalCounters.push_back(12335);
        internalCounters.push_back(12587);
        internalCounters.push_back(12839);
        internalCounters.push_back(12061);
        internalCounters.push_back(12313);
        internalCounters.push_back(12565);
        internalCounters.push_back(12817);
        internalCounters.push_back(12071);
        internalCounters.push_back(12323);
        internalCounters.push_back(12575);
        internalCounters.push_back(12827);
        internalCounters.push_back(16103);
        internalCounters.push_back(16355);
        internalCounters.push_back(16607);
        internalCounters.push_back(16859);

        p.DefinePublicCounter("DSVALUInstCount", "#DomainShader#Average number of vector ALU instructions executed in the DS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14103);
        internalCounters.push_back(14355);
        internalCounters.push_back(14607);
        internalCounters.push_back(14859);
        internalCounters.push_back(14077);
        internalCounters.push_back(14329);
        internalCounters.push_back(14581);
        internalCounters.push_back(14833);
        internalCounters.push_back(12087);
        internalCounters.push_back(12339);
        internalCounters.push_back(12591);
        internalCounters.push_back(12843);
        internalCounters.push_back(12061);
        internalCounters.push_back(12313);
        internalCounters.push_back(12565);
        internalCounters.push_back(12817);
        internalCounters.push_back(12071);
        internalCounters.push_back(12323);
        internalCounters.push_back(12575);
        internalCounters.push_back(12827);
        internalCounters.push_back(16103);
        internalCounters.push_back(16355);
        internalCounters.push_back(16607);
        internalCounters.push_back(16859);

        p.DefinePublicCounter("DSSALUInstCount", "#DomainShader#Average number of scalar ALU instructions executed in the DS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14154);
        internalCounters.push_back(14406);
        internalCounters.push_back(14658);
        internalCounters.push_back(14910);
        internalCounters.push_back(12138);
        internalCounters.push_back(12390);
        internalCounters.push_back(12642);
        internalCounters.push_back(12894);
        internalCounters.push_back(7886);
        internalCounters.push_back(12071);
        internalCounters.push_back(12323);
        internalCounters.push_back(12575);
        internalCounters.push_back(12827);
        internalCounters.push_back(16103);
        internalCounters.push_back(16355);
        internalCounters.push_back(16607);
        internalCounters.push_back(16859);

        p.DefinePublicCounter("DSVALUBusy", "#DomainShader#The percentage of GPUTime vector ALU instructions are being processed by the DS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,9,10,11,12,sum4,ifnotzero,13,14,15,16,sum4,ifnotzero,(4),*,NUM_SIMDS,/,8,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14159);
        internalCounters.push_back(14411);
        internalCounters.push_back(14663);
        internalCounters.push_back(14915);
        internalCounters.push_back(12143);
        internalCounters.push_back(12395);
        internalCounters.push_back(12647);
        internalCounters.push_back(12899);
        internalCounters.push_back(7886);
        internalCounters.push_back(12071);
        internalCounters.push_back(12323);
        internalCounters.push_back(12575);
        internalCounters.push_back(12827);
        internalCounters.push_back(16103);
        internalCounters.push_back(16355);
        internalCounters.push_back(16607);
        internalCounters.push_back(16859);

        p.DefinePublicCounter("DSSALUBusy", "#DomainShader#The percentage of GPUTime scalar ALU instructions are being processed by the DS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,9,10,11,12,sum4,ifnotzero,13,14,15,16,sum4,ifnotzero,(4),*,NUM_SIMDS,/,8,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(35741);
        internalCounters.push_back(35881);
        internalCounters.push_back(36021);
        internalCounters.push_back(36161);

        p.DefinePublicCounter("GSPrimsIn", "#GeometryShader#The number of primitives passed into the GS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(35752);
        internalCounters.push_back(35892);
        internalCounters.push_back(36032);
        internalCounters.push_back(36172);
        internalCounters.push_back(35733);
        internalCounters.push_back(35873);
        internalCounters.push_back(36013);
        internalCounters.push_back(36153);

        p.DefinePublicCounter("GSVerticesOut", "#GeometryShader#The number of vertices output by the GS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13091);
        internalCounters.push_back(13343);
        internalCounters.push_back(13595);
        internalCounters.push_back(13847);
        internalCounters.push_back(13069);
        internalCounters.push_back(13321);
        internalCounters.push_back(13573);
        internalCounters.push_back(13825);

        p.DefinePublicCounter("GSVALUInstCount", "#GeometryShader#Average number of vector ALU instructions executed in the GS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13095);
        internalCounters.push_back(13347);
        internalCounters.push_back(13599);
        internalCounters.push_back(13851);
        internalCounters.push_back(13069);
        internalCounters.push_back(13321);
        internalCounters.push_back(13573);
        internalCounters.push_back(13825);

        p.DefinePublicCounter("GSSALUInstCount", "#GeometryShader#Average number of scalar ALU instructions executed in the GS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13146);
        internalCounters.push_back(13398);
        internalCounters.push_back(13650);
        internalCounters.push_back(13902);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("GSVALUBusy", "#GeometryShader#The percentage of GPUTime vector ALU instructions are being processed by the GS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13151);
        internalCounters.push_back(13403);
        internalCounters.push_back(13655);
        internalCounters.push_back(13907);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("GSSALUBusy", "#GeometryShader#The percentage of GPUTime scalar ALU instructions are being processed by the GS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,4,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8090);
        internalCounters.push_back(8243);
        internalCounters.push_back(8396);
        internalCounters.push_back(8549);
        internalCounters.push_back(8094);
        internalCounters.push_back(8247);
        internalCounters.push_back(8400);
        internalCounters.push_back(8553);
        internalCounters.push_back(8046);
        internalCounters.push_back(8199);
        internalCounters.push_back(8352);
        internalCounters.push_back(8505);
        internalCounters.push_back(8058);
        internalCounters.push_back(8211);
        internalCounters.push_back(8364);
        internalCounters.push_back(8517);
        internalCounters.push_back(8047);
        internalCounters.push_back(8200);
        internalCounters.push_back(8353);
        internalCounters.push_back(8506);
        internalCounters.push_back(8059);
        internalCounters.push_back(8212);
        internalCounters.push_back(8365);
        internalCounters.push_back(8518);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("PrimitiveAssemblyBusy", "#Timing#The percentage of GPUTime that primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,4,-,8,12,+,16,+,20,(2),*,+,SU_CLOCKS_PRIM,*,-,1,5,-,9,13,+,17,+,21,(2),*,+,SU_CLOCKS_PRIM,*,-,max,2,6,-,10,14,+,18,+,22,(2),*,+,SU_CLOCKS_PRIM,*,-,max,3,7,-,11,15,+,19,+,23,(2),*,+,SU_CLOCKS_PRIM,*,-,max,(0),max,24,/,(100),*,(100),min");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7993);
        internalCounters.push_back(8146);
        internalCounters.push_back(8299);
        internalCounters.push_back(8452);

        p.DefinePublicCounter("PrimitivesIn", "#PrimitiveAssembly#The number of primitives received by the hardware. This includes primitives generated by tessellation.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7999);
        internalCounters.push_back(8152);
        internalCounters.push_back(8305);
        internalCounters.push_back(8458);
        internalCounters.push_back(8039);
        internalCounters.push_back(8192);
        internalCounters.push_back(8345);
        internalCounters.push_back(8498);
        internalCounters.push_back(8040);
        internalCounters.push_back(8193);
        internalCounters.push_back(8346);
        internalCounters.push_back(8499);
        internalCounters.push_back(8041);
        internalCounters.push_back(8194);
        internalCounters.push_back(8347);
        internalCounters.push_back(8500);
        internalCounters.push_back(8042);
        internalCounters.push_back(8195);
        internalCounters.push_back(8348);
        internalCounters.push_back(8501);

        p.DefinePublicCounter("CulledPrims", "#PrimitiveAssembly#The number of culled primitives. Typical reasons include scissor, the primitive having zero area, and back or front face culling.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,+,2,+,3,+,4,+,5,+,6,+,7,+,8,+,9,+,10,+,11,+,12,+,13,+,14,+,15,+,16,+,17,+,18,+,19,+");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8006);
        internalCounters.push_back(8159);
        internalCounters.push_back(8312);
        internalCounters.push_back(8465);

        p.DefinePublicCounter("ClippedPrims", "#PrimitiveAssembly#The number of primitives that required one or more clipping operations due to intersecting the view volume or user clip planes.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8094);
        internalCounters.push_back(8247);
        internalCounters.push_back(8400);
        internalCounters.push_back(8553);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("PAStalledOnRasterizer", "#PrimitiveAssembly#Percentage of GPUTime that primitive assembly waits for rasterization to be ready to accept data. This roughly indicates for what percentage of time the pipeline is bottlenecked by pixel operations.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,max,2,max,3,max,4,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10189);
        internalCounters.push_back(10221);
        internalCounters.push_back(10253);
        internalCounters.push_back(10285);
        internalCounters.push_back(10194);
        internalCounters.push_back(10226);
        internalCounters.push_back(10258);
        internalCounters.push_back(10290);
        internalCounters.push_back(10199);
        internalCounters.push_back(10231);
        internalCounters.push_back(10263);
        internalCounters.push_back(10295);
        internalCounters.push_back(10204);
        internalCounters.push_back(10236);
        internalCounters.push_back(10268);
        internalCounters.push_back(10300);

        p.DefinePublicCounter("PSPixelsOut", "#PixelShader#Pixels exported from shader to colour buffers. Does not include killed or alpha tested pixels; if there are multiple rendertargets, each rendertarget receives one export, so this will be 2 for 1 pixel written to two RTs.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,12,13,14,15,sum4,sum4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10191);
        internalCounters.push_back(10223);
        internalCounters.push_back(10255);
        internalCounters.push_back(10287);
        internalCounters.push_back(10196);
        internalCounters.push_back(10228);
        internalCounters.push_back(10260);
        internalCounters.push_back(10292);
        internalCounters.push_back(10201);
        internalCounters.push_back(10233);
        internalCounters.push_back(10265);
        internalCounters.push_back(10297);
        internalCounters.push_back(10206);
        internalCounters.push_back(10238);
        internalCounters.push_back(10270);
        internalCounters.push_back(10302);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("PSExportStalls", "#PixelShader#Pixel shader output stalls. Percentage of GPUBusy. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the colour buffer.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max,16,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15107);
        internalCounters.push_back(15359);
        internalCounters.push_back(15611);
        internalCounters.push_back(15863);
        internalCounters.push_back(15085);
        internalCounters.push_back(15337);
        internalCounters.push_back(15589);
        internalCounters.push_back(15841);

        p.DefinePublicCounter("PSVALUInstCount", "#PixelShader#Average number of vector ALU instructions executed in the PS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15111);
        internalCounters.push_back(15363);
        internalCounters.push_back(15615);
        internalCounters.push_back(15867);
        internalCounters.push_back(15085);
        internalCounters.push_back(15337);
        internalCounters.push_back(15589);
        internalCounters.push_back(15841);

        p.DefinePublicCounter("PSSALUInstCount", "#PixelShader#Average number of scalar ALU instructions executed in the PS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15162);
        internalCounters.push_back(15414);
        internalCounters.push_back(15666);
        internalCounters.push_back(15918);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("PSVALUBusy", "#PixelShader#The percentage of GPUTime vector ALU instructions are being processed by the PS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15167);
        internalCounters.push_back(15419);
        internalCounters.push_back(15671);
        internalCounters.push_back(15923);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("PSSALUBusy", "#PixelShader#The percentage of GPUTime scalar ALU instructions are being processed by the PS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,4,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSThreadGroups", "#ComputeShader#Total number of thread groups.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10367);
        internalCounters.push_back(10553);
        internalCounters.push_back(10739);
        internalCounters.push_back(10925);

        p.DefinePublicCounter("CSWavefronts", "#ComputeShader#The total number of wavefronts used for the CS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);
        internalCounters.push_back(11063);
        internalCounters.push_back(11315);
        internalCounters.push_back(11567);
        internalCounters.push_back(11819);

        p.DefinePublicCounter("CSThreads", "#ComputeShader#The number of CS threads processed by the hardware.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),4,5,6,7,sum4,0,1,2,3,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(18131);
        internalCounters.push_back(18383);
        internalCounters.push_back(18635);
        internalCounters.push_back(18887);
        internalCounters.push_back(18109);
        internalCounters.push_back(18361);
        internalCounters.push_back(18613);
        internalCounters.push_back(18865);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSVALUInsts", "#ComputeShader#The average number of vector ALU instructions executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(18194);
        internalCounters.push_back(18446);
        internalCounters.push_back(18698);
        internalCounters.push_back(18950);
        internalCounters.push_back(18186);
        internalCounters.push_back(18438);
        internalCounters.push_back(18690);
        internalCounters.push_back(18942);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSVALUUtilization", "#ComputeShader#The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,(64),*,/,(100),*,8,9,10,11,sum4,ifnotzero,(100),min");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(18135);
        internalCounters.push_back(18387);
        internalCounters.push_back(18639);
        internalCounters.push_back(18891);
        internalCounters.push_back(18109);
        internalCounters.push_back(18361);
        internalCounters.push_back(18613);
        internalCounters.push_back(18865);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSSALUInsts", "#ComputeShader#The average number of scalar ALU instructions executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(18133);
        internalCounters.push_back(18385);
        internalCounters.push_back(18637);
        internalCounters.push_back(18889);
        internalCounters.push_back(18109);
        internalCounters.push_back(18361);
        internalCounters.push_back(18613);
        internalCounters.push_back(18865);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSVFetchInsts", "#ComputeShader#The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(18136);
        internalCounters.push_back(18388);
        internalCounters.push_back(18640);
        internalCounters.push_back(18892);
        internalCounters.push_back(18109);
        internalCounters.push_back(18361);
        internalCounters.push_back(18613);
        internalCounters.push_back(18865);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSSFetchInsts", "#ComputeShader#The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(18132);
        internalCounters.push_back(18384);
        internalCounters.push_back(18636);
        internalCounters.push_back(18888);
        internalCounters.push_back(18109);
        internalCounters.push_back(18361);
        internalCounters.push_back(18613);
        internalCounters.push_back(18865);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSVWriteInsts", "#ComputeShader#The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(18139);
        internalCounters.push_back(18391);
        internalCounters.push_back(18643);
        internalCounters.push_back(18895);
        internalCounters.push_back(18138);
        internalCounters.push_back(18390);
        internalCounters.push_back(18642);
        internalCounters.push_back(18894);
        internalCounters.push_back(18109);
        internalCounters.push_back(18361);
        internalCounters.push_back(18613);
        internalCounters.push_back(18865);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSFlatVMemInsts", "#ComputeShader#The average number of FLAT instructions that read from or write to the video memory executed per work item (affected by flow control). Includes FLAT instructions that read from or write to scratch.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,-,8,9,10,11,sum4,/,12,13,14,15,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(18186);
        internalCounters.push_back(18438);
        internalCounters.push_back(18690);
        internalCounters.push_back(18942);
        internalCounters.push_back(7886);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSVALUBusy", "#ComputeShader#The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*,5,6,7,8,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(18191);
        internalCounters.push_back(18443);
        internalCounters.push_back(18695);
        internalCounters.push_back(18947);
        internalCounters.push_back(7886);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSSALUBusy", "#ComputeShader#The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,4,/,(100),*,5,6,7,8,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(19113);
        internalCounters.push_back(19224);
        internalCounters.push_back(19335);
        internalCounters.push_back(19446);
        internalCounters.push_back(19557);
        internalCounters.push_back(19668);
        internalCounters.push_back(19779);
        internalCounters.push_back(19890);
        internalCounters.push_back(20001);
        internalCounters.push_back(20112);
        internalCounters.push_back(20223);
        internalCounters.push_back(20334);
        internalCounters.push_back(20445);
        internalCounters.push_back(20556);
        internalCounters.push_back(20667);
        internalCounters.push_back(20778);
        internalCounters.push_back(20889);
        internalCounters.push_back(21000);
        internalCounters.push_back(21111);
        internalCounters.push_back(21222);
        internalCounters.push_back(21333);
        internalCounters.push_back(21444);
        internalCounters.push_back(21555);
        internalCounters.push_back(21666);
        internalCounters.push_back(21777);
        internalCounters.push_back(21888);
        internalCounters.push_back(21999);
        internalCounters.push_back(22110);
        internalCounters.push_back(22221);
        internalCounters.push_back(22332);
        internalCounters.push_back(22443);
        internalCounters.push_back(22554);
        internalCounters.push_back(22665);
        internalCounters.push_back(22776);
        internalCounters.push_back(22887);
        internalCounters.push_back(22998);
        internalCounters.push_back(23109);
        internalCounters.push_back(23220);
        internalCounters.push_back(23331);
        internalCounters.push_back(23442);
        internalCounters.push_back(23553);
        internalCounters.push_back(23664);
        internalCounters.push_back(23775);
        internalCounters.push_back(23886);
        internalCounters.push_back(7886);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSMemUnitBusy", "#ComputeShader#The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44,44,/,(100),*,45,46,47,48,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(26156);
        internalCounters.push_back(26310);
        internalCounters.push_back(26464);
        internalCounters.push_back(26618);
        internalCounters.push_back(26772);
        internalCounters.push_back(26926);
        internalCounters.push_back(27080);
        internalCounters.push_back(27234);
        internalCounters.push_back(27388);
        internalCounters.push_back(27542);
        internalCounters.push_back(27696);
        internalCounters.push_back(27850);
        internalCounters.push_back(28004);
        internalCounters.push_back(28158);
        internalCounters.push_back(28312);
        internalCounters.push_back(28466);
        internalCounters.push_back(28620);
        internalCounters.push_back(28774);
        internalCounters.push_back(28928);
        internalCounters.push_back(29082);
        internalCounters.push_back(29236);
        internalCounters.push_back(29390);
        internalCounters.push_back(29544);
        internalCounters.push_back(29698);
        internalCounters.push_back(29852);
        internalCounters.push_back(30006);
        internalCounters.push_back(30160);
        internalCounters.push_back(30314);
        internalCounters.push_back(30468);
        internalCounters.push_back(30622);
        internalCounters.push_back(30776);
        internalCounters.push_back(30930);
        internalCounters.push_back(31084);
        internalCounters.push_back(31238);
        internalCounters.push_back(31392);
        internalCounters.push_back(31546);
        internalCounters.push_back(31700);
        internalCounters.push_back(31854);
        internalCounters.push_back(32008);
        internalCounters.push_back(32162);
        internalCounters.push_back(32316);
        internalCounters.push_back(32470);
        internalCounters.push_back(32624);
        internalCounters.push_back(32778);
        internalCounters.push_back(7886);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSMemUnitStalled", "#ComputeShader#The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44,44,/,(100),*,45,46,47,48,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(32953);
        internalCounters.push_back(33113);
        internalCounters.push_back(33273);
        internalCounters.push_back(33433);
        internalCounters.push_back(33593);
        internalCounters.push_back(33753);
        internalCounters.push_back(33913);
        internalCounters.push_back(34073);
        internalCounters.push_back(34233);
        internalCounters.push_back(34393);
        internalCounters.push_back(34553);
        internalCounters.push_back(34713);
        internalCounters.push_back(34873);
        internalCounters.push_back(35033);
        internalCounters.push_back(35193);
        internalCounters.push_back(35353);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSFetchSize", "#ComputeShader#The total kilobytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_KILOBYTES, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,(1024),/,16,17,18,19,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(32947);
        internalCounters.push_back(33107);
        internalCounters.push_back(33267);
        internalCounters.push_back(33427);
        internalCounters.push_back(33587);
        internalCounters.push_back(33747);
        internalCounters.push_back(33907);
        internalCounters.push_back(34067);
        internalCounters.push_back(34227);
        internalCounters.push_back(34387);
        internalCounters.push_back(34547);
        internalCounters.push_back(34707);
        internalCounters.push_back(34867);
        internalCounters.push_back(35027);
        internalCounters.push_back(35187);
        internalCounters.push_back(35347);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSWriteSize", "#ComputeShader#The total kilobytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_KILOBYTES, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,(1024),/,16,17,18,19,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(32939);
        internalCounters.push_back(33099);
        internalCounters.push_back(33259);
        internalCounters.push_back(33419);
        internalCounters.push_back(33579);
        internalCounters.push_back(33739);
        internalCounters.push_back(33899);
        internalCounters.push_back(34059);
        internalCounters.push_back(34219);
        internalCounters.push_back(34379);
        internalCounters.push_back(34539);
        internalCounters.push_back(34699);
        internalCounters.push_back(34859);
        internalCounters.push_back(35019);
        internalCounters.push_back(35179);
        internalCounters.push_back(35339);
        internalCounters.push_back(32940);
        internalCounters.push_back(33100);
        internalCounters.push_back(33260);
        internalCounters.push_back(33420);
        internalCounters.push_back(33580);
        internalCounters.push_back(33740);
        internalCounters.push_back(33900);
        internalCounters.push_back(34060);
        internalCounters.push_back(34220);
        internalCounters.push_back(34380);
        internalCounters.push_back(34540);
        internalCounters.push_back(34700);
        internalCounters.push_back(34860);
        internalCounters.push_back(35020);
        internalCounters.push_back(35180);
        internalCounters.push_back(35340);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSCacheHit", "#ComputeShader#The percentage of fetch, write, atomic, and other instructions that hit the data cache. Value range: 0% (no hit) to 100% (optimal).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*,32,33,34,35,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(32948);
        internalCounters.push_back(33108);
        internalCounters.push_back(33268);
        internalCounters.push_back(33428);
        internalCounters.push_back(33588);
        internalCounters.push_back(33748);
        internalCounters.push_back(33908);
        internalCounters.push_back(34068);
        internalCounters.push_back(34228);
        internalCounters.push_back(34388);
        internalCounters.push_back(34548);
        internalCounters.push_back(34708);
        internalCounters.push_back(34868);
        internalCounters.push_back(35028);
        internalCounters.push_back(35188);
        internalCounters.push_back(35348);
        internalCounters.push_back(7886);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSWriteUnitStalled", "#ComputeShader#The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*,17,18,19,20,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(18140);
        internalCounters.push_back(18392);
        internalCounters.push_back(18644);
        internalCounters.push_back(18896);
        internalCounters.push_back(18109);
        internalCounters.push_back(18361);
        internalCounters.push_back(18613);
        internalCounters.push_back(18865);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSGDSInsts", "#ComputeShader#The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(18139);
        internalCounters.push_back(18391);
        internalCounters.push_back(18643);
        internalCounters.push_back(18895);
        internalCounters.push_back(18137);
        internalCounters.push_back(18389);
        internalCounters.push_back(18641);
        internalCounters.push_back(18893);
        internalCounters.push_back(18109);
        internalCounters.push_back(18361);
        internalCounters.push_back(18613);
        internalCounters.push_back(18865);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSLDSInsts", "#ComputeShader#The average number of LDS read/write instructions executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,-,8,9,10,11,sum4,/,12,13,14,15,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(18138);
        internalCounters.push_back(18390);
        internalCounters.push_back(18642);
        internalCounters.push_back(18894);
        internalCounters.push_back(18109);
        internalCounters.push_back(18361);
        internalCounters.push_back(18613);
        internalCounters.push_back(18865);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSFlatLDSInsts", "#ComputeShader#The average number of FLAT instructions that read from or write to LDS executed per work item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(18166);
        internalCounters.push_back(18418);
        internalCounters.push_back(18670);
        internalCounters.push_back(18922);
        internalCounters.push_back(18109);
        internalCounters.push_back(18361);
        internalCounters.push_back(18613);
        internalCounters.push_back(18865);
        internalCounters.push_back(7886);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSALUStalledByLDS", "#ComputeShader#The percentage of GPUTime ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible. Value range: 0% (optimal) to 100% (bad).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,/,NUM_SHADER_ENGINES,/,(100),*,8,9,10,11,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(18202);
        internalCounters.push_back(18454);
        internalCounters.push_back(18706);
        internalCounters.push_back(18958);
        internalCounters.push_back(7886);
        internalCounters.push_back(10364);
        internalCounters.push_back(10550);
        internalCounters.push_back(10736);
        internalCounters.push_back(10922);

        p.DefinePublicCounter("CSLDSBankConflict", "#ComputeShader#The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "(0),0,1,2,3,sum4,4,/,NUM_SIMDS,/,(100),*,5,6,7,8,sum4,ifnotzero");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(19113);
        internalCounters.push_back(19224);
        internalCounters.push_back(19335);
        internalCounters.push_back(19446);
        internalCounters.push_back(19557);
        internalCounters.push_back(19668);
        internalCounters.push_back(19779);
        internalCounters.push_back(19890);
        internalCounters.push_back(20001);
        internalCounters.push_back(20112);
        internalCounters.push_back(20223);
        internalCounters.push_back(20334);
        internalCounters.push_back(20445);
        internalCounters.push_back(20556);
        internalCounters.push_back(20667);
        internalCounters.push_back(20778);
        internalCounters.push_back(20889);
        internalCounters.push_back(21000);
        internalCounters.push_back(21111);
        internalCounters.push_back(21222);
        internalCounters.push_back(21333);
        internalCounters.push_back(21444);
        internalCounters.push_back(21555);
        internalCounters.push_back(21666);
        internalCounters.push_back(21777);
        internalCounters.push_back(21888);
        internalCounters.push_back(21999);
        internalCounters.push_back(22110);
        internalCounters.push_back(22221);
        internalCounters.push_back(22332);
        internalCounters.push_back(22443);
        internalCounters.push_back(22554);
        internalCounters.push_back(22665);
        internalCounters.push_back(22776);
        internalCounters.push_back(22887);
        internalCounters.push_back(22998);
        internalCounters.push_back(23109);
        internalCounters.push_back(23220);
        internalCounters.push_back(23331);
        internalCounters.push_back(23442);
        internalCounters.push_back(23553);
        internalCounters.push_back(23664);
        internalCounters.push_back(23775);
        internalCounters.push_back(23886);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("TexUnitBusy", "#Timing#The percentage of GPUTime the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44,44,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(19182);
        internalCounters.push_back(19293);
        internalCounters.push_back(19404);
        internalCounters.push_back(19515);
        internalCounters.push_back(19626);
        internalCounters.push_back(19737);
        internalCounters.push_back(19848);
        internalCounters.push_back(19959);
        internalCounters.push_back(20070);
        internalCounters.push_back(20181);
        internalCounters.push_back(20292);
        internalCounters.push_back(20403);
        internalCounters.push_back(20514);
        internalCounters.push_back(20625);
        internalCounters.push_back(20736);
        internalCounters.push_back(20847);
        internalCounters.push_back(20958);
        internalCounters.push_back(21069);
        internalCounters.push_back(21180);
        internalCounters.push_back(21291);
        internalCounters.push_back(21402);
        internalCounters.push_back(21513);
        internalCounters.push_back(21624);
        internalCounters.push_back(21735);
        internalCounters.push_back(21846);
        internalCounters.push_back(21957);
        internalCounters.push_back(22068);
        internalCounters.push_back(22179);
        internalCounters.push_back(22290);
        internalCounters.push_back(22401);
        internalCounters.push_back(22512);
        internalCounters.push_back(22623);
        internalCounters.push_back(22734);
        internalCounters.push_back(22845);
        internalCounters.push_back(22956);
        internalCounters.push_back(23067);
        internalCounters.push_back(23178);
        internalCounters.push_back(23289);
        internalCounters.push_back(23400);
        internalCounters.push_back(23511);
        internalCounters.push_back(23622);
        internalCounters.push_back(23733);
        internalCounters.push_back(23844);
        internalCounters.push_back(23955);
        internalCounters.push_back(19181);
        internalCounters.push_back(19292);
        internalCounters.push_back(19403);
        internalCounters.push_back(19514);
        internalCounters.push_back(19625);
        internalCounters.push_back(19736);
        internalCounters.push_back(19847);
        internalCounters.push_back(19958);
        internalCounters.push_back(20069);
        internalCounters.push_back(20180);
        internalCounters.push_back(20291);
        internalCounters.push_back(20402);
        internalCounters.push_back(20513);
        internalCounters.push_back(20624);
        internalCounters.push_back(20735);
        internalCounters.push_back(20846);
        internalCounters.push_back(20957);
        internalCounters.push_back(21068);
        internalCounters.push_back(21179);
        internalCounters.push_back(21290);
        internalCounters.push_back(21401);
        internalCounters.push_back(21512);
        internalCounters.push_back(21623);
        internalCounters.push_back(21734);
        internalCounters.push_back(21845);
        internalCounters.push_back(21956);
        internalCounters.push_back(22067);
        internalCounters.push_back(22178);
        internalCounters.push_back(22289);
        internalCounters.push_back(22400);
        internalCounters.push_back(22511);
        internalCounters.push_back(22622);
        internalCounters.push_back(22733);
        internalCounters.push_back(22844);
        internalCounters.push_back(22955);
        internalCounters.push_back(23066);
        internalCounters.push_back(23177);
        internalCounters.push_back(23288);
        internalCounters.push_back(23399);
        internalCounters.push_back(23510);
        internalCounters.push_back(23621);
        internalCounters.push_back(23732);
        internalCounters.push_back(23843);
        internalCounters.push_back(23954);

        p.DefinePublicCounter("TexTriFilteringPct", "#TextureUnit#Percentage of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,sum44,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,+,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(19184);
        internalCounters.push_back(19295);
        internalCounters.push_back(19406);
        internalCounters.push_back(19517);
        internalCounters.push_back(19628);
        internalCounters.push_back(19739);
        internalCounters.push_back(19850);
        internalCounters.push_back(19961);
        internalCounters.push_back(20072);
        internalCounters.push_back(20183);
        internalCounters.push_back(20294);
        internalCounters.push_back(20405);
        internalCounters.push_back(20516);
        internalCounters.push_back(20627);
        internalCounters.push_back(20738);
        internalCounters.push_back(20849);
        internalCounters.push_back(20960);
        internalCounters.push_back(21071);
        internalCounters.push_back(21182);
        internalCounters.push_back(21293);
        internalCounters.push_back(21404);
        internalCounters.push_back(21515);
        internalCounters.push_back(21626);
        internalCounters.push_back(21737);
        internalCounters.push_back(21848);
        internalCounters.push_back(21959);
        internalCounters.push_back(22070);
        internalCounters.push_back(22181);
        internalCounters.push_back(22292);
        internalCounters.push_back(22403);
        internalCounters.push_back(22514);
        internalCounters.push_back(22625);
        internalCounters.push_back(22736);
        internalCounters.push_back(22847);
        internalCounters.push_back(22958);
        internalCounters.push_back(23069);
        internalCounters.push_back(23180);
        internalCounters.push_back(23291);
        internalCounters.push_back(23402);
        internalCounters.push_back(23513);
        internalCounters.push_back(23624);
        internalCounters.push_back(23735);
        internalCounters.push_back(23846);
        internalCounters.push_back(23957);
        internalCounters.push_back(19183);
        internalCounters.push_back(19294);
        internalCounters.push_back(19405);
        internalCounters.push_back(19516);
        internalCounters.push_back(19627);
        internalCounters.push_back(19738);
        internalCounters.push_back(19849);
        internalCounters.push_back(19960);
        internalCounters.push_back(20071);
        internalCounters.push_back(20182);
        internalCounters.push_back(20293);
        internalCounters.push_back(20404);
        internalCounters.push_back(20515);
        internalCounters.push_back(20626);
        internalCounters.push_back(20737);
        internalCounters.push_back(20848);
        internalCounters.push_back(20959);
        internalCounters.push_back(21070);
        internalCounters.push_back(21181);
        internalCounters.push_back(21292);
        internalCounters.push_back(21403);
        internalCounters.push_back(21514);
        internalCounters.push_back(21625);
        internalCounters.push_back(21736);
        internalCounters.push_back(21847);
        internalCounters.push_back(21958);
        internalCounters.push_back(22069);
        internalCounters.push_back(22180);
        internalCounters.push_back(22291);
        internalCounters.push_back(22402);
        internalCounters.push_back(22513);
        internalCounters.push_back(22624);
        internalCounters.push_back(22735);
        internalCounters.push_back(22846);
        internalCounters.push_back(22957);
        internalCounters.push_back(23068);
        internalCounters.push_back(23179);
        internalCounters.push_back(23290);
        internalCounters.push_back(23401);
        internalCounters.push_back(23512);
        internalCounters.push_back(23623);
        internalCounters.push_back(23734);
        internalCounters.push_back(23845);
        internalCounters.push_back(23956);

        p.DefinePublicCounter("TexVolFilteringPct", "#TextureUnit#Percentage of pixels that received volume filtering.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,sum44,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,+,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(19202);
        internalCounters.push_back(19313);
        internalCounters.push_back(19424);
        internalCounters.push_back(19535);
        internalCounters.push_back(19646);
        internalCounters.push_back(19757);
        internalCounters.push_back(19868);
        internalCounters.push_back(19979);
        internalCounters.push_back(20090);
        internalCounters.push_back(20201);
        internalCounters.push_back(20312);
        internalCounters.push_back(20423);
        internalCounters.push_back(20534);
        internalCounters.push_back(20645);
        internalCounters.push_back(20756);
        internalCounters.push_back(20867);
        internalCounters.push_back(20978);
        internalCounters.push_back(21089);
        internalCounters.push_back(21200);
        internalCounters.push_back(21311);
        internalCounters.push_back(21422);
        internalCounters.push_back(21533);
        internalCounters.push_back(21644);
        internalCounters.push_back(21755);
        internalCounters.push_back(21866);
        internalCounters.push_back(21977);
        internalCounters.push_back(22088);
        internalCounters.push_back(22199);
        internalCounters.push_back(22310);
        internalCounters.push_back(22421);
        internalCounters.push_back(22532);
        internalCounters.push_back(22643);
        internalCounters.push_back(22754);
        internalCounters.push_back(22865);
        internalCounters.push_back(22976);
        internalCounters.push_back(23087);
        internalCounters.push_back(23198);
        internalCounters.push_back(23309);
        internalCounters.push_back(23420);
        internalCounters.push_back(23531);
        internalCounters.push_back(23642);
        internalCounters.push_back(23753);
        internalCounters.push_back(23864);
        internalCounters.push_back(23975);
        internalCounters.push_back(19203);
        internalCounters.push_back(19314);
        internalCounters.push_back(19425);
        internalCounters.push_back(19536);
        internalCounters.push_back(19647);
        internalCounters.push_back(19758);
        internalCounters.push_back(19869);
        internalCounters.push_back(19980);
        internalCounters.push_back(20091);
        internalCounters.push_back(20202);
        internalCounters.push_back(20313);
        internalCounters.push_back(20424);
        internalCounters.push_back(20535);
        internalCounters.push_back(20646);
        internalCounters.push_back(20757);
        internalCounters.push_back(20868);
        internalCounters.push_back(20979);
        internalCounters.push_back(21090);
        internalCounters.push_back(21201);
        internalCounters.push_back(21312);
        internalCounters.push_back(21423);
        internalCounters.push_back(21534);
        internalCounters.push_back(21645);
        internalCounters.push_back(21756);
        internalCounters.push_back(21867);
        internalCounters.push_back(21978);
        internalCounters.push_back(22089);
        internalCounters.push_back(22200);
        internalCounters.push_back(22311);
        internalCounters.push_back(22422);
        internalCounters.push_back(22533);
        internalCounters.push_back(22644);
        internalCounters.push_back(22755);
        internalCounters.push_back(22866);
        internalCounters.push_back(22977);
        internalCounters.push_back(23088);
        internalCounters.push_back(23199);
        internalCounters.push_back(23310);
        internalCounters.push_back(23421);
        internalCounters.push_back(23532);
        internalCounters.push_back(23643);
        internalCounters.push_back(23754);
        internalCounters.push_back(23865);
        internalCounters.push_back(23976);
        internalCounters.push_back(19204);
        internalCounters.push_back(19315);
        internalCounters.push_back(19426);
        internalCounters.push_back(19537);
        internalCounters.push_back(19648);
        internalCounters.push_back(19759);
        internalCounters.push_back(19870);
        internalCounters.push_back(19981);
        internalCounters.push_back(20092);
        internalCounters.push_back(20203);
        internalCounters.push_back(20314);
        internalCounters.push_back(20425);
        internalCounters.push_back(20536);
        internalCounters.push_back(20647);
        internalCounters.push_back(20758);
        internalCounters.push_back(20869);
        internalCounters.push_back(20980);
        internalCounters.push_back(21091);
        internalCounters.push_back(21202);
        internalCounters.push_back(21313);
        internalCounters.push_back(21424);
        internalCounters.push_back(21535);
        internalCounters.push_back(21646);
        internalCounters.push_back(21757);
        internalCounters.push_back(21868);
        internalCounters.push_back(21979);
        internalCounters.push_back(22090);
        internalCounters.push_back(22201);
        internalCounters.push_back(22312);
        internalCounters.push_back(22423);
        internalCounters.push_back(22534);
        internalCounters.push_back(22645);
        internalCounters.push_back(22756);
        internalCounters.push_back(22867);
        internalCounters.push_back(22978);
        internalCounters.push_back(23089);
        internalCounters.push_back(23200);
        internalCounters.push_back(23311);
        internalCounters.push_back(23422);
        internalCounters.push_back(23533);
        internalCounters.push_back(23644);
        internalCounters.push_back(23755);
        internalCounters.push_back(23866);
        internalCounters.push_back(23977);
        internalCounters.push_back(19205);
        internalCounters.push_back(19316);
        internalCounters.push_back(19427);
        internalCounters.push_back(19538);
        internalCounters.push_back(19649);
        internalCounters.push_back(19760);
        internalCounters.push_back(19871);
        internalCounters.push_back(19982);
        internalCounters.push_back(20093);
        internalCounters.push_back(20204);
        internalCounters.push_back(20315);
        internalCounters.push_back(20426);
        internalCounters.push_back(20537);
        internalCounters.push_back(20648);
        internalCounters.push_back(20759);
        internalCounters.push_back(20870);
        internalCounters.push_back(20981);
        internalCounters.push_back(21092);
        internalCounters.push_back(21203);
        internalCounters.push_back(21314);
        internalCounters.push_back(21425);
        internalCounters.push_back(21536);
        internalCounters.push_back(21647);
        internalCounters.push_back(21758);
        internalCounters.push_back(21869);
        internalCounters.push_back(21980);
        internalCounters.push_back(22091);
        internalCounters.push_back(22202);
        internalCounters.push_back(22313);
        internalCounters.push_back(22424);
        internalCounters.push_back(22535);
        internalCounters.push_back(22646);
        internalCounters.push_back(22757);
        internalCounters.push_back(22868);
        internalCounters.push_back(22979);
        internalCounters.push_back(23090);
        internalCounters.push_back(23201);
        internalCounters.push_back(23312);
        internalCounters.push_back(23423);
        internalCounters.push_back(23534);
        internalCounters.push_back(23645);
        internalCounters.push_back(23756);
        internalCounters.push_back(23867);
        internalCounters.push_back(23978);
        internalCounters.push_back(19206);
        internalCounters.push_back(19317);
        internalCounters.push_back(19428);
        internalCounters.push_back(19539);
        internalCounters.push_back(19650);
        internalCounters.push_back(19761);
        internalCounters.push_back(19872);
        internalCounters.push_back(19983);
        internalCounters.push_back(20094);
        internalCounters.push_back(20205);
        internalCounters.push_back(20316);
        internalCounters.push_back(20427);
        internalCounters.push_back(20538);
        internalCounters.push_back(20649);
        internalCounters.push_back(20760);
        internalCounters.push_back(20871);
        internalCounters.push_back(20982);
        internalCounters.push_back(21093);
        internalCounters.push_back(21204);
        internalCounters.push_back(21315);
        internalCounters.push_back(21426);
        internalCounters.push_back(21537);
        internalCounters.push_back(21648);
        internalCounters.push_back(21759);
        internalCounters.push_back(21870);
        internalCounters.push_back(21981);
        internalCounters.push_back(22092);
        internalCounters.push_back(22203);
        internalCounters.push_back(22314);
        internalCounters.push_back(22425);
        internalCounters.push_back(22536);
        internalCounters.push_back(22647);
        internalCounters.push_back(22758);
        internalCounters.push_back(22869);
        internalCounters.push_back(22980);
        internalCounters.push_back(23091);
        internalCounters.push_back(23202);
        internalCounters.push_back(23313);
        internalCounters.push_back(23424);
        internalCounters.push_back(23535);
        internalCounters.push_back(23646);
        internalCounters.push_back(23757);
        internalCounters.push_back(23868);
        internalCounters.push_back(23979);
        internalCounters.push_back(19207);
        internalCounters.push_back(19318);
        internalCounters.push_back(19429);
        internalCounters.push_back(19540);
        internalCounters.push_back(19651);
        internalCounters.push_back(19762);
        internalCounters.push_back(19873);
        internalCounters.push_back(19984);
        internalCounters.push_back(20095);
        internalCounters.push_back(20206);
        internalCounters.push_back(20317);
        internalCounters.push_back(20428);
        internalCounters.push_back(20539);
        internalCounters.push_back(20650);
        internalCounters.push_back(20761);
        internalCounters.push_back(20872);
        internalCounters.push_back(20983);
        internalCounters.push_back(21094);
        internalCounters.push_back(21205);
        internalCounters.push_back(21316);
        internalCounters.push_back(21427);
        internalCounters.push_back(21538);
        internalCounters.push_back(21649);
        internalCounters.push_back(21760);
        internalCounters.push_back(21871);
        internalCounters.push_back(21982);
        internalCounters.push_back(22093);
        internalCounters.push_back(22204);
        internalCounters.push_back(22315);
        internalCounters.push_back(22426);
        internalCounters.push_back(22537);
        internalCounters.push_back(22648);
        internalCounters.push_back(22759);
        internalCounters.push_back(22870);
        internalCounters.push_back(22981);
        internalCounters.push_back(23092);
        internalCounters.push_back(23203);
        internalCounters.push_back(23314);
        internalCounters.push_back(23425);
        internalCounters.push_back(23536);
        internalCounters.push_back(23647);
        internalCounters.push_back(23758);
        internalCounters.push_back(23869);
        internalCounters.push_back(23980);
        internalCounters.push_back(19208);
        internalCounters.push_back(19319);
        internalCounters.push_back(19430);
        internalCounters.push_back(19541);
        internalCounters.push_back(19652);
        internalCounters.push_back(19763);
        internalCounters.push_back(19874);
        internalCounters.push_back(19985);
        internalCounters.push_back(20096);
        internalCounters.push_back(20207);
        internalCounters.push_back(20318);
        internalCounters.push_back(20429);
        internalCounters.push_back(20540);
        internalCounters.push_back(20651);
        internalCounters.push_back(20762);
        internalCounters.push_back(20873);
        internalCounters.push_back(20984);
        internalCounters.push_back(21095);
        internalCounters.push_back(21206);
        internalCounters.push_back(21317);
        internalCounters.push_back(21428);
        internalCounters.push_back(21539);
        internalCounters.push_back(21650);
        internalCounters.push_back(21761);
        internalCounters.push_back(21872);
        internalCounters.push_back(21983);
        internalCounters.push_back(22094);
        internalCounters.push_back(22205);
        internalCounters.push_back(22316);
        internalCounters.push_back(22427);
        internalCounters.push_back(22538);
        internalCounters.push_back(22649);
        internalCounters.push_back(22760);
        internalCounters.push_back(22871);
        internalCounters.push_back(22982);
        internalCounters.push_back(23093);
        internalCounters.push_back(23204);
        internalCounters.push_back(23315);
        internalCounters.push_back(23426);
        internalCounters.push_back(23537);
        internalCounters.push_back(23648);
        internalCounters.push_back(23759);
        internalCounters.push_back(23870);
        internalCounters.push_back(23981);
        internalCounters.push_back(19209);
        internalCounters.push_back(19320);
        internalCounters.push_back(19431);
        internalCounters.push_back(19542);
        internalCounters.push_back(19653);
        internalCounters.push_back(19764);
        internalCounters.push_back(19875);
        internalCounters.push_back(19986);
        internalCounters.push_back(20097);
        internalCounters.push_back(20208);
        internalCounters.push_back(20319);
        internalCounters.push_back(20430);
        internalCounters.push_back(20541);
        internalCounters.push_back(20652);
        internalCounters.push_back(20763);
        internalCounters.push_back(20874);
        internalCounters.push_back(20985);
        internalCounters.push_back(21096);
        internalCounters.push_back(21207);
        internalCounters.push_back(21318);
        internalCounters.push_back(21429);
        internalCounters.push_back(21540);
        internalCounters.push_back(21651);
        internalCounters.push_back(21762);
        internalCounters.push_back(21873);
        internalCounters.push_back(21984);
        internalCounters.push_back(22095);
        internalCounters.push_back(22206);
        internalCounters.push_back(22317);
        internalCounters.push_back(22428);
        internalCounters.push_back(22539);
        internalCounters.push_back(22650);
        internalCounters.push_back(22761);
        internalCounters.push_back(22872);
        internalCounters.push_back(22983);
        internalCounters.push_back(23094);
        internalCounters.push_back(23205);
        internalCounters.push_back(23316);
        internalCounters.push_back(23427);
        internalCounters.push_back(23538);
        internalCounters.push_back(23649);
        internalCounters.push_back(23760);
        internalCounters.push_back(23871);
        internalCounters.push_back(23982);
        internalCounters.push_back(19210);
        internalCounters.push_back(19321);
        internalCounters.push_back(19432);
        internalCounters.push_back(19543);
        internalCounters.push_back(19654);
        internalCounters.push_back(19765);
        internalCounters.push_back(19876);
        internalCounters.push_back(19987);
        internalCounters.push_back(20098);
        internalCounters.push_back(20209);
        internalCounters.push_back(20320);
        internalCounters.push_back(20431);
        internalCounters.push_back(20542);
        internalCounters.push_back(20653);
        internalCounters.push_back(20764);
        internalCounters.push_back(20875);
        internalCounters.push_back(20986);
        internalCounters.push_back(21097);
        internalCounters.push_back(21208);
        internalCounters.push_back(21319);
        internalCounters.push_back(21430);
        internalCounters.push_back(21541);
        internalCounters.push_back(21652);
        internalCounters.push_back(21763);
        internalCounters.push_back(21874);
        internalCounters.push_back(21985);
        internalCounters.push_back(22096);
        internalCounters.push_back(22207);
        internalCounters.push_back(22318);
        internalCounters.push_back(22429);
        internalCounters.push_back(22540);
        internalCounters.push_back(22651);
        internalCounters.push_back(22762);
        internalCounters.push_back(22873);
        internalCounters.push_back(22984);
        internalCounters.push_back(23095);
        internalCounters.push_back(23206);
        internalCounters.push_back(23317);
        internalCounters.push_back(23428);
        internalCounters.push_back(23539);
        internalCounters.push_back(23650);
        internalCounters.push_back(23761);
        internalCounters.push_back(23872);
        internalCounters.push_back(23983);

        p.DefinePublicCounter("TexAveAnisotropy", "#TextureUnit#The average degree of anisotropy applied. A number between 1 and 16. The anisotropic filtering algorithm only applies samples where they are required (e.g. there will be no extra anisotropic samples if the view vector is perpendicular to the surface) so this can be much lower than the requested anisotropy.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,(2),44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,sum44,*,+,(4),88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,sum44,*,+,(6),132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,sum44,*,+,(8),176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,sum44,*,+,(10),220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,sum44,*,+,(12),264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,sum44,*,+,(14),308,309,310,311,312,313,314,315,316,317,318,319,320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,sum44,*,+,(16),352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,384,385,386,387,388,389,390,391,392,393,394,395,sum44,*,+,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,sum44,+,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,sum44,+,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,sum44,+,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,sum44,+,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,sum44,+,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,sum44,+,308,309,310,311,312,313,314,315,316,317,318,319,320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,sum44,+,352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,384,385,386,387,388,389,390,391,392,393,394,395,sum44,+,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3916);
        internalCounters.push_back(4173);
        internalCounters.push_back(4430);
        internalCounters.push_back(4687);
        internalCounters.push_back(4944);
        internalCounters.push_back(5201);
        internalCounters.push_back(5458);
        internalCounters.push_back(5715);
        internalCounters.push_back(5972);
        internalCounters.push_back(6229);
        internalCounters.push_back(6486);
        internalCounters.push_back(6743);
        internalCounters.push_back(7000);
        internalCounters.push_back(7257);
        internalCounters.push_back(7514);
        internalCounters.push_back(7771);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("DepthStencilTestBusy", "#Timing#Percentage of time GPU spent performing depth and stencil tests relative to GPUBusy.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3787);
        internalCounters.push_back(4044);
        internalCounters.push_back(4301);
        internalCounters.push_back(4558);
        internalCounters.push_back(4815);
        internalCounters.push_back(5072);
        internalCounters.push_back(5329);
        internalCounters.push_back(5586);
        internalCounters.push_back(5843);
        internalCounters.push_back(6100);
        internalCounters.push_back(6357);
        internalCounters.push_back(6614);
        internalCounters.push_back(6871);
        internalCounters.push_back(7128);
        internalCounters.push_back(7385);
        internalCounters.push_back(7642);
        internalCounters.push_back(3776);
        internalCounters.push_back(4033);
        internalCounters.push_back(4290);
        internalCounters.push_back(4547);
        internalCounters.push_back(4804);
        internalCounters.push_back(5061);
        internalCounters.push_back(5318);
        internalCounters.push_back(5575);
        internalCounters.push_back(5832);
        internalCounters.push_back(6089);
        internalCounters.push_back(6346);
        internalCounters.push_back(6603);
        internalCounters.push_back(6860);
        internalCounters.push_back(7117);
        internalCounters.push_back(7374);
        internalCounters.push_back(7631);

        p.DefinePublicCounter("HiZTilesAccepted", "#DepthAndStencil#Percentage of tiles accepted by HiZ and will be rendered to the depth or color buffers.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3776);
        internalCounters.push_back(4033);
        internalCounters.push_back(4290);
        internalCounters.push_back(4547);
        internalCounters.push_back(4804);
        internalCounters.push_back(5061);
        internalCounters.push_back(5318);
        internalCounters.push_back(5575);
        internalCounters.push_back(5832);
        internalCounters.push_back(6089);
        internalCounters.push_back(6346);
        internalCounters.push_back(6603);
        internalCounters.push_back(6860);
        internalCounters.push_back(7117);
        internalCounters.push_back(7374);
        internalCounters.push_back(7631);
        internalCounters.push_back(3800);
        internalCounters.push_back(4057);
        internalCounters.push_back(4314);
        internalCounters.push_back(4571);
        internalCounters.push_back(4828);
        internalCounters.push_back(5085);
        internalCounters.push_back(5342);
        internalCounters.push_back(5599);
        internalCounters.push_back(5856);
        internalCounters.push_back(6113);
        internalCounters.push_back(6370);
        internalCounters.push_back(6627);
        internalCounters.push_back(6884);
        internalCounters.push_back(7141);
        internalCounters.push_back(7398);
        internalCounters.push_back(7655);

        p.DefinePublicCounter("PreZTilesDetailCulled", "#DepthAndStencil#Percentage of tiles rejected because the associated prim had no contributing area.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8760);
        internalCounters.push_back(9155);
        internalCounters.push_back(9550);
        internalCounters.push_back(9945);
        internalCounters.push_back(8761);
        internalCounters.push_back(9156);
        internalCounters.push_back(9551);
        internalCounters.push_back(9946);
        internalCounters.push_back(8762);
        internalCounters.push_back(9157);
        internalCounters.push_back(9552);
        internalCounters.push_back(9947);
        internalCounters.push_back(8763);
        internalCounters.push_back(9158);
        internalCounters.push_back(9553);
        internalCounters.push_back(9948);
        internalCounters.push_back(8836);
        internalCounters.push_back(9231);
        internalCounters.push_back(9626);
        internalCounters.push_back(10021);
        internalCounters.push_back(8837);
        internalCounters.push_back(9232);
        internalCounters.push_back(9627);
        internalCounters.push_back(10022);
        internalCounters.push_back(8838);
        internalCounters.push_back(9233);
        internalCounters.push_back(9628);
        internalCounters.push_back(10023);
        internalCounters.push_back(8839);
        internalCounters.push_back(9234);
        internalCounters.push_back(9629);
        internalCounters.push_back(10024);

        p.DefinePublicCounter("HiZQuadsCulled", "#DepthAndStencil#Percentage of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8760);
        internalCounters.push_back(9155);
        internalCounters.push_back(9550);
        internalCounters.push_back(9945);
        internalCounters.push_back(8761);
        internalCounters.push_back(9156);
        internalCounters.push_back(9551);
        internalCounters.push_back(9946);
        internalCounters.push_back(8762);
        internalCounters.push_back(9157);
        internalCounters.push_back(9552);
        internalCounters.push_back(9947);
        internalCounters.push_back(8763);
        internalCounters.push_back(9158);
        internalCounters.push_back(9553);
        internalCounters.push_back(9948);
        internalCounters.push_back(8860);
        internalCounters.push_back(9255);
        internalCounters.push_back(9650);
        internalCounters.push_back(10045);
        internalCounters.push_back(8836);
        internalCounters.push_back(9231);
        internalCounters.push_back(9626);
        internalCounters.push_back(10021);
        internalCounters.push_back(8837);
        internalCounters.push_back(9232);
        internalCounters.push_back(9627);
        internalCounters.push_back(10022);
        internalCounters.push_back(8838);
        internalCounters.push_back(9233);
        internalCounters.push_back(9628);
        internalCounters.push_back(10023);
        internalCounters.push_back(8839);
        internalCounters.push_back(9234);
        internalCounters.push_back(9629);
        internalCounters.push_back(10024);

        p.DefinePublicCounter("PreZQuadsCulled", "#DepthAndStencil#Percentage of quads rejected based on the detailZ and earlyZ tests.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,sum16,16,17,18,19,sum4,-,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8860);
        internalCounters.push_back(9255);
        internalCounters.push_back(9650);
        internalCounters.push_back(10045);
        internalCounters.push_back(8760);
        internalCounters.push_back(9155);
        internalCounters.push_back(9550);
        internalCounters.push_back(9945);
        internalCounters.push_back(8761);
        internalCounters.push_back(9156);
        internalCounters.push_back(9551);
        internalCounters.push_back(9946);
        internalCounters.push_back(8762);
        internalCounters.push_back(9157);
        internalCounters.push_back(9552);
        internalCounters.push_back(9947);
        internalCounters.push_back(8763);
        internalCounters.push_back(9158);
        internalCounters.push_back(9553);
        internalCounters.push_back(9948);

        p.DefinePublicCounter("PostZQuads", "#DepthAndStencil#Percentage of quads for which the pixel shader will run and may be postZ tested.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,sum4,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,sum16,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3949);
        internalCounters.push_back(4206);
        internalCounters.push_back(4463);
        internalCounters.push_back(4720);
        internalCounters.push_back(4977);
        internalCounters.push_back(5234);
        internalCounters.push_back(5491);
        internalCounters.push_back(5748);
        internalCounters.push_back(6005);
        internalCounters.push_back(6262);
        internalCounters.push_back(6519);
        internalCounters.push_back(6776);
        internalCounters.push_back(7033);
        internalCounters.push_back(7290);
        internalCounters.push_back(7547);
        internalCounters.push_back(7804);

        p.DefinePublicCounter("PreZSamplesPassing", "#DepthAndStencil#Number of samples tested for Z before shading and passed.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3951);
        internalCounters.push_back(4208);
        internalCounters.push_back(4465);
        internalCounters.push_back(4722);
        internalCounters.push_back(4979);
        internalCounters.push_back(5236);
        internalCounters.push_back(5493);
        internalCounters.push_back(5750);
        internalCounters.push_back(6007);
        internalCounters.push_back(6264);
        internalCounters.push_back(6521);
        internalCounters.push_back(6778);
        internalCounters.push_back(7035);
        internalCounters.push_back(7292);
        internalCounters.push_back(7549);
        internalCounters.push_back(7806);

        p.DefinePublicCounter("PreZSamplesFailingS", "#DepthAndStencil#Number of samples tested for Z before shading and failed stencil test.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3950);
        internalCounters.push_back(4207);
        internalCounters.push_back(4464);
        internalCounters.push_back(4721);
        internalCounters.push_back(4978);
        internalCounters.push_back(5235);
        internalCounters.push_back(5492);
        internalCounters.push_back(5749);
        internalCounters.push_back(6006);
        internalCounters.push_back(6263);
        internalCounters.push_back(6520);
        internalCounters.push_back(6777);
        internalCounters.push_back(7034);
        internalCounters.push_back(7291);
        internalCounters.push_back(7548);
        internalCounters.push_back(7805);

        p.DefinePublicCounter("PreZSamplesFailingZ", "#DepthAndStencil#Number of samples tested for Z before shading and failed Z test.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3946);
        internalCounters.push_back(4203);
        internalCounters.push_back(4460);
        internalCounters.push_back(4717);
        internalCounters.push_back(4974);
        internalCounters.push_back(5231);
        internalCounters.push_back(5488);
        internalCounters.push_back(5745);
        internalCounters.push_back(6002);
        internalCounters.push_back(6259);
        internalCounters.push_back(6516);
        internalCounters.push_back(6773);
        internalCounters.push_back(7030);
        internalCounters.push_back(7287);
        internalCounters.push_back(7544);
        internalCounters.push_back(7801);

        p.DefinePublicCounter("PostZSamplesPassing", "#DepthAndStencil#Number of samples tested for Z after shading and passed.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3948);
        internalCounters.push_back(4205);
        internalCounters.push_back(4462);
        internalCounters.push_back(4719);
        internalCounters.push_back(4976);
        internalCounters.push_back(5233);
        internalCounters.push_back(5490);
        internalCounters.push_back(5747);
        internalCounters.push_back(6004);
        internalCounters.push_back(6261);
        internalCounters.push_back(6518);
        internalCounters.push_back(6775);
        internalCounters.push_back(7032);
        internalCounters.push_back(7289);
        internalCounters.push_back(7546);
        internalCounters.push_back(7803);

        p.DefinePublicCounter("PostZSamplesFailingS", "#DepthAndStencil#Number of samples tested for Z after shading and failed stencil test.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3947);
        internalCounters.push_back(4204);
        internalCounters.push_back(4461);
        internalCounters.push_back(4718);
        internalCounters.push_back(4975);
        internalCounters.push_back(5232);
        internalCounters.push_back(5489);
        internalCounters.push_back(5746);
        internalCounters.push_back(6003);
        internalCounters.push_back(6260);
        internalCounters.push_back(6517);
        internalCounters.push_back(6774);
        internalCounters.push_back(7031);
        internalCounters.push_back(7288);
        internalCounters.push_back(7545);
        internalCounters.push_back(7802);

        p.DefinePublicCounter("PostZSamplesFailingZ", "#DepthAndStencil#Number of samples tested for Z after shading and failed Z test.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3818);
        internalCounters.push_back(4075);
        internalCounters.push_back(4332);
        internalCounters.push_back(4589);
        internalCounters.push_back(4846);
        internalCounters.push_back(5103);
        internalCounters.push_back(5360);
        internalCounters.push_back(5617);
        internalCounters.push_back(5874);
        internalCounters.push_back(6131);
        internalCounters.push_back(6388);
        internalCounters.push_back(6645);
        internalCounters.push_back(6902);
        internalCounters.push_back(7159);
        internalCounters.push_back(7416);
        internalCounters.push_back(7673);
        internalCounters.push_back(7886);

        p.DefinePublicCounter("ZUnitStalled", "#DepthAndStencil#The percentage of GPUTime the depth buffer spends waiting for the color buffer to be ready to accept data. High figures here indicate a bottleneck in color buffer operations.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(283);
        internalCounters.push_back(509);
        internalCounters.push_back(735);
        internalCounters.push_back(961);
        internalCounters.push_back(1187);
        internalCounters.push_back(1413);
        internalCounters.push_back(1639);
        internalCounters.push_back(1865);
        internalCounters.push_back(2091);
        internalCounters.push_back(2317);
        internalCounters.push_back(2543);
        internalCounters.push_back(2769);
        internalCounters.push_back(2995);
        internalCounters.push_back(3221);
        internalCounters.push_back(3447);
        internalCounters.push_back(3673);

        p.DefinePublicCounter("CBMemRead", "#ColorBuffer#Number of bytes read from the color buffer.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(273);
        internalCounters.push_back(499);
        internalCounters.push_back(725);
        internalCounters.push_back(951);
        internalCounters.push_back(1177);
        internalCounters.push_back(1403);
        internalCounters.push_back(1629);
        internalCounters.push_back(1855);
        internalCounters.push_back(2081);
        internalCounters.push_back(2307);
        internalCounters.push_back(2533);
        internalCounters.push_back(2759);
        internalCounters.push_back(2985);
        internalCounters.push_back(3211);
        internalCounters.push_back(3437);
        internalCounters.push_back(3663);

        p.DefinePublicCounter("CBMemWritten", "#ColorBuffer#Number of bytes written to the color buffer.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(317);
        internalCounters.push_back(543);
        internalCounters.push_back(769);
        internalCounters.push_back(995);
        internalCounters.push_back(1221);
        internalCounters.push_back(1447);
        internalCounters.push_back(1673);
        internalCounters.push_back(1899);
        internalCounters.push_back(2125);
        internalCounters.push_back(2351);
        internalCounters.push_back(2577);
        internalCounters.push_back(2803);
        internalCounters.push_back(3029);
        internalCounters.push_back(3255);
        internalCounters.push_back(3481);
        internalCounters.push_back(3707);
        internalCounters.push_back(163);
        internalCounters.push_back(389);
        internalCounters.push_back(615);
        internalCounters.push_back(841);
        internalCounters.push_back(1067);
        internalCounters.push_back(1293);
        internalCounters.push_back(1519);
        internalCounters.push_back(1745);
        internalCounters.push_back(1971);
        internalCounters.push_back(2197);
        internalCounters.push_back(2423);
        internalCounters.push_back(2649);
        internalCounters.push_back(2875);
        internalCounters.push_back(3101);
        internalCounters.push_back(3327);
        internalCounters.push_back(3553);

        p.DefinePublicCounter("CBSlowPixelPct", "#ColorBuffer#Percentage of pixels written to the color buffer using a half-rate or quarter-rate format.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,/,(100),*,(100),min");
    }
}

